// 
// File:          edu_csdms_models_Child_Impl.cxx
// Symbol:        edu.csdms.models.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.Child
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "edu_csdms_models_Child_Impl.hxx"

// 
// Includes for all method dependencies.
// 
#ifndef included_edu_csdms_cmi_IGrid_hxx
#include "edu_csdms_cmi_IGrid.hxx"
#endif
#ifndef included_edu_csdms_ports_CMIPort_hxx
#include "edu_csdms_ports_CMIPort.hxx"
#endif
#ifndef included_edu_csdms_tools_CMIConfigFile_hxx
#include "edu_csdms_tools_CMIConfigFile.hxx"
#endif
#ifndef included_edu_csdms_tools_CMIGrid_hxx
#include "edu_csdms_tools_CMIGrid.hxx"
#endif
#ifndef included_edu_csdms_tools_CMIPortQueue_hxx
#include "edu_csdms_tools_CMIPortQueue.hxx"
#endif
#ifndef included_edu_csdms_tools_ConfigDialog_hxx
#include "edu_csdms_tools_ConfigDialog.hxx"
#endif
#ifndef included_edu_csdms_tools_PrintQueue_hxx
#include "edu_csdms_tools_PrintQueue.hxx"
#endif
#ifndef included_edu_csdms_tools_TemplateFiles_hxx
#include "edu_csdms_tools_TemplateFiles.hxx"
#endif
#ifndef included_edu_csdms_tools_Verbose_hxx
#include "edu_csdms_tools_Verbose.hxx"
#endif
#ifndef included_gov_cca_CCAException_hxx
#include "gov_cca_CCAException.hxx"
#endif
#ifndef included_gov_cca_Services_hxx
#include "gov_cca_Services.hxx"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_hxx
#include "gov_cca_ports_ParameterPortFactory.hxx"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_ClassInfo_hxx
#include "sidl_ClassInfo.hxx"
#endif
#ifndef included_sidl_RuntimeException_hxx
#include "sidl_RuntimeException.hxx"
#endif
#ifndef included_sidl_NotImplementedException_hxx
#include "sidl_NotImplementedException.hxx"
#endif
// DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._includes)

  // Insert-UserCode-Here {edu.csdms.models.Child._includes:prolog} (additional includes or code)

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Child._includes)

#define _BOCCA_CTOR_MESSAGES 0
  // If -D_BOCCA_STDERR is given to the compiler, diagnostics print to stderr.
  // In production use, probably want not to use -D_BOCCA_STDERR.
#ifdef _BOCCA_STDERR

#include <iostream>

#ifdef _BOCCA_CTOR_PRINT
#undef _BOCCA_CTOR_MESSAGES
#define _BOCCA_CTOR_MESSAGES 1
#endif // _BOCCA_CTOR_PRINT 
#else  // _BOCCA_STDERR


#endif // _BOCCA_STDERR



  // If -D_BOCCA_BOOST is given to the compiler, exceptions and diagnostics 
  // will include function names for boost-understood compilers.
  // If boost is not available (and therefore ccaffeine is not in use), 
  // -D_BOCCA_BOOST can be omitted and function names will not be included in 
  // messages.
#ifndef _BOCCA_BOOST
#define BOOST_CURRENT_FUNCTION ""
#else
#include <boost/current_function.hpp>
#endif

  // This is intended to simplify exception throwing as SIDL_THROW does for C.
#define BOCCA_THROW_CXX(EX_CLS, MSG) \
{ \
    EX_CLS ex = EX_CLS::_create(); \
    ex.setNote( MSG ); \
    ex.add(__FILE__, __LINE__, BOOST_CURRENT_FUNCTION); \
    throw ex; \
}

  // This simplifies exception extending and rethrowing in c++, like 
  // SIDL_CHECK in C. EX_OBJ must be the caught exception and is extended with 
  // msg and file/line/func added. Continuing the throw is up to the user.
