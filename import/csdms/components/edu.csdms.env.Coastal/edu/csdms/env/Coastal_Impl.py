#
# File:          Coastal_Impl.py
# Symbol:        edu.csdms.env.Coastal-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.env.Coastal in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
try:
    from cmt.components import CoastalEnvironment as bmi_component
    import cmt.status
    import numpy as np
except Exception as e:
    print 'ERROR: Unable to import coastal: %s' % e
else:
    print 'Coastal: imported BMI'
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.cmi.ComponentHandler
import edu.csdms.cmi.IGrid
import edu.csdms.env.Coastal
import edu.csdms.ports.CMIPort
import edu.csdms.tools.CMIGridPoints
import edu.csdms.tools.Verbose
import gov.cca.CCAException
import gov.cca.Component
import gov.cca.ComponentRelease
import gov.cca.Port
import gov.cca.Services
import gov.cca.ports.GoPort
import gov.cca.ports.ParameterPortFactory
import sidl.BaseClass
import sidl.BaseInterface
import sidl.ClassInfo
import sidl.RuntimeException
import sidl.NotImplementedException

# DO-NOT-DELETE splicer.begin(_before_type)
import sys
# DO-NOT-DELETE splicer.end(_before_type)

class Coastal:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.env.Coastal.Coastal(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    try:
        self.bmi = bmi_component ()
        self.name = self.bmi.get_name ()

        self.log = edu.csdms.tools.Verbose.Verbose ()
        self.log.initialize (self.name, 2)

        self.log.info ('Creating ComponentHandler')
        self.handler = edu.csdms.cmi.ComponentHandler.ComponentHandler ()
        self.log.info ('Created ComponentHandler')

        self.status = cmt.status.CREATED
    except Exception as e:
        self.log.error ('Unexpected error creating component (%s)' % e)

    # Bocca generated code. bocca.protected.begin(edu.csdms.env.Coastal._init)
    self.d_services = None 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.env.Coastal._init) 

# DO-NOT-DELETE splicer.end(__init__)

# Returns the IORself (client stub) of the Impl, mainly for use
# with native delegation
  def _getStub(self):
    return self.__IORself

  def boccaSetServices(self, services):
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

# DO-NOT-DELETE splicer.begin(boccaSetServices)
# DO-NOT-EDIT-BOCCA
# Bocca generated code. bocca.protected.begin(boccaSetServices) 
    self.d_services = services

    # Create a typemap
    mymap = services.createTypeMap()
    

    port = gov.cca.Port.Port(self.__IORself)  # CAST 
    if not port:
      ex = sidl.SIDLException.SIDLException()
      ex.setNote(__name__,0, 'Error casting self edu.csdms.env.Coastal to to gov.cca.Port')
      raise sidl.SIDLException._Exception, ex

    # Provide a gov.cca.ports.GoPort port with port name Run 
    try:
      self.d_services.addProvidesPort(port,    # the implementing object
                              'Run',       # the name the user will see
                              'gov.cca.ports.GoPort',          # the sidl name of the port type.
                              mymap);         # extra properties.
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.add(__name__, 0, 'Error - could not addProvidesPort(port, '           + '"Run","gov.cca.ports.GoPort",mymap)')
      raise sidl.BaseException._Exception, e

    # Provide a edu.csdms.ports.CMIPort port with port name CoastalEnvironment 
    try:
      self.d_services.addProvidesPort(port,    # the implementing object
                              'CoastalEnvironment',       # the name the user will see
                              'edu.csdms.ports.CMIPort',          # the sidl name of the port type.
                              mymap);         # extra properties.
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.add(__name__, 0, 'Error - could not addProvidesPort(port, '           + '"CoastalEnvironment","edu.csdms.ports.CMIPort",mymap)')
      raise sidl.BaseException._Exception, e

    # Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf
    try:
      self.d_services.registerUsesPort('ppf',   # the name the user will see
                                'gov.cca.ports.ParameterPortFactory',     # the sidl name of the port type.
                                mymap);       # extra properties.
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.add(__name__, 0, 'Error - could not registerUsesPort'               + '("ppf","gov.cca.ports.ParameterPortFactory",mymap)')
      raise sidl.BaseException._Exception, e

    compRelease = gov.cca.ComponentRelease.ComponentRelease(self.__IORself)
    try:
      self.d_services.registerForRelease(compRelease)
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 
             'Error - could not registerForRelease(self) in edu.csdms.env.Coastal')
      raise sidl.BaseException._Exception, e
      
    return
