#!/bin/bash

## Source this file to load the modules required for the CSDMS project and
## to set required environment variables

source /usr/local/modules/init/bash
module load openmi cem/0.1 sedflux/2.0 hydrotrend/3.0 child internal roms stm
module load marssim

if [ -z "${CMT_PROJECT_DIALOG_PATH+x}" ] ; then
  export CMT_PROJECT_DIALOG_PATH=@CONFIG_DIR@
fi
if [ -z "${CMT_PROJECT_TEMPLATE_PATH+x}" ] ; then
  export CMT_PROJECT_TEMPLATE_PATH=@TEMPLATE_DIR@
fi

