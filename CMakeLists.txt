cmake_minimum_required (VERSION 2.6)

if (NOT DEFINED BOCCA_PROJECT_NAME)
  set (BOCCA_PROJECT_NAME "this-project")
endif (NOT DEFINED BOCCA_PROJECT_NAME)

##
# Set locations of input and output
set (SRCDIR ${CMAKE_SOURCE_DIR}/src/csdms)
set (PRJDIR ${CMAKE_SOURCE_DIR}/projects)
set (DESTDIR ${CMAKE_BINARY_DIR})
set (PROJECT_TOP_DIR ${CMAKE_BINARY_DIR}/csdms)
set (CONFIG_DIR ${CMAKE_SOURCE_DIR}/share/config)
set (TEMPLATE_DIR ${CMAKE_SOURCE_DIR}/share/templates)

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

##
# Set project files for the targets
set (CSDMS_SRC ${PRJDIR}/csdms.xml)
set (CHILD_SRC ${PRJDIR}/child.xml)
set (STM_SRC ${PRJDIR}/stm.xml)
set (SEDFLUX_SRC ${PRJDIR}/sedflux.xml)

configure_file (
  ${CMAKE_CURRENT_SOURCE_DIR}/scripts/bocca-gui-backend.sh.cmake
  ${CMAKE_BINARY_DIR}/bocca-gui-backend.sh
  @ONLY)
configure_file (
  ${CMAKE_CURRENT_SOURCE_DIR}/scripts/set-env.sh.cmake
  ${CMAKE_BINARY_DIR}/set-env.sh
  @ONLY)
configure_file (
  ${CMAKE_CURRENT_SOURCE_DIR}/scripts/project.mod.cmake
  ${CMAKE_BINARY_DIR}/${BOCCA_PROJECT_NAME}
  @ONLY)

##
# The bocca build command to execute.  Note that the project xml file
# is left out as it is added for the particular targets.
set (BUILD_CMD 
  ${BOCCA_BUILD} --srcdir=${SRCDIR} --destdir=${DESTDIR})

##
# The bocca save command to execute.
set (SAVE_CMD ${BOCCA_SAVE} --dest=${SRCDIR} -C ${DESTDIR}/csdms)

##
# Set build targets.
add_custom_target (csdms ALL ${BUILD_CMD} ${CSDMS_SRC} VERBATIM)
add_custom_target (child ${BUILD_CMD} ${CHILD_SRC} VERBATIM)
add_custom_target (stm ${BUILD_CMD} ${STM_SRC} VERBATIM)
add_custom_target (sedflux ${BUILD_CMD} ${SEDFLUX_SRC} VERBATIM)

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
message ("  Project name:      ${BOCCA_PROJECT_NAME}")
message ("---")