# Bocca generated code. bocca.protected.end(boccaSetServices)
# DO-NOT-DELETE splicer.end(boccaSetServices)

  def boccaReleaseServices(self, services):
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

# DO-NOT-DELETE splicer.begin(boccaReleaseServices)
    # DO-NOT-EDIT-BOCCA
    # Bocca generated code. bocca.protected.begin(edu.csdms.env.Coastal.boccaReleaseServices)
    self.d_services = None

    # UN-Provide a gov.cca.ports.GoPort port with port name Run 
    try:
      services.removeProvidesPort('Run')
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 'Error - could not remove provided port '           + 'gov.cca.ports.GoPort:Run')
      raise sidl.BaseException._Exception, e

    # UN-Provide a edu.csdms.ports.CMIPort port with port name CoastalEnvironment 
    try:
      services.removeProvidesPort('CoastalEnvironment')
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 'Error - could not remove provided port '           + 'edu.csdms.ports.CMIPort:CoastalEnvironment')
      raise sidl.BaseException._Exception, e

    # Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf
    try:
      services.unregisterUsesPort('ppf')
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 'Error - could not '               + 'unregisterUsesPort("ppf")')
      raise sidl.BaseException._Exception, e

    return
    # Bocca generated code. bocca.protected.end(edu.csdms.env.Coastal.boccaReleaseServices)
# DO-NOT-DELETE splicer.end(boccaReleaseServices)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.ports.ParameterPortFactory dummy0
    # edu.csdms.tools.Verbose dummy1
    # edu.csdms.tools.CMIGridPoints dummy2
    # edu.csdms.cmi.ComponentHandler dummy3
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

  def setServices(self, services):
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

    """\
 Starts up a component presence in the calling framework.
@param services the component instance's handle on the framework world.
Contracts concerning services and setServices:

The component interaction with the CCA framework
and Ports begins on the call to setServices by the framework.

This function is called exactly once for each instance created
by the framework.

The argument services will never be nil/null.

Those uses ports which are automatically connected by the framework
(so-called service-ports) may be obtained via getPort during
setServices.
"""
# DO-NOT-DELETE splicer.begin(setServices)

    # Put your code here... prolog

    # bocca-default-code. User may edit or delete.begin(setServices)
    self.boccaSetServices(services)
    # bocca-default-code. User may edit or delete.end(setServices)

    # Put your code here... epilog
    self.log.info ('Casting myself as a CMIPort')
    try:
        port = edu.csdms.ports.CMIPort.CMIPort(self.__IORself)  # CAST 
    except Exception as e:
        self.log.error ('Unexpected casting error (%s)' % e)
    else:
        self.log.info ('Cast myself as a CMIPort')

    self.log.info ('Setting up handler')
    try:
        self.handler.set_up (self.name, port, services)
    except Exception as e:
        self.log.error ('Unexpected handler error (%s)' % e)
    else:
        self.log.info ('Set up handler')


# DO-NOT-DELETE splicer.end(setServices)

  def releaseServices(self, services):
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

    """\
Shuts down a component presence in the calling framework.
@param services the component instance's handle on the framework world.
Contracts concerning services and setServices:

This function is called exactly once for each callback registered
through Services.

The argument services will never be nil/null.
The argument services will always be the same as that received in
setServices.

During this call the component should release any interfaces
acquired by getPort().

During this call the component should reset to nil any stored
reference to services.

After this call, the component instance will be removed from the
framework. If the component instance was created by the
framework, it will be destroyed, not recycled, The behavior of
any port references obtained from this component instance and
stored elsewhere becomes undefined.

Notes for the component implementor:
1) The component writer may perform blocking activities
within releaseServices, such as waiting for remote computations
to shutdown.
2) It is good practice during releaseServices for the component
writer to remove or unregister all the ports it defined.
"""
# DO-NOT-DELETE splicer.begin(releaseServices)
    
    # put your code here ... prolog

    # bocca-default-code. User may edit or delete.begin(releaseServices)
    self.boccaReleaseServices(services)
    # bocca-default-code. User may edit or delete.end(releaseServices)

    # put your code here ... epilog

