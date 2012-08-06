#!/bin/bash

## Source this file to load the modules required for the CSDMS project and
## to set required environment variables

source /usr/local/modules/init/bash
module load openmi cem/alpha sedflux/devel hydrotrend/3.1 child internal roms stm
module load marssim
module load bmi cmi esmf

export CMT_PROJECT_ROOT=@PROJECT_TOP_DIR@/../..
if [ -z "${CMT_PROJECT_DIALOG_PATH+x}" ] ; then
  export CMT_PROJECT_DIALOG_PATH=@CONFIG_DIR@
fi
if [ -z "${CMT_PROJECT_TEMPLATE_PATH+x}" ] ; then
  export CMT_PROJECT_TEMPLATE_PATH=@TEMPLATE_DIR@
fi

