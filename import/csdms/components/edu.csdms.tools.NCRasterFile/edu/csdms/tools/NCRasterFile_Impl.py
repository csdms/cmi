#
# File:          NCRasterFile_Impl.py
# Symbol:        edu.csdms.tools.NCRasterFile-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.NCRasterFile in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
try:
  from csdms_utils import nccs_files
except ImportError as e:
  print 'NCCS: Error importing nccs_files module: %s' % e
try:
  from csdms_utils import ncgs_files
  from csdms_utils import rti_files
except ImportError as e:
  print 'NCCS: Error importing ncgs_files module: %s' % e
import os
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.tools.IRasterOutputFile
import edu.csdms.tools.NCRasterFile
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class NCRasterFile:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.NCRasterFile.NCRasterFile(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._nc_file = None

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.NCRasterFile._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.NCRasterFile._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

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

  def init(self, name, units, dimen, res):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    # string units
    # array<int> dimen
    # array<double> res
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(init)
    self._name = name
    self._units = units
    self._dimen = dimen
    self._res = res
# DO-NOT-DELETE splicer.end(init)

  def open(self, file):
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

# DO-NOT-DELETE splicer.begin(open)
    print '%s: NCRasterFile file' % file
    path = os.path.expanduser (file)
    print '%s: expanded NCRasterFile file' % path

    if os.path.exists (path):
      print "NCRasterFile: %s: File exists.  Overwriting." % path
      os.remove (path)
    elif not os.path.exists (os.path.dirname (path)):
      print "NCRasterFile: %s: Directory does not exist. Creating." % os.path.dirname (path)
      try:
        os.makedirs (os.path.dirname (path))
      except Exception as e:
        print '%s: Error creating directory' % e
        raise

    try:
      print 'NCRasterFile: Open nccs file, %s' % path
      print 'NCRasterFile: Var has %d dimensions' % len (self._dimen)
      print 'NCRasterFile: Cube size is ', self._dimen
      print 'NCRasterFile: Cube name is %s' % self._name
      print 'NCRasterFile: Cube units is %s' % self._units
      sys.stdout.flush ()

      n_dim = sum ([d>1 for d in self._dimen])
      if n_dim == 3:
        try:
          self._nc_file = nccs_files.nccs_file ()
          ok = self._nc_file.open_new_file (path, shape=self._dimen,
                                         res=self._res,
                                         dtype='float64',
                                         var_name=self._name,
                                         long_name=self._name,
                                         units_name=self._units,
                                         time_units="days",
                                         time_long_name="Simulation time in days",
                                         time_reference="1973-3-14 0:0:0",
                                         comment="Cube created with nccs_file")
          if not ok:
            print "NCRasterFile: The nccs file was not opened correctly"
            sys.stdout.flush ()
        except nccs_files.MissingAttributeError as e:
          print e
          raise
        except:
          raise
      elif n_dim == 2:
        self._nc_file = ncgs_files.ncgs_file ()
        try:
          print 'NCRasterFile: Open ncgs file, %s' % path
          print 'NCRasterFile: Grid size is', self._dimen
          print 'NCRasterFile: Cell size is', self._res
          sys.stdout.flush ()
          info = rti_files.make_info (path, self._dimen[0], self._dimen[1],
                                      self._res[0], self._res[1])

          print 'NCRasterFile: Grid name is %s' % self._name
          print 'NCRasterFile: Grid units is %s' % self._units
          sys.stdout.flush ()
          ok = self._nc_file.open_new_file (path, info, var_name=self._name,
                                            units_name=self._units,
                                            dtype='float64')
          if not ok:
            print "NCRasterFile: The ncgs file was not opened correctly"
            sys.stdout.flush ()
        except Exception as e:
          print "NCRasterFile: There was an error opening ncgs file"
          print 'NCRasterFile: The error was', e
          sys.stdout.flush ()
          raise

        print 'Open 2D NCGS file'
      else:
        self._nc_file = None
        print 'The value must be either 2D or 3D (n_dim is %d)' % n_dim
    except Exception as e:
      print "nccs: There was an error opening nccs file"
      print 'nccs: The error was', e
      sys.stdout.flush ()
      raise
# DO-NOT-DELETE splicer.end(open)

  def append(self, value):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<> value
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(append)
    try:
      print "NCRasterFile: Add %s to nccs file" % self._name
      print "NCRasterFile: Grid shape is", value.shape
      sys.stdout.flush ()
      self._nc_file.add_grid (value, self._name)
      print "NCRasterFile: Added grid"
      sys.stdout.flush ()
    except Exception as e:
      print 'NCRasterFile: There was an error adding grid'
      print 'NCRasterFile: The error is', e
      raise
# DO-NOT-DELETE splicer.end(append)

  def close(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(close)
    self._nc_file.close_file ()
# DO-NOT-DELETE splicer.end(close)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