# DO-NOT-DELETE splicer.end(releaseServices)

  def go(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # int _return
    #

    """\
 
Execute some encapsulated functionality on the component. 
Return 0 if ok, -1 if internal error but component may be 
used further, and -2 if error so severe that component cannot
be further used safely.
"""
# DO-NOT-DELETE splicer.begin(go)
    #self.status = cmt.status.INITIALIZING
    self.handler.go ()
# DO-NOT-DELETE splicer.end(go)

  def CMI_initialize(self, config_file):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string config_file
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_initialize)
    self.log.info ('Initializing (%s)' % config_file)
    if self.status < cmt.status.INITIALIZING:
        self.status = cmt.status.INITIALIZING
        try:
            self.log.info ('Calling handler initialize')
            self.handler.init_component (config_file)
        except Exception as e:
            self.log.error ('Unexpected error initializing handler (%s)' % e)
        else:
            self.log.info ('Initialized handler')
        finally:
            self.status = cmt.status.INITIALIZED
    self.log.info ('Initialized')
    return True

    #if self.status == cmt.status.INITIALIZED:
    #    return True

    #self.log.info ('Initializing (%s)' % config_file)
    #try:
    #    if self.status < cmt.status.INITIALIZING:
    #        try:
    #            self.log.info ('Calling handler initialize')
    #            self.status = cmt.status.INITIALIZING
    #            self.handler.init_component (config_file)
    #        except Exception as e:
    #            self.log.error ('Unexpected error initializing handler (%s)' % e)
    #        else:
    #            self.log.info ('Initialized handler')
    #    else:
    #        try:
    #            self.log.info ('Calling BMI initialize')
    #            self.bmi.initialize (config_file)
    #            self.status = cmt.status.INITIALIZED
    #        except Exception as e:
    #            self.log.error ('Unexpected error initializing BMI (%s)' % e)
    #        else:
    #            self.log.info ('Initialized BMI')
    #except Exception as e:
    #    self.log.error ('Unexpected error initializing (%s)' % e)
    #else:
    #    self.log.info ('Initialized')
    #return True
# DO-NOT-DELETE splicer.end(CMI_initialize)

  def prepare(self, config_file):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string config_file
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(prepare)
    try:
        self.log.info ('Calling BMI initialize')
        self.bmi.initialize (config_file)
    except Exception as e:
        self.log.error ('Unexpected error initializing BMI (%s)' % e)
        return False
    else:
        self.log.info ('Initialized BMI')
        return True

# DO-NOT-DELETE splicer.end(prepare)

  def CMI_run_for(self, time_interval, time_units, stop_rule, stop_vars):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # double time_interval
    # string time_units
    # string stop_rule
    # array<double> stop_vars
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_run_for)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_run_for)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_run_for)
# DO-NOT-DELETE splicer.end(CMI_run_for)

  def CMI_run(self, time_interval):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # double time_interval
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_run)
    #if self.status == cmt.status.UPDATED:
    #    return True

    self.log.info ('Updating (%f)' % time_interval)
    self.status = cmt.status.UPDATING
    try:
        self.handler.run_component (time_interval)
    except Exception as e:
        self.log.error ('Unexpected error updating handler (%s)' % e)
    self.status = cmt.status.UPDATED
    self.log.info ('Updated (%f)' % time_interval)
    return True
    
    #if self.status < cmt.status.UPDATING:
    #    try:
    #        self.log.info ('Calling handler initialize')
    #        self.status = cmt.status.UPDATING
    #        self.handler.run_component (time_interval)
    #    except Exception as e:
    #        self.log.error ('Unexpected error updating handler (%s)' % e)
    #    else:
    #        self.log.info ('Updated handler')
    #    finally:
    #        self.status = cmt.status.UPDATED
    #self.log.info ('Updated (%f)' % time_interval)
    #return True


    #else:
    #    try:
    #        self.log.info ('Calling BMI run')
    #        self.bmi.run (time_interval)
    #        self.status = cmt.status.UPDATED
    #    except Exception as e:
    #        self.log.error ('Unexpected error running BMI (%s)' % e)
    #    else:
    #        self.log.info ('Updated BMI')
    #return True

# DO-NOT-DELETE splicer.end(CMI_run)

  def run(self, time_interval):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # double time_interval
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(run)
    try:
        self.log.info ('Calling BMI run')
        self.bmi.run (time_interval)
    except Exception as e:
        self.log.error ('Unexpected error running BMI (%s)' % e)
        return False
    else:
        self.log.info ('Updated BMI')
        return True

