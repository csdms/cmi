#
# File:          TemplateFiles_Impl.py
# Symbol:        edu.csdms.tools.TemplateFiles-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.TemplateFiles in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import cmt
from cmt import namespace as ns
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.tools.ITemplateFiles
import edu.csdms.tools.TemplateFiles
import edu.csdms.tools.Verbose
import gov.cca.Type
import gov.cca.TypeMap
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class TemplateFiles:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.TemplateFiles.TemplateFiles(impl =     \
        self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._files = cmt.CMTTemplateFiles ()

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.TemplateFiles._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.TemplateFiles._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.tools.Verbose dummy0
    # gov.cca.Type dummy1
    # gov.cca.TypeMap dummy2
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

    """\
 This function should never be called, but helps babel generate better code. 
"""
# DO-NOT-DELETE splicer.begin(boccaForceUsePortInclude)
    # DO-NOT-EDIT-BOCCA
    # Bocca generated code. bocca.protected.begin(boccaForceUsePortInclude)
    o0 = dummy0
    o1 = dummy1
    o2 = dummy2
    return
    # Bocca generated code. bocca.protected.end(boccaForceUsePortInclude)
# DO-NOT-DELETE splicer.end(boccaForceUsePortInclude)

  def add_file(self, src, dest):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string src
    # string dest
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_file)
    self._files.add_file (src, rename=dest)

# DO-NOT-DELETE splicer.end(add_file)

  def add_files(self, srcs, dests):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<string> srcs
    # array<string> dests
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_files)
    #src_files = srcs.split (',')
    #dst_files = dests.split (',')
    for (src, dest) in zip (srcs, dests):
        try:
            self._files.add_file (src, rename=dest)
            print "Adding %s -> %s" % (src, dest)
        except Exception as e:
            print "%s: Unable to add template file: %s" % (src, e)
# DO-NOT-DELETE splicer.end(add_files)

  def substitute(self, mapping, base, todir, cfg_file):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.TypeMap mapping
    # string base
    # string todir
    # string cfg_file
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(substitute)
    if len (cfg_file)==0:
        cfg_file = None
    print "Substitute %s -> %s" % (base, todir)
    try:
      d = {}
      for key in mapping.getAllKeys (gov.cca.Type.String):
        if ns.ischild (key, base):
          d[key] = mapping.getString (key, None)
      for key in mapping.getAllKeys (gov.cca.Type.Int):
        if ns.ischild (key, base):
          d[key] = mapping.getInt (key, 0)
      for key in mapping.getAllKeys (gov.cca.Type.Double):
        if ns.ischild (key, base):
          d[key] = mapping.getDouble (key, 0.)
    except Exception as e:
      print 'Error creating mapping: %s' % e
    try:
      print "mapping is ", d
      print "cfg_file is ", cfg_file
      self._files.substitute (d, todir=todir, base=base, cfg_file=cfg_file)
    except Exception as e:
      print 'Error writing template files: %s' % e

# DO-NOT-DELETE splicer.end(substitute)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
