#
# File:          PrintQueue_Impl.py
# Symbol:        edu.csdms.tools.PrintQueue-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.PrintQueue in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
try:
  import warnings
  if not ('CMT_DEBUG' in os.environ.keys() and
          os.environ['CMT_DEBUG'] == '1'):
        warnings.filterwarnings("ignore", category=DeprecationWarning)
except:
    pass

import cmt
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.ports.IRFPort
import edu.csdms.tools.IRasterOutputFile
import edu.csdms.tools.PrintQueue
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

class PrintQueue:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.PrintQueue.PrintQueue(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._q = None
    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.PrintQueue._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.PrintQueue._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def initialize(self, userinput, base_namespace, port):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.TypeMap userinput
    # string base_namespace
    # edu.csdms.ports.IRFPort port
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize)
    attr = {}
    for key in userinput.getAllKeys (gov.cca.Type.String):
      if key.startswith (base_namespace):
        attr[key] = userinput.getString (key, None)
    for key in userinput.getAllKeys (gov.cca.Type.Int):
      if key.startswith (base_namespace):
        attr[key] = userinput.getInt (key, 0)
    for key in userinput.getAllKeys (gov.cca.Type.Double):
      if key.startswith (base_namespace):
        attr[key] = userinput.getDouble (key, 0.)
    sys.stdout.flush ()
    try:
      self._q = cmt.PrintQueue (attr, base_namespace, port)
    except Exception as e:
      print 'ERROR: %s: Unable to create PrintQueue' % e
      raise
# DO-NOT-DELETE splicer.end(initialize)

  def add_files(self, var_namespace):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string var_namespace
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_files)
    self._q.add_files (var_namespace)
# DO-NOT-DELETE splicer.end(add_files)

  def next_print_time(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(next_print_time)
    return self._q.next_print_time ()

# DO-NOT-DELETE splicer.end(next_print_time)

  def print_all(self, time):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # double time
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(print_all)
    self._q.print_all (time)

# DO-NOT-DELETE splicer.end(print_all)

  def close(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(close)
    self._q.close ()

# DO-NOT-DELETE splicer.end(close)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.Type dummy0
    # gov.cca.TypeMap dummy1
    # edu.csdms.tools.IRasterOutputFile dummy2
    # edu.csdms.ports.IRFPort dummy3
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
    o3 = dummy3
    return
    # Bocca generated code. bocca.protected.end(boccaForceUsePortInclude)
# DO-NOT-DELETE splicer.end(boccaForceUsePortInclude)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
