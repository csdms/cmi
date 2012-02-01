#
# File:          CMIPortQueue_Impl.py
# Symbol:        edu.csdms.tools.CMIPortQueue-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.tools.CMIPortQueue in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.IGrid
import edu.csdms.ports.CMIPort
import edu.csdms.tools.CMIPortQueue
import edu.csdms.tools.CSDMSGridMapper
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

class CMIPortQueue:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.tools.CMIPortQueue.CMIPortQueue(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self._services = None
    self._client = None
    # Names of the server (uses) ports
    self._servers = []

    # Instances of connected CMIPorts. Dictionary keys are names of ports,
    # which are contained within self._servers. Dictionary values are
    # instances of the corresponding port.
    self._ports = {}

    # Instances of variable mappers. Dictionary keys are full names of
    # variables of the form var_name@port_name. Dictionary values are
    # mapper instances.
    self._mappers = {}

    #self._log = edu.csdms.tools.Verbose.Verbose ()
    #self._log.set_log_level (1)

    # Bocca generated code. bocca.protected.begin(edu.csdms.tools.CMIPortQueue._init) 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.tools.CMIPortQueue._init) 

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
    # edu.csdms.ports.CMIPort client_port
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
        print 'CMIPortQueue: ERROR: services has already been set.'
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
    print properties
    for (name, port) in self._ports.items ():
        print "%s: CMI_initialize" % name
        port.CMI_initialize (properties)
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
        print "%s: CMI_run (%f)" % (name, time)
        port.CMI_run (time)
        print "%s: Updated." % name
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
        print "%s: CMI_finalize" % name
        port.CMI_finalize ()
# DO-NOT-DELETE splicer.end(finalize_ports)

  def connect_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(connect_ports)
    # Connect CMIPorts in the queue.
    print "Connecting CMI ports"
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
# DO-NOT-DELETE splicer.end(connect_ports)

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
    # edu.csdms.ports.CMIPort _return
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
    print 'CMIPortQueue: Adding mapper %s' % mapper
    try:
        (full_name, method) = mapper.split (':')
    except ValueError:
        print 'CMIPortQueue: ERROR: %s: Bad mapper name (missing method)' % mapper

    try:
        (var_name, port_name) = full_name.split ('@')
    except ValueError:
        print 'CMIPortQueue: ERROR: %s: Bad full var name name (var_name@port_name)' % full_name

    if self._mappers.has_key (full_name):
        print 'CMIPortQueue: ERROR: %s: Mapper exists' % full_name

    # If a mapper can't be created, it is set to None
    self._mappers[full_name] = None

    # Find the port
    try:
        port = self._ports[port_name]
    except KeyError:
        print 'CMIPortQueue: ERROR: %s: Port not found' % port_name

    # Get the destination ElementSet
    try:
      dst_grid = self._client.get_grid (var_name)
      #print 'CMIPortQueue: Size of destination ElementSet is %s' % element_set.getElementCount ()
    except Exception as e:
      element_set = None

    # Get the source ElementSet
    try:
      src_grid = port.get_grid (var_name)
      #print 'CMIPortQueue: Size of source ElementSet is %s' % src_element_set.getElementCount ()
    except Exception as e:
      print 'Error getting source grid set: %s' % e

    # Create a mapper
    print 'CMIPortQueue: Using CSDMSGridMapper'
    try:
        mapper = edu.csdms.tools.CSDMSGridMapper.CSDMSGridMapper ()
    except Exception as e:
        print 'CMIPortQueue: ERROR: Unable to create mapper: %s' % e
    #mapper = edu.csdms.tools.OpenMIGridMapper ()
    #mapper = edu.csdms.tools.ESMFGridMapper ()
    try:
        print 'CMIPortQueue: Initializing CSDMSGridMapper'
        mapper.initialize (dst_grid, src_grid)
        print 'CMIPortQueue: Initialized CSDMSGridMapper'
    except Exception as e:
        print 'CMIPortQueue: Error initializing mapper: %s' % e

    self._mappers[full_name] = mapper
    print 'CMIPortQueue: Added mapper %s' % mapper
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
    print "CMIPortQueue: Running mapper full name is %s" % mapper
    try:
        map = self._mappers[mapper]
    except KeyError:
        print 'Unable to locate mapper %s.' % mapper
    except Exception as e:
        print "CMIPortQueue: ERROR: %s" % e

    print "CMIPortQueue: Found a mapper"
    (var_name, port_name) = mapper.split ('@')
    print "CMIPortQueue: Var name is %s" % var_name
    print "CMIPortQueue: Port name is %s" % port_name
    try:
        port = self._ports[port_name]
    except KeyError:
        print 'Unable to locate port %s.' % name
    except Exception as e:
        print "CMIPortQueue: ERROR: %s" % e

    # Get the ValueSet from the source port
    try:
        print "CMIPortQueue: Get value set for %s" % var_name
        src_values = port.get_grid_values (var_name)
        print "CMIPortQueue: Got it."
    except Exception as e:
        print "CMIPortQueue: ERROR: Unable to get source values: %s" % e
    #print "CMIPortQueue: Size of source ValueSet is %d" % src_scalar_set.getCount ()

    if map is not None:
        try:
            print "CMIPortQueue: Run the mapper."
            #dst_values = map.run (src_values)
            print 'CMIPortQueue: Does client have var %s' % var_name
            if self._client.CMI_has_output_item (var_name):
                print 'CMIPortQueue: Yes it does.'
                dst_values = self._client.get_grid_values (var_name)
                print 'CMIPortQueue: Got it.'
                map.run_inplace (src_values, dst_values)
            else:
                print 'CMIPortQueue: No it does not.'
                dst_values = map.run (src_values)
            print "CMIPortQueue: Ran the mapper."
        except Exception as e:
            print 'CMIPortQueue: There was an error mapping: %s' % e
    else:
        dst_values = src_values

    try:
        print "CMIPortQueue: Setting values for %s." % var_name
        self._client.set_grid_values (var_name, dst_values)
    except Exception as e:
        print 'There was an error setting values: %s' % e
    print "CMIPortQueue: Mapper is finished."
# DO-NOT-DELETE splicer.end(run_mapper)

  def run_mappers(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(run_mappers)
    # mappers is a comma-separated list of mapper names
    try:
        for mapper in self._mappers.keys ():
            try:
                print "CMIPortQueue: Mapping..."
                self.run_mapper (mapper)
                print "CMIPortQueue: Mapped."
            except Exception as e:
                print 'CMIPortQueue: There was an error running a mapper: %s' % e
    except Exception as e:
        print 'CMIPortQueue: There was an error running the mappers: %s' % e

# DO-NOT-DELETE splicer.end(run_mappers)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.cmi.IGrid dummy0
    # gov.cca.Port dummy1
    # edu.csdms.tools.CSDMSGridMapper dummy2
    # edu.csdms.ports.CMIPort dummy3
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