# DO-NOT-DELETE splicer.end(run)

  def CMI_finalize(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_finalize)
    if self.status < cmt.status.FINALIZING:
        self.status = cmt.status.FINALIZING
        try:
            self.handler.finalize_component ()
        except Exception as e:
            self.log.error ('Unexpected error running BMI (%s)' % e)
        finally:
            self.status = cmt.status.FINALIZED
    return True
# DO-NOT-DELETE splicer.end(CMI_finalize)

  def finish(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(finish)
    try:
        self.log.info ('Calling BMI finish')
        self.bmi.finalize ()
    except Exception as e:
        self.log.error ('Unexpected error finishing BMI (%s)' % e)
        return False
    else:
        self.log.info ('Finished BMI')
        return True
# DO-NOT-DELETE splicer.end(finish)

  def CMI_run_model(self, config_file, stop_rule, stop_var):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string config_file
    # string stop_rule
    # double stop_var
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_run_model)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_run_model)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_run_model)
# DO-NOT-DELETE splicer.end(CMI_run_model)

  def CMI_get_start_time(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_start_time)
    return self.bmi.get_start_time ()
# DO-NOT-DELETE splicer.end(CMI_get_start_time)

  def CMI_get_current_time(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_current_time)
    return self.bmi.get_current_time ()
# DO-NOT-DELETE splicer.end(CMI_get_current_time)

  def CMI_get_end_time(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_end_time)
    return self.bmi.get_end_time ()
# DO-NOT-DELETE splicer.end(CMI_get_end_time)

  def CMI_get_values(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_values)
    return self.bmi.get_values (long_var_name)
# DO-NOT-DELETE splicer.end(CMI_get_values)

  def CMI_set_values(self, long_var_name, in_values):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    # array<> in_values
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(CMI_set_values)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_set_values)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_set_values)
# DO-NOT-DELETE splicer.end(CMI_set_values)

  def CMI_get_status(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # string _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_status)
    return str (self.status)
# DO-NOT-DELETE splicer.end(CMI_get_status)

  def CMI_get_component_name(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # string _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_component_name)
    return self.name
# DO-NOT-DELETE splicer.end(CMI_get_component_name)

  def CMI_get_input_item_list(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<string> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_input_item_list)
    return self.bmi.get_input_var_names ()
# DO-NOT-DELETE splicer.end(CMI_get_input_item_list)

  def CMI_get_output_item_list(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<string> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_output_item_list)
    return self.bmi.get_output_var_names ()
# DO-NOT-DELETE splicer.end(CMI_get_output_item_list)

  def CMI_has_output_item(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_has_output_item)
    return long_var_name in self.bmi.get_output_var_names ()
# DO-NOT-DELETE splicer.end(CMI_has_output_item)

  def CMI_has_input_item(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # bool _return
    #

# DO-NOT-DELETE splicer.begin(CMI_has_input_item)
    return long_var_name in self.bmi.get_input_var_names ()
# DO-NOT-DELETE splicer.end(CMI_has_input_item)

  def CMI_get_required_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(CMI_get_required_ports)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_get_required_ports)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_get_required_ports)
# DO-NOT-DELETE splicer.end(CMI_get_required_ports)

  def CMI_release_required_ports(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(CMI_release_required_ports)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_release_required_ports)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_release_required_ports)
# DO-NOT-DELETE splicer.end(CMI_release_required_ports)

  def CMI_get_values_at_indices(self, long_var_name, indices):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    # array<int> indices
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_values_at_indices)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_get_values_at_indices)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_get_values_at_indices)
# DO-NOT-DELETE splicer.end(CMI_get_values_at_indices)

  def CMI_set_values_at_indices(self, long_var_name, indices, in_values):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    # array<int> indices
    # array<> in_values
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(CMI_set_values_at_indices)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_set_values_at_indices)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_set_values_at_indices)
# DO-NOT-DELETE splicer.end(CMI_set_values_at_indices)

  def CMI_print_traceback(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(CMI_print_traceback)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_print_traceback)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_print_traceback)
# DO-NOT-DELETE splicer.end(CMI_print_traceback)

  def CMI_get_grid_spacing(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_grid_spacing)
    #return self.bmi.get_grid_spacing (long_var_name)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_get_grid_spacing)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_get_grid_spacing)
# DO-NOT-DELETE splicer.end(CMI_get_grid_spacing)

  def get_grid_spacing(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_spacing)
    #return self.bmi.get_grid_spacing (long_var_name)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_grid_spacing)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_grid_spacing)
