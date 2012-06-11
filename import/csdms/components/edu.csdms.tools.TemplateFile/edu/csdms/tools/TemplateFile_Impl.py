#
# File:          TemplateFile_Impl.py
# Symbol:        edu.csdms.tools.TemplateFile-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.TemplateFile in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import cmt
from cmt import namespace as ns
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.tools.ITemplateFile
import edu.csdms.tools.TemplateFile
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

class TemplateFile:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.TemplateFile.TemplateFile(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._template = cmt.CMTTemplateFile ()

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.TemplateFile._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.TemplateFile._init) 

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

  def scan_template(self, file):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string file
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(scan_template)
    self._template.scan_template (file)
# DO-NOT-DELETE splicer.end(scan_template)

  def to_file(self, file, userinput, base):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string file
    # gov.cca.TypeMap userinput
    # string base
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(to_file)
    try:
      mapping = {}
      for key in userinput.getAllKeys (gov.cca.Type.String):
        if ns.ischild (key, base):
          mapping[key] = userinput.getString (key, None)
      for key in userinput.getAllKeys (gov.cca.Type.Int):
        if ns.ischild (key, base):
          mapping[key] = userinput.getInt (key, 0)
      for key in userinput.getAllKeys (gov.cca.Type.Double):
        if ns.ischild (key, base):
          mapping[key] = userinput.getDouble (key, 0.)
    except Exception as e:
      print 'Error creating mapping: %s' % e
    try:
      self._template.tofile (file, mapping, base)
    except Exception as e:
      print '%s: Error writing template to file: %s' % (file, e)
# DO-NOT-DELETE splicer.end(to_file)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
