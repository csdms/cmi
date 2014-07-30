This document describes the general workflow when working with CSDMS projects.
Please feel free to add/modify as needed.

1. Working with an existing project
===================================

1.1 Load modules
----------------
  > modules load subversion internal cmake cca/mvapich2

1.2 Create build directory
--------------------------
  > mkdir -p /home/csdms/cca/<project_name>/<project_version>

1.3 Fetch CSDMS component repository
------------------------------------
  > cd /home/csdms/cca/<project_name>/<project_version>
  > svn co https://csdms.colorado.edu/svn/components/trunk src

1.4 Build the bocca project
---------------------------
  > mkdir _build && cd _build
  > cmake .. -DMODULE_NAME=<project_name>
  > make <project_name>

1.5 Configure and compile your bocca project
--------------------------------------------
  > cd csdms 
  > ./configure --prefix=/home/csdms/cca/<project_name>/<project_version>
  > make

1.6 Copy bocca-gui-backend.sh
-----------------------------
  cmake generates a bocca-gui-backend.sh file that loads the appropriate
  modules and sets some environment variables that CSDMS projects use.
  Copy this generated file into the bocca project's utils folder.

  > cp ../bocca-gui-backend.sh utils/bocca-gui-backend.sh

2. Importing a new project
==========================

If you want to add new CCA objects to the CSDMS project, do the following
steps after you have checked out a fresh version from the repository.

2.1 Copy you project impl files into import directory
-----------------------------------------------------
  > cd /home/csdms/cca/<project_name>/<project_version>/src
  > bocca-save <path_to_existing_project> ./import/csdms

2.2 Move project XML files into gen/xml
---------------------------------------
  > cp <project_name>.xml /home/csdms/cca/<project_name>/<project_version>/src/gen/xml

2.3 Create a target for you project in CMakeLists.txt
-----------------------------------------------------
  Add the following lines to CMakeLists.txt so that cmake will know how to
  build your new project.

  set (<project_name>_SRC ${PRJDIR}/<project_name>.xml)
  add_custom_target (<project_name> ALL ${BUILD_CMD} ${<project_name>_SRC} VERBATIM)

3. Committing changes
=====================
  Remember that nothing under your build directory is in version control.
  This means that your version control system will not see any changes you
  make to the bocca project to created above. You have to save you changes
  to the import directory.

3.1 Save changes
----------------
  > cd /home/csdms/cca/<project_name>/<project_version>/src/_build
  > make save

3.2 Look at your changes
------------------------
  > cd /home/csdms/cca/<project_name>/<project_version>/src
  > svn status

3.3 Commit your changes
-----------------------
  > cd /home/csdms/cca/<project_name>/<project_version>/src
  > svn commit import/csdms/.../changed_file.c

  
