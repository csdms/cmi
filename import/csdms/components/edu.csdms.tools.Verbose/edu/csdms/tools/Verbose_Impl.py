#
# File:          Verbose_Impl.py
# Symbol:        edu.csdms.tools.Verbose-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.Verbose in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import logging
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.tools.IMessageLogger
import edu.csdms.tools.Verbose
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
# DO-NOT-DELETE splicer.end(_before_type)

class Verbose:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.Verbose.Verbose(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._verbose = None

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.Verbose._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.Verbose._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def initialize(self, name, level):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    # int level
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize)
    # These are the log level values
    # NOTSET = 0
    # DEBUG = 10
    # INFO = 20
    # WARNING = 30
    # ERROR = 40
    # CRITICAL = 50
    self._logger = logging.getLogger (name)
    self._logger.setLevel (level)

    ch = logging.StreamHandler()
    ch.setLevel(logging.DEBUG)

    formatter = logging.Formatter ('%(asctime)s - %(name)s - %(levelname)s - %(message)s')

    ch.setFormatter (formatter)

    self._logger.addHandler (ch)

# DO-NOT-DELETE splicer.end(initialize)

  def info(self, message):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string message
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(info)
    self._logger.info (message)
# DO-NOT-DELETE splicer.end(info)

  def debug(self, message):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string message
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(debug)
    self._logger.debug (message)
# DO-NOT-DELETE splicer.end(debug)

  def warning(self, message):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string message
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(warning)
    self._logger.warning (message)
# DO-NOT-DELETE splicer.end(warning)

  def error(self, message):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string message
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(error)
    self._logger.error (message)
# DO-NOT-DELETE splicer.end(error)

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

  def set_log_level(self, level):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # int level
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(set_log_level)
    self._logger.setLevel (level)
# DO-NOT-DELETE splicer.end(set_log_level)

  def log(self, level, message):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # int level
    # string message
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(log)
    self._logger.log (level, message)
# DO-NOT-DELETE splicer.end(log)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
