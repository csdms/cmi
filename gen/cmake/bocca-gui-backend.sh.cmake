#!/bin/bash
source /usr/local/modules/init/bash
module load openmi cem/alpha sedflux/devel hydrotrend/3.0 child internal roms stm
module load marssim aquatellus

if [ -z "${CMT_PROJECT_DIALOG_PATH+x}" ] ; then
  export CMT_PROJECT_DIALOG_PATH=@CONFIG_DIR@
fi
if [ -z "${CMT_PROJECT_TEMPLATE_PATH+x}" ] ; then
  export CMT_PROJECT_TEMPLATE_PATH=@TEMPLATE_DIR@
fi

# bocca wrapper on gui-backend to supply the default rc file.
# if you specify another rc file, it will override the default.

BOCCA_HOME=@BOCCA_HOME@
CCAFE_CONFIG=@CCAFE_CONFIG@

BOCCA=@BOCCA@

if test -x $BOCCA; then
	:
else
	echo "It looks like this project has not been configured yet. Run configure before using the GUI."
	exit 1
fi

PROJECT_DIR=@PROJECT_TOP_DIR@

#KPATH="`$CCAFE_CONFIG --var CCAFE_bindir`"
#$KPATH/gui-backend.sh  --ccafe-rc $PROJECT_DIR/components/tests/guitest.gen.rc $* &

$PROJECT_DIR/buildutils/testComponent.sh --gui-backend --ccafe-rc $PROJECT_DIR/components/tests/guitest.gen.rc \
	--cca-dir $PROJECT_DIR/install/share/cca --lib-dir $PROJECT_DIR/install/lib --ccafe-config $CCAFE_CONFIG $* 