#define BOCCA_EXTEND_THROW_CXX(EX_OBJ, MSG, LINEOFFSET) \
{ \
  std::string msg = std::string(MSG) + std::string(BOOST_CURRENT_FUNCTION); \
  EX_OBJ.add(__FILE__,__LINE__ + LINEOFFSET, msg); \
}


  // Bocca generated code. bocca.protected.end(edu.csdms.models.Child._includes)

  // Insert-UserCode-Here {edu.csdms.models.Child._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(edu.csdms.models.Child._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
edu::csdms::models::Child_impl::Child_impl() : StubBase(reinterpret_cast< 
  void*>(::edu::csdms::models::Child::_wrapObj(reinterpret_cast< void*>(this))),
  false) , _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._ctor2)
  // Insert-Code-Here {edu.csdms.models.Child._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child._ctor2)
}

// user defined constructor
void edu::csdms::models::Child_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._ctor)
    
  // Insert-UserCode-Here {edu.csdms.models.Child._ctor:prolog} (constructor method) 
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Child._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR edu.csdms.models.Child: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  //this->state = NULL;
  this->status = CMI_STATUS_CREATED;

  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Child._ctor)

  // Insert-UserCode-Here {edu.csdms.models.Child._ctor:epilog} (constructor method)

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child._ctor)
}

// user defined destructor
void edu::csdms::models::Child_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._dtor)
  // Insert-UserCode-Here {edu.csdms.models.Child._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Child._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR edu.csdms.models.Child: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Child._dtor) 

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child._dtor)
}

// static class initializer
void edu::csdms::models::Child_impl::_load() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._load)
  // Insert-Code-Here {edu.csdms.models.Child._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 * Method:  boccaSetServices[]
 */
void
edu::csdms::models::Child_impl::boccaSetServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.boccaSetServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Child.boccaSetServices)

  gov::cca::TypeMap typeMap;
  gov::cca::Port    port;

  this->d_services = services;

  typeMap = this->d_services.createTypeMap();

  port = ::babel_cast< gov::cca::Port>(*this);
  if (port._is_nil()) {
    BOCCA_THROW_CXX( ::sidl::SIDLException , 
                     "edu.csdms.models.Child: Error casting self to gov::cca::Port");
  } 


  // Provide a gov.cca.ports.GoPort port with port name Run 
  try{
    this->d_services.addProvidesPort(
                   port,              // implementing object
                   "Run", // port instance name
                   "gov.cca.ports.GoPort",     // full sidl type of port
                   typeMap);          // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex, 
        "edu.csdms.models.Child: Error calling addProvidesPort(port,"
        "\"Run\", \"gov.cca.ports.GoPort\", typeMap) ", -2);
    throw;
  }    

  // Provide a edu.csdms.ports.CMIPort port with port name SubaerialDelta 
  try{
    this->d_services.addProvidesPort(
                   port,              // implementing object
                   "SubaerialDelta", // port instance name
                   "edu.csdms.ports.CMIPort",     // full sidl type of port
                   typeMap);          // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex, 
        "edu.csdms.models.Child: Error calling addProvidesPort(port,"
        "\"SubaerialDelta\", \"edu.csdms.ports.CMIPort\", typeMap) ", -2);
    throw;
  }    

  // Use a gov.cca.ports.ParameterPortFactory port with port name ppf 
  try{
    this->d_services.registerUsesPort(
                   "ppf", // port instance name
                   "gov.cca.ports.ParameterPortFactory",     // full sidl type of port
                    typeMap);         // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex,
       "edu.csdms.models.Child: Error calling registerUsesPort(\"ppf\", "
       "\"gov.cca.ports.ParameterPortFactory\", typeMap) ", -2);
    throw;
  }

  // Use a edu.csdms.ports.CMIPort port with port name SubaqueousDelta 
  try{
    this->d_services.registerUsesPort(
                   "SubaqueousDelta", // port instance name
                   "edu.csdms.ports.CMIPort",     // full sidl type of port
                    typeMap);         // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex,
       "edu.csdms.models.Child: Error calling registerUsesPort(\"SubaqueousDelta\", "
       "\"edu.csdms.ports.CMIPort\", typeMap) ", -2);
    throw;
  }


  gov::cca::ComponentRelease cr = 
        ::babel_cast< gov::cca::ComponentRelease>(*this);
  this->d_services.registerForRelease(cr);
  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.Child.boccaSetServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.boccaSetServices)
}

