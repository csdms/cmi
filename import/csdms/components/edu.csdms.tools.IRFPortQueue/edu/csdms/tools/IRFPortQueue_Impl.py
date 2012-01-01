#
# File:          IRFPortQueue_Impl.py
# Symbol:        edu.csdms.tools.IRFPortQueue-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.IRFPortQueue in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.openmi.ElementMapper
import edu.csdms.openmi.IValueSet
import edu.csdms.openmi.ScalarSet
import edu.csdms.ports.CMIPort
import edu.csdms.ports.IRFPort
import edu.csdms.tools.IRFPortQueue
import gov.cca.Port
import gov.cca.Services
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class IRFPortQueue:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.IRFPortQueue.IRFPortQueue(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._services = None
    self._client = None
    # Names of the server (uses) ports
    self._servers = []

    # Instances of connected CMIPorts. Dictionary keys are names of ports, which are
    # contained within self._servers. Dictionary values are instances of the
    # corresponding port.
    self._ports = {}

    # Instances of variable mappers. Dictionary keys are full names of variables of
    # the form var_name@port_name. Dictionary values are mapper instances.
    self._mappers = {}

    #self._log = edu.csdms.tools.Verbose.Verbose ()
    #self._log.set_log_level (1)

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.IRFPortQueue._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.IRFPortQueue._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def initialize(self, services, client_port):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.Services services
    # edu.csdms.ports.IRFPort client_port
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize)
    self._services = services
    self._client = client_port
# DO-NOT-DELETE splicer.end(initialize)

  def initialize_cmi(self, services, client_port):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.Services services
    # edu.csdms.ports.CMIPort client_port
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize_cmi)
    self._services = services
    self._client = client_port
# DO-NOT-DELETE splicer.end(initialize_cmi)

  def set_services(self, services):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.Services services
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(set_services)
    if self._services is None:
      self._services = services
    else:
      print 'Error: services has already been set.'
# DO-NOT-DELETE splicer.end(set_services)

  def add_port(self, server):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string server
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_port)
    # Add a port to the queue.
    print "%s: Adding server port" % server
    if server not in self._servers:
        self._servers.append (server)
    else:
        print "ERROR: %s: Duplicate server port" % server
# DO-NOT-DELETE splicer.end(add_port)

  def add_ports(self, servers):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string servers
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_ports)
    # servers is a comma-separated list of port names to add the the queue.
    print "%s: Adding server ports" % servers
    for server in servers.split (','):
        self.add_port (server)
    #self._servers.add_ports (servers)
# DO-NOT-DELETE splicer.end(add_ports)

  def initialize_ports(self, properties):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<string> properties
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize_ports)
    # Call the initialize method for each port in the queue.
    for (name, port) in self._ports.items ():
      try:
        print "%s: Trying CMI_initialize" % name
        port.CMI_initialize (properties)
      except AttributeError:
        print "%s: Trying initialize" % name
        port.initialize (properties)
# DO-NOT-DELETE splicer.end(initialize_ports)

  def run_ports(self, time):
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

# DO-NOT-DELETE splicer.begin(run_ports)
    # Call the run method for each port in the queue.
    for (name, port) in self._ports.items ():
      try:
        print "%s: Trying CMI_run (%f)" % (name, time)
        port.CMI_run (time)
        print "%s: Updated." % name
      except AttributeError:
        print "%s: Trying run (%f)" % (name, time)
        port.run (time)
      except Exception as e:
        print "%s: %s: Updating error." % (name, e)
# DO-NOT-DELETE splicer.end(run_ports)

  def finalize_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(finalize_ports)
    # Call the finalize method for each port in the queue.
    for (name, port) in self._ports.items ():
      try:
        print "%s: Trying CMI_finalize" % name
        port.CMI_finalize ()
      except AttributeError:
        print "%s: Trying finalize" % name
        port.finalize ()
    #for server in self._servers:
    #  server.finalize ()
# DO-NOT-DELETE splicer.end(finalize_ports)

  def connect_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(connect_ports)
    for server in self._servers:
      #self._log.log (2, 'Connecting %s port' %server)
      try:
        port = self._services.getPort (server)
      except Exception, e:
        if self.bocca_print_errs:
          print "tools.irfports: port %s not connected." % server
        e.args = "tools.irfports: port %s not connected:\n%s" % (server, e.args)
        raise

      irf_port = edu.csdms.ports.IRFPort.IRFPort (port)
      if not irf_port:
        if self.bocca_print_errs:
          print "tools.irfports: Error casting port gov.cca.Port " + \
                "to %s type ports.IRFPort" % server
        ex = sidl.SIDLException.SIDLException()
        ex.setNote(__name__,0, 'Error casting self Port to ports.IRFPort')
        raise sidl.SIDLException._Exception, ex
      self._ports[server] = irf_port
      #self._log.log (2, 'Connected!')

