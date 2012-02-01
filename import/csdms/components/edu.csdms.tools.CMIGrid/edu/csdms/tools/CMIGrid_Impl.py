#
# File:          CMIGrid_Impl.py
# Symbol:        edu.csdms.tools.CMIGrid-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.CMIGrid in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import cmt
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.IGrid
import edu.csdms.tools.CMIGrid
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class CMIGrid:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.CMIGrid.CMIGrid(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._grid = None
    self._mapper = {}

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.CMIGrid._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.CMIGrid._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def initialize(self, x, y, connectivity, offset):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<double> x
    # array<double> y
    # array<int> connectivity
    # array<int> offset
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize)
    try:
        self._grid = cmt.grid.VTKGrid (x, y, connectivity, offset)
    except Exception as e:
        print 'CMIGrid: ERROR: %s: Unable to create grid' % e

# DO-NOT-DELETE splicer.end(initialize)

  def map_to(self, name, x, y, connectivity, offset):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    # array<double> x
    # array<double> y
    # array<int> connectivity
    # array<int> offset
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(map_to)
    self._dst_grid = cmt.grid.VTKGrid (x, y, connectivity, offset)
    try:
        mappers = cmt.mapper.find_mapper (self._dst_grid, self._grid)
    except cmt.mapper.IncompatibleGridError as e:
        print '%s' % e
        self._mapper[name] = None
    else:
        self._mapper[name] = mappers[0]
        self._mapper[name].initialize (self._dst_grid, self._grid)

# DO-NOT-DELETE splicer.end(map_to)

  def map_values(self, name, source_vals):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    # array<> source_vals
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> _return
    #

# DO-NOT-DELETE splicer.begin(map_values)
    try:
        dest_vals = self._mapper[name].run (source_vals)
    except KeyError as e:
        print 'ERROR: %s: No mapper found' % e
        dest_vals = None
    return dest_vals
# DO-NOT-DELETE splicer.end(map_values)

  def boccaForceUsePortInclude(self):
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
    try:
        return self._grid.get_x ()
    except Exception as e:
        print 'CMIGrid: ERROR: %s: Unable to get_x' % e
# DO-NOT-DELETE splicer.end(get_x)

  def get_y(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_y)
    try:
        return self._grid.get_y ()
    except Exception as e:
        print 'CMIGrid: ERROR: %s: Unable to get_y' % e
# DO-NOT-DELETE splicer.end(get_y)

  def get_z(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_z)
    try:
        return self._grid.get_z ()
    except Exception as e:
        print 'CMIGrid: ERROR: %s: Unable to get_z' % e
# DO-NOT-DELETE splicer.end(get_z)

  def get_connectivity(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_connectivity)
    try:
        return self._grid.get_connectivity ()
    except Exception as e:
        print 'CMIGrid: ERROR: %s: Unable to get_connectivity' % e
# DO-NOT-DELETE splicer.end(get_connectivity)

  def get_offset(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_offset)
    try:
        return self._grid.get_offset ()
    except Exception as e:
        print 'CMIGrid: ERROR: %s: Unable to get_offset' % e
# DO-NOT-DELETE splicer.end(get_offset)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