/**
 * Method:  boccaReleaseServices[]
 */
void
edu::csdms::models::Child_impl::boccaReleaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.boccaReleaseServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Child.boccaReleaseServices)
  this->d_services=0;


  // Un-provide gov.cca.ports.GoPort port with port name Run 
  try{
    services.removeProvidesPort("Run");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling removeProvidesPort("
              << "\"Run\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Un-provide edu.csdms.ports.CMIPort port with port name SubaerialDelta 
  try{
    services.removeProvidesPort("SubaerialDelta");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling removeProvidesPort("
              << "\"SubaerialDelta\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  try{
    services.unregisterUsesPort("ppf");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling unregisterUsesPort("
              << "\"ppf\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Release edu.csdms.ports.CMIPort port with port name SubaqueousDelta 
  try{
    services.unregisterUsesPort("SubaqueousDelta");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling unregisterUsesPort("
              << "\"SubaqueousDelta\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.Child.boccaReleaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.boccaReleaseServices)
}

/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::Child_impl::boccaForceUsePortInclude_impl (
  /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
  /* in */::edu::csdms::ports::CMIPort& dummy1,
  /* in */::edu::csdms::tools::CMIGrid& dummy2,
  /* in */::edu::csdms::tools::Verbose& dummy3,
  /* in */::edu::csdms::tools::CMIConfigFile& dummy4,
  /* in */::edu::csdms::tools::TemplateFiles& dummy5,
  /* in */::edu::csdms::tools::ConfigDialog& dummy6,
  /* in */::edu::csdms::tools::CMIPortQueue& dummy7,
  /* in */::edu::csdms::tools::PrintQueue& dummy8 ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Child.boccaForceUsePortInclude)
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;
    (void)dummy6;
    (void)dummy7;
    (void)dummy8;

  // Bocca generated code. bocca.protected.end(edu.csdms.models.Child.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.boccaForceUsePortInclude)
}

/**
 *  Starts up a component presence in the calling framework.
 * @param services the component instance's handle on the framework world.
 * Contracts concerning services and setServices:
 * 
 * The component interaction with the CCA framework
 * and Ports begins on the call to setServices by the framework.
 * 
 * This function is called exactly once for each instance created
 * by the framework.
 * 
 * The argument services will never be nil/null.
 * 
 * Those uses ports which are automatically connected by the framework
 * (so-called service-ports) may be obtained via getPort during
 * setServices.
 */
void
edu::csdms::models::Child_impl::setServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.setServices)

  // Insert-UserCode-Here{edu.csdms.models.Child.setServices:prolog}

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Child.setServices)
     boccaSetServices(services); 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Child.setServices)
  
  // Insert-UserCode-Here{edu.csdms.models.Child.setServices:epilog}
  this->userinput = services.createTypeMap ();

  {
    this->log = ::edu::csdms::tools::Verbose::_create ();
    this->log.initialize (CMI_COMPONENT_NAME, 2);
  }

  ::gov::cca::Port gcp = services.getPort("ppf");

  this->log.info ("Reading component configuation file");
  {
    this->cfg_file = ::edu::csdms::tools::CMIConfigFile::_create ();
    this->cfg_file.read (CMI_COMPONENT_NAME);
  }
  this->log.info ("Read component configuation file");

  if (gcp._is_nil ())
  {
    BOCCA_THROW_CXX (sidl::SIDLException,
                     "ParameterPortFactory not provided by framework");
  }

  ::gov::cca::ports::ParameterPortFactory ppf;
  ppf = ::babel_cast< gov::cca::ports::ParameterPortFactory >(gcp);

  if (ppf._is_nil()) {
    BOCCA_THROW_CXX (sidl::SIDLException,
                     "Bogus ParameterPortFactory provided");
  }

  ppf.initParameterData (this->userinput, "Configure");
  ppf.setBatchTitle (this->userinput, CMI_COMPONENT_NAME " Parameters");

  this->log.info ("Reading component dialog file");
  {
    ::edu::csdms::tools::ConfigDialog dialog =
      ::edu::csdms::tools::ConfigDialog::_create ();
    string file = this->cfg_file.get_string ("CMI_CONFIG_DIALOG_XML_FILE");

    this->log.info ("Reading... ");
    dialog.read (file);
    this->log.info ("Constructing... ");
    dialog.construct (ppf, this->userinput);
  }
  this->log.info ("Read component dialog file");

  ppf.addParameterPort(this->userinput, services);
  services.releasePort("ppf");

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.setServices)
}

