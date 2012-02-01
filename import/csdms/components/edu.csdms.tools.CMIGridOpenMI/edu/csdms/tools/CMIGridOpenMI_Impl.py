#
# File:          CMIGridOpenMI_Impl.py
# Symbol:        edu.csdms.tools.CMIGridOpenMI-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.CMIGridOpenMI in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import cmt
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.IGrid
import edu.csdms.openmi.IElementSet
import edu.csdms.tools.CMIGridOpenMI
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class CMIGridOpenMI:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.CMIGridOpenMI.CMIGridOpenMI(impl =     \
        self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._grid = None

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.CMIGridOpenMI._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.CMIGridOpenMI._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def initialize(self, element_set):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.openmi.IElementSet element_set
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize)
    self._grid = cmt.grid.OpenMIGrid (element_set)
# DO-NOT-DELETE splicer.end(initialize)

  def boccaForceUsePortInclude(self, dummy0):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.openmi.IElementSet dummy0
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
    return
    # Bocca generated code. bocca.protected.end(boccaForceUsePortInclude)
# DO-NOT-DELETE splicer.end(boccaForceUsePortInclude)

  def get_x(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_x)
    return self._grid.get_x ()
# DO-NOT-DELETE splicer.end(get_x)

  def get_y(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_y)
    return self._grid.get_y ()
# DO-NOT-DELETE splicer.end(get_y)

  def get_z(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_z)
    return self._grid.get_z ()
# DO-NOT-DELETE splicer.end(get_z)

  def get_connectivity(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_connectivity)
    return self._grid.get_connectivity ()
# DO-NOT-DELETE splicer.end(get_connectivity)

  def get_offset(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_offset)
    return self._grid.get_offset ()
# DO-NOT-DELETE splicer.end(get_offset)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)