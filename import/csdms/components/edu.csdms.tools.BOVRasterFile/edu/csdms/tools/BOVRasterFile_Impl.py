#
# File:          BOVRasterFile_Impl.py
# Symbol:        edu.csdms.tools.BOVRasterFile-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.BOVRasterFile in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.tools.BOVRasterFile
import edu.csdms.tools.IRasterOutputFile
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class BOVRasterFile:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.BOVRasterFile.BOVRasterFile(impl =     \
        self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.BOVRasterFile._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.BOVRasterFile._init) 

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
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(init)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(init)
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
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(open)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(open)
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
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(append)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(append)
# DO-NOT-DELETE splicer.end(append)

  def close(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(close)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(close)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(close)
# DO-NOT-DELETE splicer.end(close)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