/**
 * Shuts down a component presence in the calling framework.
 * @param services the component instance's handle on the framework world.
 * Contracts concerning services and setServices:
 * 
 * This function is called exactly once for each callback registered
 * through Services.
 * 
 * The argument services will never be nil/null.
 * The argument services will always be the same as that received in
 * setServices.
 * 
 * During this call the component should release any interfaces
 * acquired by getPort().
 * 
 * During this call the component should reset to nil any stored
 * reference to services.
 * 
 * After this call, the component instance will be removed from the
 * framework. If the component instance was created by the
 * framework, it will be destroyed, not recycled, The behavior of
 * any port references obtained from this component instance and
 * stored elsewhere becomes undefined.
 * 
 * Notes for the component implementor:
 * 1) The component writer may perform blocking activities
 * within releaseServices, such as waiting for remote computations
 * to shutdown.
 * 2) It is good practice during releaseServices for the component
 * writer to remove or unregister all the ports it defined.
 */
void
edu::csdms::models::Child_impl::releaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.releaseServices)

  // Insert-UserCode-Here {edu.csdms.models.Child.releaseServices} 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Child.releaseServices)
     boccaReleaseServices(services);
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Child.releaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.releaseServices)
}

/**
 *  
 * Execute some encapsulated functionality on the component. 
 * Return 0 if ok, -1 if internal error but component may be 
 * used further, and -2 if error so severe that component cannot
 * be further used safely.
 */
int32_t
edu::csdms::models::Child_impl::go_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.go)
  int bocca_status = 0;

  this->log.info ("Go");
  this->is_driver = TRUE;

  this->CMI_initialize (NULL);
  this->CMI_run (-1);
  this->CMI_finalize ();

  return bocca_status;

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.go)
}

/**
 * Method:  CMI_initialize[]
 */
bool
edu::csdms::models::Child_impl::CMI_initialize_impl (
  /* in */const ::std::string& config_file ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_initialize)

  this->log.info ("Initializing");
  if (this->status >= CMI_STATUS_INITIALIZING)
    return TRUE;
  else
    this->status = CMI_STATUS_INITIALIZING;

  this->log.info (this->CMI_get_status ());

  this->log.info ("Create port queue.");
  { // Create port queue.
    ::edu::csdms::ports::CMIPort port =
      ::babel_cast<edu::csdms::ports::CMIPort>(*this);
    sidl::array<string> ports = this->cfg_file.get_array ("CMI_PORT_NAMES");

    this->ports = ::edu::csdms::tools::CMIPortQueue::_create ();

    this->ports.initialize (this->d_services, port);

    this->ports.add_ports (ports);

    this->ports.connect_ports ();
  }
  this->log.info ("Created port queue.");
  
  this->log.info ("Parse config file.");
  { // Read parameters from the config dialog.
    ::edu::csdms::tools::TemplateFiles tmpls;
    //const char *src_files = CMI_TEMPLATE_SOURCE_FILES;
    //const char *dest_files = CMI_TEMPLATE_DEST_FILES;
    string val;
    sidl::array<string> srcs = this->cfg_file.get_array ("CMI_TEMPLATE_SOURCE_FILES");
    sidl::array<string> dsts = this->cfg_file.get_array ("CMI_TEMPLATE_DEST_FILES");

    tmpls = ::edu::csdms::tools::TemplateFiles::_create ();
    tmpls.add_files (srcs, dsts);
    tmpls.substitute (this->userinput, "/"CMI_COMPONENT_NAME"/Input/Var/",
        ".");

    val = this->userinput.getString (
        "/"CMI_COMPONENT_NAME"/Input/Var/SimulationName",
        CMI_COMPONENT_NAME);
    this->userinput.putString (
        "/"CMI_COMPONENT_NAME"/SimulationName",
        val);
  }
  this->log.info ("Parsed config file.");

  /* The contents of this file will be something like,
   * Child Child.in
   * */
  this->state.initialize ("Child_command_line.txt");

  this->log.info ("Create print queue.");
  { // Set up the print queue.
    ::edu::csdms::ports::CMIPort port =
      ::babel_cast<edu::csdms::ports::CMIPort>(*this);
    this->print_q = ::edu::csdms::tools::PrintQueue::_create ();

    this->print_q.initialize (this->userinput, "/"CMI_COMPONENT_NAME,
        port);
    this->print_q.add_files_from_list (CMI_OUTPUT_FILE_NS);
  }
  this->log.info ("Created print queue.");