# DO-NOT-DELETE splicer.end(connect_ports)

  def connect_cmi_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(connect_cmi_ports)
    # Connect CMIPorts in the queue.
    print "Connecting ports"
    for server in self._servers:

      #self._log.log (2, 'Connecting %s port' %server)
      print 'Connecting %s port' % server
      try:
        port = self._services.getPort (server)
      except Exception, e:
        if self.bocca_print_errs or True:
          print "tools.irfports: port %s not connected." % server
        e.args = "tools.irfports: port %s not connected:\n%s" % (server, e.args)
        raise

      cmi_port = edu.csdms.ports.CMIPort.CMIPort (port)
      if not cmi_port:
        if self.bocca_print_errs or True:
          print "tools.cmiports: Error casting port gov.cca.Port " + \
                "to %s type ports.CMIPort" % server
        ex = sidl.SIDLException.SIDLException()
        ex.setNote(__name__,0, 'Error casting self Port to ports.CMIPort')
        raise sidl.SIDLException._Exception, ex

      self._ports[server] = cmi_port
      print 'Connected %s port' % server

      #self._log.log (2, 'Connected!')
# DO-NOT-DELETE splicer.end(connect_cmi_ports)

  def disconnect_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(disconnect_ports)
    # Disconnect each of the ports.
    for server in self._servers:
      #self._log.log (2, 'Disconnecting %s port.' % server)
      self._services.releasePort (server)
# DO-NOT-DELETE splicer.end(disconnect_ports)

  def get_port(self, name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # edu.csdms.ports.IRFPort _return
    #

# DO-NOT-DELETE splicer.begin(get_port)
    return self._ports[name]
# DO-NOT-DELETE splicer.end(get_port)

  def check_time_spans(self, start, end):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # double start
    # double end
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(check_time_spans)
    bad_ports = []
    for (name, port) in self._ports.items ():
      span = port.get_time_span ()
      if span[1]<end:
        bad_ports.append (name)
    return len (bad_ports)==0
# DO-NOT-DELETE splicer.end(check_time_spans)

  def add_mapper(self, mapper):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string mapper
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_mapper)
    # The mapper is a string of the form,
    #   var_name@port_name:mapper_method
    try:
        (full_name, method) = mapper.split (':')
    except ValueError:
        print 'ERROR: %s: Bad mapper name (missing method)'

    try:
        (var_name, port_name) = full_name.split ('@')
    except ValueError:
        print 'ERROR: %s: Bad full var name name (var_name@port_name)'

    if self._mappers.has_key (full_name):
        print 'ERROR: %s: Mapper exists'

    # If a mapper can't be created, it is set to None
    self._mappers[full_name] = None

    # Find the port
    try:
        port = self._ports[port_name]
    except KeyError:
        print 'ERROR: %s: Port not found'

    # Get the destination ElementSet
    try:
      element_set = self._client.get_element_set (var_name)
    except Exception as e:
      element_set = None

    # Get the source ElementSet
    try:
      src_element_set = port.get_element_set (var_name)
    except Exception as e:
      print 'Error getting source element set: %s' % e

    # Create a mapper
    mapper = edu.csdms.openmi.ElementMapper.ElementMapper ()
    try:
      mapper.initialise (method, src_element_set, element_set)
    except:
      print 'Error initializing mapper'

    self._mappers[full_name] = mapper

# DO-NOT-DELETE splicer.end(add_mapper)

  def add_mappers(self, mappers):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string mappers
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_mappers)
    # mappers is a comma-separated list of mapper names
    for mapper in mappers.split (','):
        self.add_mapper (mapper)
# DO-NOT-DELETE splicer.end(add_mappers)

  def run_mapper(self, mapper):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string mapper
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(run_mapper)
    # Get the requested mapper
    try:
        map = self._mappers[mapper]
    except KeyError:
        print 'Unable to locate mapper %s.' % mapper

    (var_name, port_name) = mapper.split ('@')
    try:
      port = self._ports[port_name]
    except KeyError:
      print 'Unable to locate port %s.' % name

    # Get the ValueSet from the source port
    src_value_set = port.get_value_set (var_name)
    src_scalar_set = edu.csdms.openmi.ScalarSet.ScalarSet (src_value_set)

    if map is not None:
        try:
            dst_scalar_set = map.mapScalarValues (src_scalar_set)
        except:
            print 'There was an error mapping %s' % src_value
    else:
        dst_scalar_set = src_scalar_set

    dst_ivalue_set = edu.csdms.openmi.IValueSet.IValueSet (dst_scalar_set)

    try:
        self._client.set_value_set (dst_value, dst_ivalue_set)
    except Exception as e:
        print 'There was an error setting values: %s' % e

