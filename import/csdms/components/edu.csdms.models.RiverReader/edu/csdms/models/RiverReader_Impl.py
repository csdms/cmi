#
# File:          RiverReader_Impl.py
# Symbol:        edu.csdms.models.RiverReader-v0.0
# Symbol Type:   class
# Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
# Description:   Implementation of sidl class edu.csdms.models.RiverReader in Python.
# 
# WARNING: Automatically generated; changes will be lost
# 
#


# DO-NOT-DELETE splicer.begin(_initial)
# Insert-Code-Here {_initial} ()
# DO-NOT-DELETE splicer.end(_initial)

import edu.csdms.models.RiverReader
import edu.csdms.openmi.IElementSet
import edu.csdms.openmi.IValueSet
import edu.csdms.openmi.ScalarSet
import edu.csdms.ports.IRFPort
import edu.csdms.tools.ConfigDialog
import edu.csdms.tools.PrintQueue
import edu.csdms.tools.TemplateFiles
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
from csdms_utils.components import RiverReader as RR
import numpy
# DO-NOT-DELETE splicer.end(_before_type)

class RiverReader:

# All calls to sidl methods should use __IORself

# Normal Babel creation pases in an IORself. If IORself == None
# that means this Impl class is being constructed for native delegation
  def __init__(self, IORself = None):
    if (IORself == None):
      self.__IORself = edu.csdms.models.RiverReader.RiverReader(impl = self)
    else:
      self.__IORself = IORself
# DO-NOT-DELETE splicer.begin(__init__)

    # Put your code here...
    self.reader = RR ()

    self.data = None
    self.data_length = 0

    self.velocity = 0
    self.width = 0
    self.depth = 0
    self.bedload = 0
    self.sus_bedload = 0
    self.discharge = self.velocity * self.width * self.depth

    # Bocca generated code. bocca.protected.begin(edu.csdms.models.RiverReader._init)
    self.d_services = None 
    self.bocca_print_errs = True
    # Bocca generated code. bocca.protected.end(edu.csdms.models.RiverReader._init) 

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
      ex.setNote(__name__,0, 'Error casting self edu.csdms.models.RiverReader to to gov.cca.Port')
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

    # Provide a edu.csdms.ports.IRFPort port with port name River 
    try:
      self.d_services.addProvidesPort(port,    # the implementing object
                              'River',       # the name the user will see
                              'edu.csdms.ports.IRFPort',          # the sidl name of the port type.
                              mymap);         # extra properties.
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.add(__name__, 0, 'Error - could not addProvidesPort(port, '           + '"River","edu.csdms.ports.IRFPort",mymap)')
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
             'Error - could not registerForRelease(self) in edu.csdms.models.RiverReader')
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
    # Bocca generated code. bocca.protected.begin(edu.csdms.models.RiverReader.boccaReleaseServices)
    self.d_services = None

    # UN-Provide a gov.cca.ports.GoPort port with port name Run 
    try:
      services.removeProvidesPort('Run')
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 'Error - could not remove provided port '           + 'gov.cca.ports.GoPort:Run')
      raise sidl.BaseException._Exception, e

    # UN-Provide a edu.csdms.ports.IRFPort port with port name River 
    try:
      services.removeProvidesPort('River')
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 'Error - could not remove provided port '           + 'edu.csdms.ports.IRFPort:River')
      raise sidl.BaseException._Exception, e

    # Un-Register a use port of type gov.cca.ports.ParameterPortFactory with port name ppf
    try:
      services.unregisterUsesPort('ppf')
    except sidl.BaseException._Exception, e:
      (etype, eobj, etb) = sys.exc_info()
      eobj.exception.add(__name__,0, 'Error - could not '               + 'unregisterUsesPort("ppf")')
      raise sidl.BaseException._Exception, e

    return
    # Bocca generated code. bocca.protected.end(edu.csdms.models.RiverReader.boccaReleaseServices)
# DO-NOT-DELETE splicer.end(boccaReleaseServices)

  def boccaForceUsePortInclude(self, dummy0, dummy1, dummy2, dummy3, dummy4,  \
    dummy5):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # gov.cca.ports.ParameterPortFactory dummy0
    # edu.csdms.tools.Verbose dummy1
    # edu.csdms.tools.TemplateFiles dummy2
    # edu.csdms.openmi.ScalarSet dummy3
    # edu.csdms.tools.ConfigDialog dummy4
    # edu.csdms.tools.PrintQueue dummy5
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
    o5 = dummy5
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

    self._userinput = services.createTypeMap()

    gcp = services.getPort ("ppf")
    ppf = gov.cca.ports.ParameterPortFactory.ParameterPortFactory (gcp)

    ppf.initParameterData (self._userinput, "Configure")
    ppf.setBatchTitle (self._userinput, "River Reader Parameters")

    dialog = edu.csdms.tools.ConfigDialog.ConfigDialog ()
    #dialog = dialog.create ()
    dialog.read ("RiverReader.xml")
    dialog.construct (ppf, self._userinput)
    ppf.addParameterPort (self._userinput, services)
    services.releasePort ("ppf")
	
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
    file = self._userinput.getString ("/RiverReader/Input/File", "")
   
    #Array of input for initialize function
    properties = numpy.array([file]) 

    print 'Reading input file: %s' % file
    self.initialize(properties)

    span = self.get_time_span ()
    print 'The data I have spans (%f, %f)' % (span[0], span[1])

    for i in numpy.arange(1, 11, .5):
      self.run(i)

      val = self.get_value_set ('mean_bed_load_flux_from_river')
      val_scalar = edu.csdms.openmi.ScalarSet.ScalarSet (val)
      print 'Qb(%f) = %f' % (i, val_scalar.getScalar (0))

      val = self.get_value_set ('mean_water_discharge_from_river')
      val_scalar = edu.csdms.openmi.ScalarSet.ScalarSet (val)
      print 'Q(%f) = %f' % (i, val_scalar.getScalar (0))

      print ''

    print 'Run complete'
    self.finalize()    	

