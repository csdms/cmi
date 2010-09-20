#
# File:          ConfigDialog_Impl.py
# Symbol:        edu.csdms.tools.ConfigDialog-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.ConfigDialog in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import cmt
import types

# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.tools.ConfigDialog
import gov.cca.TypeMap
import gov.cca.ports.ParameterPortFactory
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class ConfigDialog:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.ConfigDialog.ConfigDialog(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._dialog = cmt.dialog.ConfigDialog ()

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.ConfigDialog._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.ConfigDialog._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def read(self, file):
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

# DO-NOT-DELETE splicer.begin(read)
    try:
      self._dialog.read (file)
    except Exception as e:
      print 'ERROR: %s: %s: Unable to parse file.' % (e, file)
      raise
# DO-NOT-DELETE splicer.end(read)

  def construct(self, ppf, userinput):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.ports.ParameterPortFactory ppf
    # gov.cca.TypeMap userinput
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(construct)
    ppf.setBatchTitle (userinput, "Configure Component")

    for tab in self._dialog:
      ppf.setGroupName (userinput, tab.name ())
      for entry in tab:
        if entry['type'] == types.FloatType:
          ppf.addRequestDouble (userinput, entry['name'], entry['help'],
                                           entry['label'], entry['default'],
                                           entry['range'][0], entry['range'][1])
        elif entry['type'] == types.IntType:
          ppf.addRequestInt (userinput, entry['name'], entry['help'],
                                        entry['label'], entry['default'],
                                        entry['range'][0], entry['range'][1])
        else:
          ppf.addRequestString (userinput, entry['name'], entry['help'],
                                           entry['label'], entry['default'])
# DO-NOT-DELETE splicer.end(construct)

  def boccaForceUsePortInclude(self, dummy0, dummy1):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.TypeMap dummy0
    # gov.cca.ports.ParameterPortFactory dummy1
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
    return
    # Bocca generated code. bocca.protected.end(boccaForceUsePortInclude)
# DO-NOT-DELETE splicer.end(boccaForceUsePortInclude)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
