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
import edu.csdms.tools.Verbose
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

    self._log = edu.csdms.tools.Verbose.Verbose ()
    self._log.initialize ("CMIPortQueue", 2)

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
        self._log.error ("Services already set")
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
    self._log.info ("Adding server port %s" % server)
    if server not in self._servers:
        self._servers.append (server)
    else:
        self._log.error ("Duplicate server port (%s)" % server)
# DO-NOT-DELETE splicer.end(add_port)

  def add_ports(self, servers):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<string> servers
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_ports)
    # servers is a comma-separated list of port names to add the the queue.
    self._log.info ("Adding server ports (%s)" % ', '.join (servers))
    #for server in servers.split (','):
    for server in servers:
        self.add_port (server)
    self._log.info ("Added server ports.")
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
    self._log.info ("Initializing ports.")
    for (name, port) in self._ports.items ():
        port.CMI_initialize (properties)
    self._log.info ("Initialized ports.")
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
    self._log.info ("Updating ports.")
    for (name, port) in self._ports.items ():
      try:
        port.CMI_run (time)
      except Exception as e:
        self._log.error ("Unexpected error running port %s (%s)" % (name, e))
    self._log.info ("Updated ports.")
# DO-NOT-DELETE splicer.end(run_ports)

  def finalize_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(finalize_ports)
    # Call the finalize method for each port in the queue.
    self._log.info ("Finalizing ports.")
    for (name, port) in self._ports.items ():
        port.CMI_finalize ()
    self._log.info ("Finalized ports.")
# DO-NOT-DELETE splicer.end(finalize_ports)

  def connect_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(connect_ports)
    # Connect CMIPorts in the queue.
    self._log.info ("Connecting ports.")
    for server in self._servers:

      self._log.info ("Connecting %s port." % server)
      try:
        port = self._services.getPort (server)
      except Exception, e:
        if self.bocca_print_errs or True:
          self._log.error ("tools.irfports: port %s not connected." % server)
        e.args = "tools.irfports: port %s not connected:\n%s" % (server, e.args)
        raise

      cmi_port = edu.csdms.ports.CMIPort.CMIPort (port)
      if not cmi_port:
        if self.bocca_print_errs or True:
          self._log.error ("tools.cmiports: Error casting port gov.cca.Port " + \
                           "to %s type ports.CMIPort" % server)
        ex = sidl.SIDLException.SIDLException()
        ex.setNote(__name__,0, 'Error casting self Port to ports.CMIPort')
        raise sidl.SIDLException._Exception, ex

      self._ports[server] = cmi_port
      self._log.info ("Connected ports.")
# DO-NOT-DELETE splicer.end(connect_ports)

  def disconnect_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(disconnect_ports)
    # Disconnect each of the ports.
    self._log.info ("Disconnecting ports.")
    for server in self._servers:
      self._services.releasePort (server)
    self._log.info ("Disconnected ports.")
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
    self._log.info ("Adding mapper (%s)." % mapper)
    try:
        (full_name, method) = mapper.split (':')
    except ValueError:
        self._log.warning ("Missing method in mapper name (%s)" % mapper)
    except Exception as e:
        self._log.error ("Unexpected error getting method (%s)" % e)

    self._log.info ("Getting var/port names.")
    try:
        (var_name, port_name) = full_name.split ('@')
    except ValueError:
        self._log.error ('Bad full var name name (var_name@port_name) (%s)' % full_name)
    except Exception as e:
        self._log.error ("Unexpected error getting var/port strings (%s)" % e)

    self._log.info ("Looking for existing mapper.")
    if self._mappers.has_key (full_name):
        self._log.warning ("Maper exists (%s)" % full_name)

    # If a mapper can't be created, it is set to None
    self._mappers[full_name] = None

    self._log.info ("Getting port.")
    # Find the port
    try:
        port = self._ports[port_name]
    except KeyError:
        self._log.error ("Port not found (%s)" % port_name)
    except Exception as e:
        self._log.error ("Unexpected error getting port (%s)" % e)

    self._log.info ("Getting destination grid (%s)." % var_name)
    # Get the destination ElementSet
    try:
      dst_grid = self._client.get_grid (var_name)
    except Exception as e:
      self._log.warning ("Unable to get client grid (%s)." % e)
      element_set = None

    self._log.info ("Getting source grid.")
    # Get the source ElementSet
    try:
      src_grid = port.get_grid (var_name)
      #print 'CMIPortQueue: Size of source ElementSet is %s' % src_element_set.getElementCount ()
    except Exception as e:
      self._log.error ("Unable to get source grid (%s)" % e)

    # Create a mapper
    self._log.info ("Using CSDMSGridMapper")
    try:
        mapper = edu.csdms.tools.CSDMSGridMapper.CSDMSGridMapper ()
    except Exception as e:
        self._log.error ("Unable to create mapper (%s)" % e)
    #mapper = edu.csdms.tools.OpenMIGridMapper ()
    #mapper = edu.csdms.tools.ESMFGridMapper ()

    try:
        self._log.info ("Initializing mapper")
        mapper.initialize (dst_grid, src_grid)
        self._log.info ("Initialized mapper")
    except Exception as e:
        self._log.error ("Unable to initialize mapper (%s)" % e)

    self._mappers[full_name] = mapper
    self._log.info ("Added mapper (%s)" % mapper)
