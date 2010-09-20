#!/bin/bash

PROJECT_DIR=`readlink -f $0`

if [ -z "${CMT_PROJECT_DIALOG_PATH+x}" ] ; then
  export CMT_PROJECT_DIALOG_PATH=$PROJECT_DIR/../share/config
fi
if [ -z "${CMT_PROJECT_TEMPLATE_PATH+x}" ] ; then
  export CMT_PROJECT_TEMPLATE_PATH=$PROJECT_DIR/../share/templates
fi