# DO-NOT-DELETE splicer.end(run_mapper)

  def run_mappers(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(run_mappers)
    # mappers is a comma-separated list of mapper names
    for mapper in self._mappers.keys ():
        self.run_mapper (mapper)
# DO-NOT-DELETE splicer.end(run_mappers)

  def initialize_mapper(self, name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize_mapper)
    try:
      #element_set = self._provides_port.get_element_set ()
      element_set = self._client.get_element_set (name)
    except Exception as e:
      #self._log.log (2, '%s: Error getting element set: %s' % (name, e))
      element_set = None

    #self._log.log (2, 'Initializing %s mapper' % name)
    if element_set is not None:
      #self._log.log (2, 'destination element set size is %d' %
      #               element_set.getElementCount ())

      port = self._ports[name]
      try:
        src_element_set = port.get_element_set (name)
        #self._log.log (2, 'source element set size is %d' %
        #               src_element_set.getElementCount ())
      except Exception as e:
        print 'Error getting source element set: %s' % e

      mapper = edu.csdms.openmi.ElementMapper.ElementMapper ()
      #self._log.log (2, 'trying to initialize mapper')
      try:
        mapper.initialise ("Weighted Mean", src_element_set, element_set)
        #self._log.log (2, 'Mapper is initialized')
        #mapper.initialise ("Mean",
        #  edu.csdms.openmi.ElementSet.ElementSet (src_element_set),
        #  edu.csdms.openmi.ElementSet.ElementSet (element_set))
      except:
        print 'Error initializing mapper'

      self._mappers[name] = mapper
    else:
      #self._log.log (2, 'Done creating mapper for %s' % name)
      self._mappers[name] = None

    #self._log.log (2, 'Done creating mapper for %s' % name)

# DO-NOT-DELETE splicer.end(initialize_mapper)

  def initialize_mappers(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(initialize_mappers)
    for server in self._servers:
      self.initialize_mapper (server)
# DO-NOT-DELETE splicer.end(initialize_mappers)

  def map_value(self, server, dst_value, src_value):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string server
    # string dst_value
    # string src_value
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(map_value)
    #self._log.log (2, 'Getting mapped %s value from %s' % (src_value, server))
    if self._ports.has_key (server):
      port = self._ports[server]

      src_value_set = port.get_value_set (src_value)
      #self._log.log (2, 'Got the value %d' % src_value_set.getCount ())
      src_scalar_set = edu.csdms.openmi.ScalarSet.ScalarSet (src_value_set)
      #self._log.log (2, 'Converted values to scalars %d' %
      #               src_scalar_set.getCount ())

      if self._mappers.has_key (server):
        if self._mappers[server] is not None:
          try:
            #self._log.log (2, 'Mapping scalar values')
            dst_scalar_set = self._mappers[server].mapScalarValues (src_scalar_set)
          except:
            print 'There was an error mapping %s' % src_value
        else:
          dst_scalar_set = src_scalar_set
      else:
        print 'Unable to locate mapper %s.' % server
        print 'Found servers: ', self._mappers.keys ()
      #self._log.log (2, 'Mapped %s obtained from %s port' % (src_value, server))

      dst_ivalue_set = edu.csdms.openmi.IValueSet.IValueSet (dst_scalar_set)

      try:
        self._client.set_value_set (dst_value, dst_ivalue_set)
      except:
        print 'There was an error setting values'
    else:
      print 'Unable to locate port %s.' % name
# DO-NOT-DELETE splicer.end(map_value)

  def map_values(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(map_values)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(map_values)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(map_values)
# DO-NOT-DELETE splicer.end(map_values)

  def get_mapped_value(self, name, value):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string name
    # string value
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # edu.csdms.openmi.IValueSet _return
    #

# DO-NOT-DELETE splicer.begin(get_mapped_value)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_mapped_value)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_mapped_value)
# DO-NOT-DELETE splicer.end(get_mapped_value)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3, dummy4):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.openmi.ElementMapper dummy0
    # edu.csdms.openmi.ScalarSet dummy1
    # edu.csdms.ports.CMIPort dummy2
    # gov.cca.Port dummy3
    # edu.csdms.ports.IRFPort dummy4
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
    o4 = dummy4
    return
    # Bocca generated code. bocca.protected.end(boccaForceUsePortInclude)
# DO-NOT-DELETE splicer.end(boccaForceUsePortInclude)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