#if CMI_TURN_OFF_PORTS
  this->log.warning ("Forgetting ports for now.");
#else
  this->log.info ("Initialize ports.");
  this->ports.initialize_ports (0);
#endif

  {
    sidl::array<string> mappers = this->cfg_file.get_array ("CMI_MAPPERS");

#if CMI_TURN_OFF_MAPPING
    this->log.warning ("Mapping is turned off.");
#else
    this->log.info ("Initialize mappers.");
    this->ports.add_mappers (mappers);

    this->log.info ("Map initial values.");
    this->ports.run_mappers ();
  }
#endif

  this->status = CMI_STATUS_INITIALIZED;

  this->log.info ("Initialized.");
  this->log.info (this->CMI_get_status ());
  return TRUE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_initialize)
}

/**
 * Method:  CMI_run_for[]
 */
bool
edu::csdms::models::Child_impl::CMI_run_for_impl (
  /* in */double time_interval,
  /* in */const ::std::string& time_units,
  /* in */const ::std::string& stop_rule,
  /* in array<double> */::sidl::array<double>& stop_vars ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_run_for)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_run_for} (CMI_run_for method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_run_for)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_run_for");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_run_for)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_run_for)
}

/**
 * Method:  CMI_run[]
 */
bool
edu::csdms::models::Child_impl::CMI_run_impl (
  /* in */double time_interval ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_run)
  this->log.info ("Updating.");
  this->log.info (this->CMI_get_status ());

  if (this->status == CMI_STATUS_UPDATING)
    return TRUE;
  else
    this->status = CMI_STATUS_UPDATING;

  {
    double print_time = this->print_q.next_print_time ();
    while (print_time>0 && print_time<time_interval)
    {
      this->status = CMI_STATUS_UPDATED;

      this->log.info ("Running until next print time.");
      this->CMI_run (print_time);

      this->print_q.print_all (print_time);
      print_time = this->print_q.next_print_time ();
    }
  }

  { // Run model until the stop time
    double now = this->state.get_current_time ();
    double port_queue_dt = CMI_PORT_QUEUE_DT;
    double t = now + port_queue_dt;
    for (; t<time_interval; t+=port_queue_dt)
    {
#if CMI_TURN_OFF_PORTS
      this->log.warning ("Forgetting ports for now.");
#else
      this->log.info ("Updating ports.");
      this->ports.run_ports (now);
#endif

#if CMI_TURN_OFF_MAPPING
      this->log.warning ("Not mapping values.");
#else
      this->log.info ("Mapping values.");
      this->ports.run_mappers ();
#endif

      this->log.info ("Updating myself.");
      this->state.update_until (t);

      now = this->state.get_current_time ();
    }

    if (t>time_interval)
    { // The last partial time step (if necessary).
#if CMI_TURN_OFF_PORTS
      this->log.warning ("Forgetting ports for now.");
#else
      this->log.info ("Updating ports.");
      this->ports.run_ports (now);
#endif

#if CMI_TURN_OFF_MAPPING
      this->log.warning ("Not mapping values.");
#else
      this->log.info ("Mapping values.");
      this->ports.run_mappers ();
#endif

      this->log.info ("Updating myself.");
      this->state.update_until (time_interval);
    }
  }

  this->status = CMI_STATUS_UPDATED;
  ::std::cerr << CMI_COMPONENT_NAME ": Status is "
              << this->CMI_get_status () << ::std::endl;

  this->log.info ("Updated.");
  this->log.info (this->CMI_get_status ());
  return TRUE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_run)
}