# DO-NOT-DELETE splicer.end(add_mapper)

  def add_mappers(self, mappers):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # array<string> mappers
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(add_mappers)
    # mappers is a comma-separated list of mapper names
    self._log.info ("Adding mappers (%s)" % ', '.join (mappers))
    #for mapper in mappers.split (','):
    for mapper in mappers:
        self.add_mapper (mapper)
    self._log.info ("Added mappers")
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
    self._log.info ("Running mapper (%s)" % mapper)
    try:
        map = self._mappers[mapper]
    except KeyError:
        self._log.error ("Unable to locate mapper")
    except Exception as e:
        self._log.error ("Unexpected error (%s)" % e)

    self._log.info ("Found a mapper")
    (var_name, port_name) = mapper.split ('@')

    try:
        port = self._ports[port_name]
    except KeyError:
        self._log.error ("Unable to locate port (%s)", name)
    except Exception as e:
        self._log.error ("Unexpected error (%s)" % e)

    # Get the ValueSet from the source port
    try:
        self._log.info ("Get source grid values (%s)" % var_name)
        src_values = port.get_grid_values (var_name)
        self._log.info ("Got grid values")
    except Exception as e:
        self._log.error ("Unable to get source grid values (%s)" % e)

    if map is not None:
        try:
            self._log.info ("Running the mapper")
            if self._client.CMI_has_output_item (var_name):
                self._log.info ("Running in-place")
                dst_values = self._client.get_grid_values (var_name)
                map.run_inplace (src_values, dst_values)
            else:
                dst_values = map.run (src_values)
            self._log.info ("Ran the mapper")
        except Exception as e:
            self._log.error ("Unable to run mapper (%s)" % e)
    else:
        self._log.info ("Using a direct mapping.")
        dst_values = src_values

    try:
        self._log.info ("Setting grid values.")
        self._client.set_grid_values (var_name, dst_values)
    except Exception as e:
        self._log.error ("Unable to set values (%s)" % e)
    self._log.info ("Ran mapper.")
# DO-NOT-DELETE splicer.end(run_mapper)

  def run_mappers(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(run_mappers)
    # mappers is a comma-separated list of mapper names
    self._log.info ("Running all mappers.")
    try:
        for mapper in self._mappers.keys ():
            try:
                self.run_mapper (mapper)
            except Exception as e:
                self._log.error ("Unexpected error (%s)" % e)
    except Exception as e:
        self._log.error ("Unexpected error (%s)" % e)
    self._log.info ("Ran all mappers.")

# DO-NOT-DELETE splicer.end(run_mappers)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3, dummy4):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # edu.csdms.tools.Verbose dummy0
    # edu.csdms.cmi.IGrid dummy1
    # gov.cca.Port dummy2
    # edu.csdms.tools.CSDMSGridMapper dummy3
    # edu.csdms.ports.CMIPort dummy4
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
