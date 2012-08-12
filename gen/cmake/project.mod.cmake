#%Module
proc ModulesHelp { } {
        global @PROJECT_NAME@_version @PROJECT_NAME@_root

        puts stderr "\t@PROJECT_NAME@ - loads the @PROJECT_NAME@ environment"
        puts stderr "\n\tThis adds $@PROJECT_NAME@_root/* to several of the"
        puts stderr "\tenvironment variables."
        puts stderr "\n\tVersion $@PROJECT_NAME@_version\n"
}

module-whatis	"loads the @PROJECT_NAME@ environment"

# for Tcl script use only
set	@PROJECT_NAME@_version		0.1
set	@PROJECT_NAME@_root		    @PROJECT_TOP_DIR@

module load openmi
module load cem/alpha
module load sedflux/devel
module load hydrotrend/3.1
module load child/cca
module load internal
module load roms
module load stm
module load marssim
module load bmi cmi esmf

setenv CMT_VERBOSE 45
setenv CMT_PROJECT_ROOT @PROJECT_TOP_DIR@/../..
if {![info exists env{CMT_PROJECT_TEMPLATE_PATH}]} {
  setenv CMT_PROJECT_TEMPLATE_PATH "@TEMPLATE_DIR@"
}

if {![info exists env{CMT_PROJECT_DIALOG_PATH}]} {
  setenv CMT_PROJECT_DIALOG_PATH "@CONFIG_DIR@"
}

