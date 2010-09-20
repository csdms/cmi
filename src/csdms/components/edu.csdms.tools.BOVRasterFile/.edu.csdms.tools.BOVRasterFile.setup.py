#! /usr/bin/env python
# Build file for Python modules
import sys
from re import compile
from distutils.core import setup, Extension

inc_re = compile('^--include-dirs=(.*)$')
lib_re = compile('^--library-dirs=(.*)$')
exlib_re = compile('^--extra-library=(.*)$')
old_argv = sys.argv
sys.argv = []
inc_dirs = ['.']
lib_dirs = []
libs = ['sidl']

for i in old_argv:
  m = inc_re.match(i)
  if (m):
    if (len(m.group(1))): inc_dirs.append(m.group(1))
  else:
    m = lib_re.match(i)
    if (m):
      if (len(m.group(1))): lib_dirs.append(m.group(1))
    else:
      m = exlib_re.match(i)
      if (m):
        if (len(m.group(1))): libs.append(m.group(1))
      else:
        sys.argv.append(i)
setup(name='llnl_babel_edu',
  include_dirs=inc_dirs,
  headers = [
    'glue/edu_csdms_tools_BOVRasterFile_Module.h'
  ],
  packages = [
    'edu',
    'edu.csdms',
    'edu.csdms.tools'
  ],
  ext_modules = [
    Extension('edu.csdms.tools.BOVRasterFile',
      ["edu/csdms/tools/edu_csdms_tools_BOVRasterFile_Module.c"
      ],
      library_dirs=lib_dirs,
      libraries=libs)
  ])
