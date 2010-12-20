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
module load cem/devel
module load sedflux/devel
module load hydrotrend/3.0
module load child
module load csdms
module load roms
module load stm

if {![info exists env{CMT_PROJECT_DIALOG_PATH}]} {
  setenv CMT_PROJECT_DIALOG_PATH @CONFIG_DIR@
}
if {![info exists env{CMT_PROJECT_TEMPLATE_PATH}]} {
{
  setenv CMT_PROJECT_TEMPLATE_PATH @TEMPLATE_DIR@
}

