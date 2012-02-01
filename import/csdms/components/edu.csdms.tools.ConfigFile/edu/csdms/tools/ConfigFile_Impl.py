#
# File:          ConfigFile_Impl.py
# Symbol:        edu.csdms.tools.ConfigFile-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.ConfigFile in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import ConfigParser
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.IConfigFile
import edu.csdms.tools.ConfigFile
import gov.cca.TypeMap
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class ConfigFile:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.ConfigFile.ConfigFile(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._parser = ConfigParser ()

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.ConfigFile._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.ConfigFile._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def boccaForceUsePortInclude(self, dummy0):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.TypeMap dummy0
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
    self._parser.read (file)
# DO-NOT-DELETE splicer.end(read)

  def section_as_type_map(self, section):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string section
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # gov.cca.TypeMap _return
    #

# DO-NOT-DELETE splicer.begin(section_as_type_map)
    type_map = gov.cca.TypeMap.TypeMap ()
    for option in self._parser.options (section):
        map.putString (option, self._parser.get (option))
    return type_map
# DO-NOT-DELETE splicer.end(section_as_type_map)

  def has_section(self, section):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string section
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(has_section)
    return self._parser.has_section (section)
# DO-NOT-DELETE splicer.end(has_section)

  def has_option(self, section, option):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string section
    # string option
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(has_option)
    return self._parser.has_option (section, option)
# DO-NOT-DELETE splicer.end(has_option)

  def get(self, section, option):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string section
    # string option
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # string _return
    #

# DO-NOT-DELETE splicer.begin(get)
    return self._parser.get (section, option)
# DO-NOT-DELETE splicer.end(get)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