/**
 * Method:  CMI_finalize[]
 */
bool
edu::csdms::models::Child_impl::CMI_finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_finalize)
  this->status = CMI_STATUS_FINALIZING;

  this->state.finalize ();

  this->is_driver = FALSE;
  //this->state = NULL;

  this->print_q.close ();
  this->ports.finalize_ports ();
  this->ports.disconnect_ports ();

  this->status = CMI_STATUS_FINALIZED;

  return TRUE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_finalize)
}

/**
 * Method:  CMI_run_model[]
 */
bool
edu::csdms::models::Child_impl::CMI_run_model_impl (
  /* in */const ::std::string& config_file,
  /* in */const ::std::string& stop_rule,
  /* in */double stop_var ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_run_model)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_run_model} (CMI_run_model method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_run_model)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_run_model");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_run_model)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_run_model)
}

/**
 * Method:  CMI_get_values[]
 */
::sidl::basearray
edu::csdms::models::Child_impl::CMI_get_values_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_values)
  ::sidl::array<double> dbl_array = this->get_grid_values (long_var_name);
  //return ::babel_cast<sidl::basearray>(dbl_array);
  return dbl_array;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_values)
}

/**
 * Method:  CMI_set_values[]
 */
void
edu::csdms::models::Child_impl::CMI_set_values_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_set_values)
  ::sidl::array <double> dbl_values (
      (struct sidl_double__array*)in_values._get_baseior ());
  
  this->set_grid_values (long_var_name, dbl_values);

  return;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_set_values)
}

/**
 * Method:  CMI_get_status[]
 */
::std::string
edu::csdms::models::Child_impl::CMI_get_status_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_status)
  switch (this->status) {
    case CMI_STATUS_CREATED:
      return ::std::string ("Created");
    case CMI_STATUS_INITIALIZING:
      return ::std::string ("Initializing");
    case CMI_STATUS_INITIALIZED:
      return ::std::string ("Initialized");
    case CMI_STATUS_UPDATING:
      return ::std::string ("Updating");
    case CMI_STATUS_UPDATED:
      return ::std::string ("Updated");
    case CMI_STATUS_FINALIZING:
      return ::std::string ("Finalizing");
    case CMI_STATUS_FINALIZED:
      return ::std::string ("Finalized");
    default:
      return ::std::string ("Unknown");
  }
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_status)
}

/**
 * Method:  CMI_get_component_name[]
 */
::std::string
edu::csdms::models::Child_impl::CMI_get_component_name_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_component_name)
  return std::string (CMI_COMPONENT_NAME);
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_component_name)
}

/**
 * Method:  CMI_get_input_item_list[]
 */
::sidl::array< ::std::string>
edu::csdms::models::Child_impl::CMI_get_input_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_input_item_list)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_input_item_list} (CMI_get_input_item_list method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_input_item_list)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_input_item_list");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_input_item_list)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_input_item_list)
}

/**
 * Method:  CMI_get_output_item_list[]
 */
::sidl::array< ::std::string>
edu::csdms::models::Child_impl::CMI_get_output_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_output_item_list)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_output_item_list} (CMI_get_output_item_list method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_output_item_list)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_output_item_list");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_output_item_list)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_output_item_list)
}

