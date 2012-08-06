#
# File:          CMIConfigFile_Impl.py
# Symbol:        edu.csdms.tools.CMIConfigFile-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.CMIConfigFile in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
import ConfigParser
from ConfigParser import NoOptionError
import os
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.IConfigFile
import edu.csdms.tools.CMIConfigFile
import edu.csdms.tools.Verbose
import gov.cca.TypeMap
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class CMIConfigFile:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.CMIConfigFile.CMIConfigFile(impl =     \
        self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    defaults = {'ports': [], 'optional_ports': [], 'init_ports': [],
                'template_files': [], 'mappers': [],
                'output_file_namespace': '', 'port_queue_dt': 0.}

    self.required = ['config_xml_file', 'initialize_arg']
    self.optional = defaults.keys ()

    self._parser = ConfigParser.ConfigParser (defaults)
    self._name = None
    self._data = {}

    self._log = edu.csdms.tools.Verbose.Verbose ()
    self._log.initialize ("CMIConfigFile", 2)

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.CMIConfigFile._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.CMIConfigFile._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def get_string(self, option):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string option
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # string _return
    #

# DO-NOT-DELETE splicer.begin(get_string)
    try:
        return self._data[option].strip ()
    except KeyError as e:
        self._log.warning ('Missing option (%s)' % e)
    return None
# DO-NOT-DELETE splicer.end(get_string)

  def get_array(self, option):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string option
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<string> _return
    #

# DO-NOT-DELETE splicer.begin(get_array)
    try:
        return self._data[option]
    except KeyError as e:
        self._log.warning ('Missing option (%s)' % e)
    return None
    #items = []
    #try:
    #    for item in self._data[option].split (','):
    #        items.append (item.strip ())
    #except KeyError as e:
    #    self._log.warning ('Missing option (%s)' % e)
    #return items
# DO-NOT-DELETE splicer.end(get_array)

  def get_int(self, option):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string option
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # int _return
    #

# DO-NOT-DELETE splicer.begin(get_int)
    try:
        return self._data[option]
    except KeyError as e:
        self._log.warning ('Missing option (%s)' % e)
    return None
# DO-NOT-DELETE splicer.end(get_int)

  def get_float(self, option):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string option
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(get_float)
    try:
        return self._data[option]
    except KeyError as e:
        self._log.warning ('Missing option (%s)' % e)
    return None
# DO-NOT-DELETE splicer.end(get_float)

  def boccaForceUsePortInclude(self, dummy0, dummy1):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.tools.Verbose dummy0
    # gov.cca.TypeMap dummy1
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
    (self._name, ext) = os.path.splitext (file)
    if len (ext)==0:
        cfg_file = file + '.cfg'
    else:
        cfg_file = file

    # Read CMI config files in this order:
    #  1. Current directory
    #  2. Home directory
    #  3. Project directory
    files = [cfg_file,
             os.path.join (os.path.expanduser ('~/.cmt'), cfg_file)]
    try:
        files.append (os.path.join (os.environ['CMT_PROJECT_ROOT'],
                                    'share', 'cmt', 'config', cfg_file))
    except KeyError:
        pass

    self._log.info ('Looking for config files (%s)' % ', '.join (files))

    try:
        self._parser.read (files)
    except Exception as e:
        self._log.error ('Error parsing CMI config file (%s)' % e)

    try:
        section = 'csdms.cmi.%s' % self._name
        self._log.info ('Reading section (%s)' % section)

        if not self._parser.has_section (section):
            self._log.error ('Missing required section (%s)' % section)

        vals = {}
        missing = []
        #for entry in self.required + self.optional:
        for entry in self.required:
            try:
                vals[entry] = self._parser.get (section, entry)
            except NoOptionError:
                missing.append (entry)
        for entry in missing:
            self._log.error ('Missing required entry (%s)' % entry)

        for entry in self.optional:
            try:
                vals[entry] = self._parser.get (section, entry)
            except NoOptionError:
                pass

        (srcs, dsts) = ([], [])
        for file in vals['template_files'].split (','):
            (src, dst) = file.split ('->')
            srcs.append (src.strip ())
            dsts.append (dst.strip ())
        mappers = [m.strip () for m in vals['mappers'].split (',')]
        ports = [p.strip () for p in vals['ports'].split (',')]
        opt_ports = [p.strip () for p in vals['optional_ports'].split (',')]
        init_ports = [p.strip () for p in vals['init_ports'].split (',')]
        port_queue_dt = float (vals['port_queue_dt'])
        output_file_namespace = vals['output_file_namespace']
        dialog_file = vals['config_xml_file']
        initialize_arg = vals['initialize_arg']

        #ports = self._parser.get (section, 'ports')
        #init_ports = self._parser.get (section, 'init_ports')
        #template_files = self._parser.get (section, 'template_files')
        #mappers = self._parser.get (section, 'mappers')
        #dialog_file = self._parser.get (section, 'config_xml_file')
        #output_file_namespace = self._parser.get (section, 'output_file_namespace')
        #port_queue_dt = self._parser.getfloat (section, 'port_queue_dt')

        self._log.info ('Reading ports (%s)' % ';'.join (ports))
        self._log.info ('Reading optional ports (%s)' % ';'.join (opt_ports))
        self._log.info ('Reading init ports (%s)' % ';'.join (init_ports))
        self._log.info ('Reading source template files (%s)' % ';'.join (srcs))
        self._log.info ('Reading destination template files (%s)' % ';'.join (dsts))
        self._log.info ('Reading mappers (%s)' % ';'.join (mappers))
        self._log.info ('Reading config_xml_file (%s)' % dialog_file)
        self._log.info ('Reading ports_queue_dt (%s)' % port_queue_dt)
        self._log.info ('Reading initialize_arg (%s)' % initialize_arg)

        self._data['CMI_PORT_NAMES'] = ports
        self._data['CMI_OPTIONAL_PORT_NAMES'] = opt_ports
        self._data['CMI_TEMPLATE_SOURCE_FILES'] = srcs
        self._data['CMI_TEMPLATE_DEST_FILES'] = dsts
        self._data['CMI_MAPPERS'] = mappers
        self._data['CMI_CONFIG_DIALOG_XML_FILE'] = dialog_file
        self._data['CMI_PORT_QUEUE_DT'] = port_queue_dt
        self._data['CMI_OUTPUT_FILE_NS'] = output_file_namespace
        self._data['CMI_INIT_PORTS'] = init_ports
        self._data['CMI_INITIALIZE_ARG'] = initialize_arg
    except Exception as e:
        print '%s: Unable to add section' % e

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