# DO-NOT-DELETE splicer.end(get_grid_spacing)

  def CMI_get_grid_lower_left(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_grid_lower_left)
    #return self.bmi.get_grid_origin (long_var_name)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(CMI_get_grid_lower_left)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(CMI_get_grid_lower_left)
# DO-NOT-DELETE splicer.end(CMI_get_grid_lower_left)

  def get_grid_lower_left(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_lower_left)
    #return self.bmi.get_grid_origin (long_var_name)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_grid_lower_left)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_grid_lower_left)
# DO-NOT-DELETE splicer.end(get_grid_lower_left)

  def CMI_get_grid_shape(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_grid_shape)
    return self.bmi.get_grid_shape (long_var_name)
# DO-NOT-DELETE splicer.end(CMI_get_grid_shape)

  def get_grid_shape(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_shape)
    return self.bmi.get_grid_shape (long_var_name)
# DO-NOT-DELETE splicer.end(get_grid_shape)

  def CMI_get_grid_x(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_grid_x)
    return self.bmi.get_grid_x (long_var_name)
# DO-NOT-DELETE splicer.end(CMI_get_grid_x)

  def get_grid_x(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_x)
    return self.bmi.get_grid_x (long_var_name)
# DO-NOT-DELETE splicer.end(get_grid_x)

  def CMI_get_grid_y(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_grid_y)
    return self.bmi.get_grid_y (long_var_name)
# DO-NOT-DELETE splicer.end(CMI_get_grid_y)

  def get_grid_y(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_y)
    return self.bmi.get_grid_y (long_var_name)
# DO-NOT-DELETE splicer.end(get_grid_y)

  def CMI_get_grid_z(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(CMI_get_grid_z)
    return self.bmi.get_grid_z (long_var_name)
# DO-NOT-DELETE splicer.end(CMI_get_grid_z)

  def get_grid_z(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_z)
    return self.bmi.get_grid_z (long_var_name)
# DO-NOT-DELETE splicer.end(get_grid_z)

  def get_grid_connectivity(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_connectivity)
    return self.bmi.get_grid_connectivity (long_var_name)
# DO-NOT-DELETE splicer.end(get_grid_connectivity)

  def get_grid_offset(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_offset)
    return self.bmi.get_grid_offset (long_var_name)
# DO-NOT-DELETE splicer.end(get_grid_offset)

  def get_grid(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # edu.csdms.cmi.IGrid _return
    #

# DO-NOT-DELETE splicer.begin(get_grid)
    self.log.debug ('Getting grid for %s' % long_var_name)
    try:
        x = self.bmi.get_grid_x (long_var_name)
        y = self.bmi.get_grid_y (long_var_name)

        grid = edu.csdms.tools.CMIGridPoints.CMIGridPoints ()
        grid.initialize (x, y)

        #origin = self.bmi.get_grid_origin (long_var_name)
        #spacing = self.bmi.get_grid_spacing (long_var_name)
        #shape = self.bmi.get_grid_shape (long_var_name)

        #grid = edu.csdms.tools.CMIGridUniformRectilinear.CMIGridUniformRectilinear ()
        #grid.initialize (shape.astype ('int32'), spacing.astype ('float64'), origin.astype ('float64'))

        #igrid = edu.csdms.cmi.IGrid.IGrid (grid)
    except Exception as e:
        self.log.error ('Unexpected error getting grid (%s)' % e)
    self.log.debug ('Got grid for %s' % long_var_name)
    return edu.csdms.cmi.IGrid.IGrid (grid)
# DO-NOT-DELETE splicer.end(get_grid)

  def get_grid_values(self, long_var_name):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_grid_values)
    self.log.debug ('Getting grid values for %s' % long_var_name)
    try:
        vals = self.bmi.get_values (long_var_name)
        print 'Coastal vals', vals
        vals.shape = np.prod (vals.shape)
    except Exception as e:
        self.log.error ('%s: Unexpected error getting grid values for %s' % (e, long_var_name))
    self.log.debug ('Got grid values for %s' % long_var_name)
    return vals
# DO-NOT-DELETE splicer.end(get_grid_values)

  def set_grid_values(self, long_var_name, vals):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string long_var_name
    # array<double> vals
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(set_grid_values)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(set_grid_values)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(set_grid_values)
# DO-NOT-DELETE splicer.end(set_grid_values)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