/**
 * Method:  CMI_has_output_item[]
 */
bool
edu::csdms::models::Child_impl::CMI_has_output_item_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_has_output_item)
  const char ** names = this->state.get_output_var_names ();
  char **name;

  for (name=(char**)names; *name; name++)
    if (g_ascii_strcasecmp (*name, long_var_name.c_str ())==0)
      return TRUE;
  return FALSE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_has_output_item)
}

/**
 * Method:  CMI_has_input_item[]
 */
bool
edu::csdms::models::Child_impl::CMI_has_input_item_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_has_input_item)
  const char ** names = this->state.get_input_var_names ();
  char **name;

  for (name=(char**)names; *name; name++)
    if (g_ascii_strcasecmp (*name, long_var_name.c_str ())==0)
      return TRUE;
  return FALSE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_has_input_item)
}

/**
 * Method:  CMI_get_required_ports[]
 */
void
edu::csdms::models::Child_impl::CMI_get_required_ports_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_required_ports)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_required_ports} (CMI_get_required_ports method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_required_ports)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_required_ports");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_required_ports)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_required_ports)
}

/**
 * Method:  CMI_release_required_ports[]
 */
void
edu::csdms::models::Child_impl::CMI_release_required_ports_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_release_required_ports)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_release_required_ports} (CMI_release_required_ports method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_release_required_ports)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_release_required_ports");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_release_required_ports)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_release_required_ports)
}

/**
 * Method:  CMI_get_values_at_indices[]
 */
::sidl::basearray
edu::csdms::models::Child_impl::CMI_get_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_values_at_indices)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_values_at_indices} (CMI_get_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_values_at_indices)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_values_at_indices)
}

/**
 * Method:  CMI_set_values_at_indices[]
 */
void
edu::csdms::models::Child_impl::CMI_set_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_set_values_at_indices)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_set_values_at_indices} (CMI_set_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_set_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_set_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_set_values_at_indices)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_set_values_at_indices)
}

/**
 * Method:  CMI_print_traceback[]
 */
void
edu::csdms::models::Child_impl::CMI_print_traceback_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_print_traceback)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_print_traceback} (CMI_print_traceback method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_print_traceback)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_print_traceback");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_print_traceback)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_print_traceback)
}

/**
 * Method:  CMI_get_grid_spacing[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::CMI_get_grid_spacing_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_grid_spacing)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_grid_spacing} (CMI_get_grid_spacing method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_grid_spacing)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_grid_spacing");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_grid_spacing)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_grid_spacing)
}

/**
 * Method:  CMI_get_grid_lower_left[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::CMI_get_grid_lower_left_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_grid_lower_left)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_grid_lower_left} (CMI_get_grid_lower_left method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_grid_lower_left)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_grid_lower_left");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_grid_lower_left)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_grid_lower_left)
}

/**
 * Method:  CMI_get_grid_shape[]
 */
::sidl::array<int32_t>
edu::csdms::models::Child_impl::CMI_get_grid_shape_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_grid_shape)
  // Insert-Code-Here {edu.csdms.models.Child.CMI_get_grid_shape} (CMI_get_grid_shape method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.CMI_get_grid_shape)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_grid_shape");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.CMI_get_grid_shape)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_grid_shape)
}

