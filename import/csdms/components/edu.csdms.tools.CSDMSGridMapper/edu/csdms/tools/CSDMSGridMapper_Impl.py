#
# File:          CSDMSGridMapper_Impl.py
# Symbol:        edu.csdms.tools.CSDMSGridMapper-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.CSDMSGridMapper in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import cmt
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.IGrid
import edu.csdms.cmi.IGridMapper
import edu.csdms.tools.CSDMSGridMapper
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class CSDMSGridMapper:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.CSDMSGridMapper.CSDMSGridMapper(impl = \
        self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    print 'CSDMSGridMapper: Creating object'
    self._mapper = None
    print 'CSDMSGridMapper: Created object'

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.CSDMSGridMapper._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.CSDMSGridMapper._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def boccaForceUsePortInclude(self, dummy0):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.cmi.IGrid dummy0
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

  def initialize(self, dest_grid, source_grid):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.cmi.IGrid dest_grid
    # edu.csdms.cmi.IGrid source_grid
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize)
    print 'CSDMSGridMapper: Initializing...'
    try:
        d = cmt.grid.VTKGrid (dest_grid.get_x (), dest_grid.get_y (),
                              dest_grid.get_connectivity (),
                              dest_grid.get_offset ())
        s = cmt.grid.VTKGrid (source_grid.get_x (), source_grid.get_y (),
                              source_grid.get_connectivity (),
                              source_grid.get_offset ())
    except Exception as e:
        print '%s: ERROR: %s: Unable to create grid' % (__file__, e)

    try:
        choices = cmt.mapper.find_mapper (d, s)
    except cmt.mapper.IncompatibleGridError as e:
        print 'ERROR: %s' % e
    except Exception as e:
        print 'ERROR: %s: Unable to find a mapper' % e

    try:
        self._mapper = choices[0]
        self._mapper.initialize (d, s)
    except Exception as e:
        print '%s: ERROR: %s: Unable to initialize mapper' % (__file__, e)
    print 'CSDMSGridMapper: Initialized.'

# DO-NOT-DELETE splicer.end(initialize)

  def run_inplace(self, source_vals, dest_vals):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<> source_vals
    # array<> dest_vals
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> dest_vals
    #

# DO-NOT-DELETE splicer.begin(run_inplace)
    return self._mapper.run (source_vals, dest_vals)
# DO-NOT-DELETE splicer.end(run_inplace)

  def run(self, source_vals):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<> source_vals
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> _return
    #

# DO-NOT-DELETE splicer.begin(run)
    return self._mapper.run (source_vals, None)
# DO-NOT-DELETE splicer.end(run)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
