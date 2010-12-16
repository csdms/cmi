cmake_minimum_required (VERSION 2.6)

##
# Set locations of input and output
set (SRCDIR ${CMAKE_SOURCE_DIR}/src)
set (PRJDIR ${CMAKE_SOURCE_DIR}/projects)
set (DESTDIR ${CMAKE_BINARY_DIR})

##
# Look for bocca command
find_program (BOCCA bocca)
if (BOCCA)
  message (STATUS "Looking for bocca... ${BOCCA}")
else (BOCCA)
  message (STATUS "Looking for bocca... Not found")
endif (BOCCA)

##
# Look for bocca-build command
find_program (BOCCA_BUILD bocca-build)
if (BOCCA_BUILD)
  message (STATUS "Looking for bocca-build... ${BOCCA_BUILD}")
else (BOCCA_BUILD)
  message (STATUS "Looking for bocca-build... Not found")
endif (BOCCA_BUILD)

##
# Set project files for the targets
set (CSDMS_SRC ${PRJDIR}/csdms.xml)
set (CHILD_SRC ${PRJDIR}/child.xml)
set (STM_SRC ${PRJDIR}/stm.xml)

##
# The bocca build command to execute.  Note that the project xml file
# is left out as it is added for the particular targets.
set (BUILD_CMD 
  ${BOCCA_BUILD} --srcdir=${SRCDIR} --destdir=${DESTDIR})

##
# Set build targets
add_custom_target (csdms ALL ${BUILD_CMD} ${CSDMS_SRC} VERBATIM)
add_custom_target (child ${BUILD_CMD} ${CHILD_SRC} VERBATIM)
add_custom_target (stm ${BUILD_CMD} ${STM_SRC} VERBATIM)

message ("---")
message ("  bocca:             ${BOCCA}")
message ("  bocca-build:       ${BOCCA_BUILD}")
message ("  Source directory:  ${SRCDIR}")
message ("  Build directory:   ${DESTDIR}/csdms")
message ("---")