/**
 * Method:  CMI_get_grid_x[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::CMI_get_grid_x_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_grid_x)
  sidl::array<double> vals;
  int len;
  double * x = this->state.get_grid_x (long_var_name, len);
  int * lower = new int[1];
  int * upper = new int[1];
  int * stride = new int[1];
  
  lower[0] = 0;
  upper[0] = len-1;
  stride[0] = 1;
  
  vals.borrow (x, 1, lower, upper, stride);

  delete [] stride;
  delete [] upper;
  delete [] lower;

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_grid_x)
}

/**
 * Method:  CMI_get_grid_y[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::CMI_get_grid_y_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_grid_y)
  sidl::array<double> vals;
  int len;
  double * y = this->state.get_grid_y (long_var_name, len);
  int * lower = new int[1];
  int * upper = new int[1];
  int * stride = new int[1];
  
  lower[0] = 0;
  upper[0] = len-1;
  stride[0] = 1;
  
  vals.borrow (y, 1, lower, upper, stride);

  delete [] stride;
  delete [] upper;
  delete [] lower;

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_grid_y)
}

/**
 * Method:  CMI_get_grid_z[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::CMI_get_grid_z_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.CMI_get_grid_z)
  sidl::array<double> vals;
  int len;
  double * z = this->state.get_grid_z (long_var_name, len);
  int lower[1] = {0};
  int upper[1];
  int stride[1] = {1};
  
  upper[0] = len-1;
  
  vals.borrow (z, 1, lower, upper, stride);

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.CMI_get_grid_z)
}

/**
 * Method:  get_grid_connectivity[]
 */
::sidl::array<int32_t>
edu::csdms::models::Child_impl::get_grid_connectivity_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_grid_connectivity)
  sidl::array<int> vals;
  int len;
  int * connectivity = this->state.get_grid_connectivity (long_var_name,
                                                          len);
  int * lower = new int[1];
  int * upper = new int[1];
  int * stride = new int[1];
  
  lower[0] = 0;
  upper[0] = len-1;
  stride[0] = 1;
  
  vals.borrow (connectivity, 1, lower, upper, stride);

  delete [] stride;
  delete [] upper;
  delete [] lower;

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_grid_connectivity)
}

/**
 * Method:  get_grid_offset[]
 */
::sidl::array<int32_t>
edu::csdms::models::Child_impl::get_grid_offset_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_grid_offset)
  sidl::array<int> vals;
  int len;
  int * offset = this->state.get_grid_offset (long_var_name, len);
  int * lower = new int[0];
  int * upper = new int[len-1];
  int * stride = new int[1];

  lower[0] = 0;
  upper[0] = len-1;
  stride[0] = 1;
  
  vals.borrow (offset, 1, lower, upper, stride);

  delete [] stride;
  delete [] upper;
  delete [] lower;

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_grid_offset)
}

/**
 * Method:  get_grid[]
 */
::edu::csdms::cmi::IGrid
edu::csdms::models::Child_impl::get_grid_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_grid)
    sidl::array<double> x = this->CMI_get_grid_x (long_var_name);
    sidl::array<double> y = this->CMI_get_grid_y (long_var_name);
    sidl::array<int> c = this->get_grid_connectivity (long_var_name);
    sidl::array<int> o = this->get_grid_offset (long_var_name);
    ::edu::csdms::tools::CMIGrid grid =
      ::edu::csdms::tools::CMIGrid::_create ();

    grid.initialize (x, y, c, o);

    return ::babel_cast<edu::csdms::cmi::IGrid>(grid);
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_grid)
}

/**
 * Method:  get_grid_values[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::get_grid_values_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_grid_values)
  sidl::array<double> vals;

  this->log.info ("Getting values.");
  {
    int len = 0;
    double * data;
    int lower[1] = {0};
    int upper[1];
    int stride[1] = {1};

    data = this->state.get_double (long_var_name, len);

    upper[0] = len-1;
  
    vals.borrow (data, 1, lower, upper, stride);

  }
  this->log.info ("Got values.");

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_grid_values)
}

/**
 * Method:  set_grid_values[]
 */
void
edu::csdms::models::Child_impl::set_grid_values_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<double> */::sidl::array<double>& vals ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.set_grid_values)

    this->log.info ("Setting values.");
    { // Set values through the c-array
      const int n_dim = 1;
      int shape[1];
      int len;
      double * x = this->state.get_grid_x (long_var_name, len);
      double * vals_ptr = vals.first ();

      shape[0] =  len;
      this->state.set_double (long_var_name, vals_ptr, n_dim, shape);

      delete [] x;
    }

    this->log.info ("Set values.");
    return;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.set_grid_values)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._misc)
// Insert-Code-Here {edu.csdms.models.Child._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.Child._misc)