# DO-NOT-DELETE splicer.end(go)

  def initialize(self, properties):
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

# DO-NOT-DELETE splicer.begin(initialize)

    #self.data = self.reader.initialize (properties[0])
    #self.data_length = self.data.size

    # Get the file name from the GUI
    file = self._userinput.getString ("/RiverReader/Input/File", "")

    self.reader.initialize (file)
    #self.reader.initialize (properties[0])

# DO-NOT-DELETE splicer.end(initialize)

  def run(self, time):
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

# DO-NOT-DELETE splicer.begin(run)
    self.reader.run (time)
    #river_data = self.reader.run (time)

    #self.velocity = self.river_data[1]
    #self.width = self.river_data[2]
    #self.depth = self.river_data[3]
    #self.bedload = self.river_data[4]
    #self.sus_bedload = self.river_data[5]
    #self.discharge = self.velocity * self.width * self.depth
    #print('velocity: ' + str(self.velocity) + '\nwidth: ' + str(self.width) 
    #          + '\ndepth: ' + str(self.depth) 
    #          + '\nbedload: ' + str(self.bedload) 
    #          + '\nsuspended bedload: ' + str(self.sus_bedload) 
    #          + '\ndischarge: ' + str(self.discharge))    
# DO-NOT-DELETE splicer.end(run)

  def finalize(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(finalize)
    self.reader.finalize ()
# DO-NOT-DELETE splicer.end(finalize)

  def getRaster_nx(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # long _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_nx)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_nx)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_nx)
# DO-NOT-DELETE splicer.end(getRaster_nx)

  def getRaster_ny(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # long _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_ny)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_ny)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_ny)
# DO-NOT-DELETE splicer.end(getRaster_ny)

  def getRaster_dx(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_dx)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_dx)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_dx)
# DO-NOT-DELETE splicer.end(getRaster_dx)

  def getRaster_dy(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_dy)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_dy)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_dy)
# DO-NOT-DELETE splicer.end(getRaster_dy)

  def getRaster_ulx(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_ulx)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_ulx)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_ulx)
# DO-NOT-DELETE splicer.end(getRaster_ulx)

  def getRaster_uly(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # double _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_uly)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_uly)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_uly)
# DO-NOT-DELETE splicer.end(getRaster_uly)

  def getRaster_grid(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double,2> _return
    #

# DO-NOT-DELETE splicer.begin(getRaster_grid)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(getRaster_grid)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(getRaster_grid)
# DO-NOT-DELETE splicer.end(getRaster_grid)

  def get_raster_dimen(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<int> _return
    #

# DO-NOT-DELETE splicer.begin(get_raster_dimen)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_raster_dimen)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_raster_dimen)
# DO-NOT-DELETE splicer.end(get_raster_dimen)

  def get_raster_res(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_raster_res)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_raster_res)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_raster_res)
# DO-NOT-DELETE splicer.end(get_raster_res)

  def get_raster_data(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> _return
    #

# DO-NOT-DELETE splicer.begin(get_raster_data)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_raster_data)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_raster_data)
# DO-NOT-DELETE splicer.end(get_raster_data)

  def get_time_span(self):
    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<double> _return
    #

# DO-NOT-DELETE splicer.begin(get_time_span)
    return self.reader.get_time_span ()
     
# DO-NOT-DELETE splicer.end(get_time_span)

  def get_element_set(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # edu.csdms.openmi.IElementSet _return
    #

# DO-NOT-DELETE splicer.begin(get_element_set)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_element_set)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_element_set)
# DO-NOT-DELETE splicer.end(get_element_set)

  def get_value_set(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # edu.csdms.openmi.IValueSet _return
    #

# DO-NOT-DELETE splicer.begin(get_value_set)

    try:
      val = self.reader.get_value (val_string)
    except BadValueStringError:
      print 'Unknown value string: %s' % val_string
      val = 0

    # Convert scalar to an IValueSet
    scalar_set = edu.csdms.openmi.ScalarSet.ScalarSet ()
    scalar_set.init (numpy.array ([val]))

    value_set = edu.csdms.openmi.IValueSet.IValueSet (scalar_set)

    print 'RiverReader: Value: %f' % val

    return value_set

# DO-NOT-DELETE splicer.end(get_value_set)

  def get_value_set_data(self, val_string):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # array<> _return
    #

# DO-NOT-DELETE splicer.begin(get_value_set_data)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(get_value_set_data)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(get_value_set_data)
# DO-NOT-DELETE splicer.end(get_value_set_data)

  def set_value_set(self, val_string, values):
    #
    # sidl EXPECTED INCOMING TYPES
    # ============================
    # string val_string
    # edu.csdms.openmi.IValueSet values
    #

    #
    # sidl EXPECTED RETURN VALUE(s)
    # =============================
    # None
    #

# DO-NOT-DELETE splicer.begin(set_value_set)
    #
    # This method has not been implemented
    #

    # DO-DELETE-WHEN-IMPLEMENTING exception.begin(set_value_set)
    noImpl = sidl.NotImplementedException.NotImplementedException()
    noImpl.setNote("This method has not been implemented.")
    raise  sidl.NotImplementedException._Exception, noImpl
    # DO-DELETE-WHEN-IMPLEMENTING exception.end(set_value_set)
# DO-NOT-DELETE splicer.end(set_value_set)

# DO-NOT-DELETE splicer.begin(_final)
# Insert-Code-Here {_final} ()
# DO-NOT-DELETE splicer.end(_final)
