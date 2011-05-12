cmake_minimum_required (VERSION 2.6)

# If you want this cmake file to generate a make file that is able to build
# a new project, add your project's name to the list of projects contained
# in the PROJECTS variable.
#
# These are the projects that this cmake file can build. Each of these are
# also a target for the generated make file. For instance,
#   > make roms
# would construct the bocca project, "roms".
#
# Every project name must also have a corresponding xml description file
# that bocca-build can read. This must be located in
#   ${CMAKE_SOURCE_DIR}/gen/xml
# Thus, the path of the xml file for the roms project is
#   ${CMAKE_SOURCE_DIR}/gen/xml/roms.xml
set (PROJECTS 
  csdms
  child
  stm
  sedflux
  roms
  river_reader
  cem
  child_sedflux
  topoflow
  marssim
  test_proj
  marssim
  roms_builder
)

if (NOT DEFINED MODULE_NAME)
  set (MODULE_NAME "this-project")
endif (NOT DEFINED MODULE_NAME)

##
# Set locations of input and output
set (SRCDIR ${CMAKE_SOURCE_DIR}/import/csdms)
set (PRJDIR ${CMAKE_SOURCE_DIR}/gen/xml)
set (DESTDIR ${CMAKE_BINARY_DIR})
set (PROJECT_TOP_DIR ${CMAKE_BINARY_DIR}/csdms)
set (CONFIG_DIR ${CMAKE_SOURCE_DIR}/share/cmt/gui)
set (TEMPLATE_DIR ${CMAKE_SOURCE_DIR}/share/cmt/in)

##
# Look for bocca home
find_path (BOCCA_HOME bocca)
if (BOCCA_HOME)
  message (STATUS "Looking for bocca root... ${BOCCA_HOME}")
else (BOCCA_HOME)
  message (STATUS "Looking for bocca root... Not found")
endif (BOCCA_HOME)

##
# Look for bocca command
find_program (BOCCA bocca)
if (BOCCA)
  message (STATUS "Looking for bocca... ${BOCCA}")
else (BOCCA)
  message (STATUS "Looking for bocca... Not found")
endif (BOCCA)

##
# Look for ccafe-config command
find_program (CCAFE_CONFIG ccafe-config)
if (CCAFE_CONFIG)
  message (STATUS "Looking for ccafe-config... ${CCAFE_CONFIG}")
else (CCAFE_CONFIG)
  message (STATUS "Looking for ccafe-config... Not found")
endif (CCAFE_CONFIG)

##
# Look for bocca-build command
find_program (BOCCA_BUILD bocca-build)
if (BOCCA_BUILD)
  message (STATUS "Looking for bocca-build... ${BOCCA_BUILD}")
else (BOCCA_BUILD)
  message (STATUS "Looking for bocca-build... Not found")
endif (BOCCA_BUILD)

##
# Look for bocca-save command
find_program (BOCCA_SAVE bocca-save)
if (BOCCA_SAVE)
  message (STATUS "Looking for bocca-save... ${BOCCA_SAVE}")
else (BOCCA_SAVE)
  message (STATUS "Looking for bocca-save... Not found")
endif (BOCCA_SAVE)

configure_file (
  ${CMAKE_CURRENT_SOURCE_DIR}/gen/cmake/bocca-gui-backend.sh.cmake
  ${CMAKE_BINARY_DIR}/bocca-gui-backend.sh
  @ONLY)
configure_file (
  ${CMAKE_CURRENT_SOURCE_DIR}/gen/cmake/set-env.sh.cmake
  ${CMAKE_BINARY_DIR}/set-env.sh
  @ONLY)
configure_file (
  ${CMAKE_CURRENT_SOURCE_DIR}/gen/cmake/project.mod.cmake
  ${CMAKE_BINARY_DIR}/${MODULE_NAME}
  @ONLY)

##
# The bocca build command to execute.  Note that the project xml file
# is left out as it is added for the particular targets.
set (BUILD_CMD 
  ${BOCCA_BUILD} --srcdir=${SRCDIR} --destdir=${DESTDIR})

##
# The bocca save command to execute.
set (SAVE_CMD ${BOCCA_SAVE} ${DESTDIR}/csdms ${SRCDIR})
#set (SAVE_CMD ${BOCCA_SAVE} --dest=${SRCDIR} -C ${DESTDIR}/csdms)

add_custom_target (help ALL DEPENDS help_file)
add_custom_command (OUTPUT help_file
  COMMAND echo "Error: Missing the name of a project"
  COMMAND echo "Usage: make project_name"
  VERBATIM)

set (VALID_PROJECTS )
foreach (project ${PROJECTS})
  message (STATUS "Adding target for project: ${project}")
  if (EXISTS ${PRJDIR}/${project}.xml)
    set (${project}_SRC ${PRJDIR}/${project}.xml)
    add_custom_target (${project} ${BUILD_CMD} ${${project}_SRC} VERBATIM)

    set (VALID_PROJECTS ${VALID_PROJECTS} ${project})
  else (EXISTS ${PRJDIR}/${project}.xml)
    message (WARNING "Unable to add target: File not found: ${PRJDIR}/${project}.xml")
  endif (EXISTS ${PRJDIR}/${project}.xml)
endforeach (project)

##
# Save used-editable files to source directory for version control.
add_custom_target (save DEPENDS dummy_file)
add_custom_command (OUTPUT dummy_file
  COMMAND ${SAVE_CMD}
  VERBATIM)

message ("---")
message ("  bocca root:        ${BOCCA_HOME}")
message ("  bocca:             ${BOCCA}")
message ("  ccafe-config:      ${CCAFE_CONFIG}")
message ("  bocca-build:       ${BOCCA_BUILD}")
message ("  bocca-save:        ${BOCCA_SAVE}")
message ("  Source directory:  ${SRCDIR}")
message ("  Build directory:   ${DESTDIR}/csdms")
message ("  Project path:      ${PROJECT_TOP_DIR}")
message ("  Module name:       ${MODULE_NAME}")
message ("---")

message ("Available targets are:")
foreach (project ${VALID_PROJECTS})
  message ("  ${project}")
endforeach (project)

