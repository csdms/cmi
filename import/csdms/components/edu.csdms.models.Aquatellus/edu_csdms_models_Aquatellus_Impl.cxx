// 
// File:          edu_csdms_models_Aquatellus_Impl.cxx
// Symbol:        edu.csdms.models.Aquatellus-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.Aquatellus
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "edu_csdms_models_Aquatellus_Impl.hxx"

// 
// Includes for all method dependencies.
// 
#ifndef included_edu_csdms_openmi_IScalarSet_hxx
#include "edu_csdms_openmi_IScalarSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_hxx
#include "edu_csdms_openmi_ScalarSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_ValueSet_hxx
#include "edu_csdms_openmi_ValueSet.hxx"
#endif
#ifndef included_edu_csdms_tools_ConfigDialog_hxx
#include "edu_csdms_tools_ConfigDialog.hxx"
#endif
#ifndef included_edu_csdms_tools_IRFPortQueue_hxx
#include "edu_csdms_tools_IRFPortQueue.hxx"
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
// DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._includes)

  // Insert-UserCode-Here {edu.csdms.models.Aquatellus._includes:prolog} (additional includes or code)

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Aquatellus._includes)

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


  // Bocca generated code. bocca.protected.end(edu.csdms.models.Aquatellus._includes)

  // Insert-UserCode-Here {edu.csdms.models.Aquatellus._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
edu::csdms::models::Aquatellus_impl::Aquatellus_impl() : StubBase(
  reinterpret_cast< void*>(::edu::csdms::models::Aquatellus::_wrapObj(
  reinterpret_cast< void*>(this))),false) , _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._ctor2)
  // Insert-Code-Here {edu.csdms.models.Aquatellus._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._ctor2)
}

// user defined constructor
void edu::csdms::models::Aquatellus_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._ctor)
    
  // Insert-UserCode-Here {edu.csdms.models.Aquatellus._ctor:prolog} (constructor method) 
  //

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Aquatellus._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR edu.csdms.models.Aquatellus: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Aquatellus._ctor)
  // Insert-UserCode-Here {edu.csdms.models.Aquatellus._ctor:epilog} (constructor method)
   this->state = NULL;
   this->status = CMI_STATUS_CREATED;

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._ctor)
}

// user defined destructor
void edu::csdms::models::Aquatellus_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._dtor)
  // Insert-UserCode-Here {edu.csdms.models.Aquatellus._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Aquatellus._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR edu.csdms.models.Aquatellus: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Aquatellus._dtor) 

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._dtor)
}

// static class initializer
void edu::csdms::models::Aquatellus_impl::_load() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._load)
  // Insert-Code-Here {edu.csdms.models.Aquatellus._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 * Method:  boccaSetServices[]
 */
void
edu::csdms::models::Aquatellus_impl::boccaSetServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.boccaSetServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Aquatellus.boccaSetServices)

  gov::cca::TypeMap typeMap;
  gov::cca::Port    port;

  this->d_services = services;

  typeMap = this->d_services.createTypeMap();

  port = ::babel_cast< gov::cca::Port>(*this);
  if (port._is_nil()) {
    BOCCA_THROW_CXX( ::sidl::SIDLException , 
                     "edu.csdms.models.Aquatellus: Error casting self to gov::cca::Port");
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
        "edu.csdms.models.Aquatellus: Error calling addProvidesPort(port,"
        "\"Run\", \"gov.cca.ports.GoPort\", typeMap) ", -2);
    throw;
  }    

  // Provide a edu.csdms.ports.CMIPort port with port name DeltaPlain 
  try{
    this->d_services.addProvidesPort(
                   port,              // implementing object
                   "DeltaPlain", // port instance name
                   "edu.csdms.ports.CMIPort",     // full sidl type of port
                   typeMap);          // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex, 
        "edu.csdms.models.Aquatellus: Error calling addProvidesPort(port,"
        "\"DeltaPlain\", \"edu.csdms.ports.CMIPort\", typeMap) ", -2);
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
       "edu.csdms.models.Aquatellus: Error calling registerUsesPort(\"ppf\", "
       "\"gov.cca.ports.ParameterPortFactory\", typeMap) ", -2);
    throw;
  }


  gov::cca::ComponentRelease cr = 
        ::babel_cast< gov::cca::ComponentRelease>(*this);
  this->d_services.registerForRelease(cr);
  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.Aquatellus.boccaSetServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.boccaSetServices)
}

/**
 * Method:  boccaReleaseServices[]
 */
void
edu::csdms::models::Aquatellus_impl::boccaReleaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.boccaReleaseServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Aquatellus.boccaReleaseServices)
  this->d_services=0;


  // Un-provide gov.cca.ports.GoPort port with port name Run 
  try{
    services.removeProvidesPort("Run");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Aquatellus: Error calling removeProvidesPort("
              << "\"Run\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Un-provide edu.csdms.ports.CMIPort port with port name DeltaPlain 
  try{
    services.removeProvidesPort("DeltaPlain");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Aquatellus: Error calling removeProvidesPort("
              << "\"DeltaPlain\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  try{
    services.unregisterUsesPort("ppf");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Aquatellus: Error calling unregisterUsesPort("
              << "\"ppf\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.Aquatellus.boccaReleaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.boccaReleaseServices)
}

/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::Aquatellus_impl::boccaForceUsePortInclude_impl (
  /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
  /* in */::edu::csdms::tools::IRFPortQueue& dummy1,
  /* in */::edu::csdms::tools::Verbose& dummy2,
  /* in */::edu::csdms::openmi::ValueSet& dummy3,
  /* in */::edu::csdms::tools::TemplateFiles& dummy4,
  /* in */::edu::csdms::openmi::ScalarSet& dummy5,
  /* in */::edu::csdms::tools::ConfigDialog& dummy6,
  /* in */::edu::csdms::openmi::IScalarSet& dummy7,
  /* in */::edu::csdms::tools::PrintQueue& dummy8 ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Aquatellus.boccaForceUsePortInclude)
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;
    (void)dummy6;
    (void)dummy7;
    (void)dummy8;

  // Bocca generated code. bocca.protected.end(edu.csdms.models.Aquatellus.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.boccaForceUsePortInclude)
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
edu::csdms::models::Aquatellus_impl::setServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.setServices)

  // Insert-UserCode-Here{edu.csdms.models.Aquatellus.setServices:prolog}

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Aquatellus.setServices)
     boccaSetServices(services); 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Aquatellus.setServices)
  
  // Insert-UserCode-Here{edu.csdms.models.Aquatellus.setServices:epilog}
  ::gov::cca::ports::ParameterPortFactory ppf;

  this->userinput = services.createTypeMap ();

  { /* Connect to the PPF port */
    ::gov::cca::Port gcp = services.getPort ("ppf");


    if (gcp._is_nil ())
    {
      BOCCA_THROW_CXX (sidl::SIDLException,
          "ParameterPortFactory not provided by framework");
    }


    ppf = ::babel_cast< gov::cca::ports::ParameterPortFactory >(gcp);
    ppf.initParameterData (this->userinput, "Configure");
    ppf.setBatchTitle (this->userinput, BMI_MODEL_NAME " Parameters");
  }

  { /* Create the config dialog */
    ::edu::csdms::tools::ConfigDialog dialog =
      ::edu::csdms::tools::ConfigDialog::_create ();
    dialog.read (BMI_MODEL_NAME ".xml");
    dialog.construct (ppf, this->userinput);
  }

  ppf.addParameterPort(this->userinput, services);
  services.releasePort("ppf");

  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.setServices)
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
edu::csdms::models::Aquatellus_impl::releaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.releaseServices)

  // Insert-UserCode-Here {edu.csdms.models.Aquatellus.releaseServices} 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.Aquatellus.releaseServices)
     boccaReleaseServices(services);
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.Aquatellus.releaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.releaseServices)
}

/**
 *  
 * Execute some encapsulated functionality on the component. 
 * Return 0 if ok, -1 if internal error but component may be 
 * used further, and -2 if error so severe that component cannot
 * be further used safely.
 */
int32_t
edu::csdms::models::Aquatellus_impl::go_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.go)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.go} (go method)

  int bocca_status = 0;
  //double duration = -1;

  this->is_driver = TRUE;

  //duration = this->userinput.getDouble (
  //    "/"BMI_MODEL_NAME"/Input/Var/RunDuration", -1);

  this->CMI_initialize (NULL);
  this->CMI_run (-1);
  this->CMI_finalize ();

  return bocca_status;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.go)
}

/**
 * Method:  CMI_initialize[]
 */
bool
edu::csdms::models::Aquatellus_impl::CMI_initialize_impl (
  /* in */const ::std::string& config_file ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_initialize)
  if (this->status>=CMI_STATUS_INITIALIZING)
    return TRUE;

  this->status = CMI_STATUS_INITIALIZING;

  { /* Read parameters from the config dialog. */
    ::edu::csdms::tools::TemplateFiles tmpls;
    char **src;
    char **dest;
    const char *src_files[] = CMI_TEMPLATE_SOURCE_FILES;
    const char *dest_files[] = CMI_TEMPLATE_DEST_FILES;

    tmpls = ::edu::csdms::tools::TemplateFiles::_create ();
    for (src=(char**)src_files, dest=(char**)dest_files; *src;
        src++, dest++)
    {
      tmpls.add_file (*src, *dest);
      tmpls.substitute (this->userinput, "/"BMI_MODEL_NAME"/Input/Var/", ".");
    }
  }

  this->state = BMI_Initialize (NULL);

  this->status = CMI_STATUS_INITIALIZED;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_initialize)
}

/**
 * Method:  CMI_run_for[]
 */
bool
edu::csdms::models::Aquatellus_impl::CMI_run_for_impl (
  /* in */double time_interval,
  /* in */const ::std::string& time_units,
  /* in */const ::std::string& stop_rule,
  /* in array<double> */::sidl::array<double>& stop_vars ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_run_for)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_run_for} (CMI_run_for method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_run_for)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_run_for");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_run_for)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_run_for)
}

/**
 * Method:  CMI_run[]
 */
bool
edu::csdms::models::Aquatellus_impl::CMI_run_impl (
  /* in */double time_interval ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_run)
  if (this->status == CMI_STATUS_UPDATING)
    return TRUE;

  this->status = CMI_STATUS_UPDATING;

  while (BMI_Get_current_time (NULL)<time_interval)
  {
    BMI_Update (NULL);
  }

  this->status = CMI_STATUS_UPDATED;

  return TRUE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_run)
}

/**
 * Method:  CMI_finalize[]
 */
bool
edu::csdms::models::Aquatellus_impl::CMI_finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_finalize)
  this->status = CMI_STATUS_FINALIZING;

  BMI_Finalize (this->state);

  this->is_driver = FALSE;
  this->state = NULL;

  this->status = CMI_STATUS_FINALIZED;

  return TRUE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_finalize)
}

/**
 * Method:  CMI_run_model[]
 */
bool
edu::csdms::models::Aquatellus_impl::CMI_run_model_impl (
  /* in */const ::std::string& config_file,
  /* in */const ::std::string& stop_rule,
  /* in */double stop_var ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_run_model)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_run_model} (CMI_run_model method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_run_model)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_run_model");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_run_model)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_run_model)
}

/**
 * Method:  CMI_get_values[]
 */
::sidl::basearray
edu::csdms::models::Aquatellus_impl::CMI_get_values_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_values)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_values} (CMI_get_values method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_values)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_values");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_values)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_values)
}

/**
 * Method:  CMI_set_values[]
 */
void
edu::csdms::models::Aquatellus_impl::CMI_set_values_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_set_values)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_set_values} (CMI_set_values method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_set_values)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_set_values");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_set_values)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_set_values)
}

/**
 * Method:  CMI_get_status[]
 */
::std::string
edu::csdms::models::Aquatellus_impl::CMI_get_status_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_status)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_status} (CMI_get_status method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_status)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_status");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_status)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_status)
}

/**
 * Method:  CMI_get_component_name[]
 */
::std::string
edu::csdms::models::Aquatellus_impl::CMI_get_component_name_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_component_name)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_component_name} (CMI_get_component_name method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_component_name)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_component_name");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_component_name)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_component_name)
}

/**
 * Method:  CMI_get_input_item_list[]
 */
::sidl::array< ::std::string>
edu::csdms::models::Aquatellus_impl::CMI_get_input_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_input_item_list)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_input_item_list} (CMI_get_input_item_list method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_input_item_list)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_input_item_list");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_input_item_list)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_input_item_list)
}

/**
 * Method:  CMI_get_output_item_list[]
 */
::sidl::array< ::std::string>
edu::csdms::models::Aquatellus_impl::CMI_get_output_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_output_item_list)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_output_item_list} (CMI_get_output_item_list method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_output_item_list)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_output_item_list");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_output_item_list)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_output_item_list)
}

/**
 * Method:  CMI_get_required_ports[]
 */
void
edu::csdms::models::Aquatellus_impl::CMI_get_required_ports_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_required_ports)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_required_ports} (CMI_get_required_ports method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_required_ports)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_required_ports");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_required_ports)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_required_ports)
}

/**
 * Method:  CMI_release_required_ports[]
 */
void
edu::csdms::models::Aquatellus_impl::CMI_release_required_ports_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_release_required_ports)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_release_required_ports} (CMI_release_required_ports method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_release_required_ports)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_release_required_ports");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_release_required_ports)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_release_required_ports)
}

/**
 * Method:  CMI_get_values_at_indices[]
 */
::sidl::basearray
edu::csdms::models::Aquatellus_impl::CMI_get_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_get_values_at_indices)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_get_values_at_indices} (CMI_get_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_get_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_get_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_get_values_at_indices)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_get_values_at_indices)
}

/**
 * Method:  CMI_set_values_at_indices[]
 */
void
edu::csdms::models::Aquatellus_impl::CMI_set_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_set_values_at_indices)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_set_values_at_indices} (CMI_set_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_set_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_set_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_set_values_at_indices)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_set_values_at_indices)
}

/**
 * Method:  CMI_print_traceback[]
 */
void
edu::csdms::models::Aquatellus_impl::CMI_print_traceback_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.CMI_print_traceback)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.CMI_print_traceback} (CMI_print_traceback method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.CMI_print_traceback)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "CMI_print_traceback");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.CMI_print_traceback)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.CMI_print_traceback)
}

/**
 * Method:  initialize[]
 */
bool
edu::csdms::models::Aquatellus_impl::initialize_impl (
  /* in */const ::std::string& config_file ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.initialize)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.initialize} (initialize method)
  this->status = CMI_STATUS_INITIALIZING;

  { /* Read parameters from the config dialog. */
    ::edu::csdms::tools::TemplateFiles tmpls;
    char **src;
    char **dest;
    const char *src_files[] = CMI_TEMPLATE_SOURCE_FILES;
    const char *dest_files[] = CMI_TEMPLATE_DEST_FILES;


    tmpls = ::edu::csdms::tools::TemplateFiles::_create ();
    for (src=(char**)src_files, dest=(char**)dest_files; *src; src++, dest++)
    {
      tmpls.add_file (*src, *dest);
      tmpls.substitute (this->userinput, "/"BMI_MODEL_NAME"/Input/Var/", ".");
    }
  }

  this->state = BMI_Initialize (NULL);
  this->is_initialized = TRUE;
  this->is_driver = TRUE;

  this->status = CMI_STATUS_INITIALIZED;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.initialize)
}

/**
 * Method:  run_for[]
 */
bool
edu::csdms::models::Aquatellus_impl::run_for_impl (
  /* in */double time_interval,
  /* in */const ::std::string& time_units,
  /* in */const ::std::string& stop_rule,
  /* in array<double> */::sidl::array<double>& stop_vars ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.run_for)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.run_for} (run_for method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.run_for)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "run_for");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.run_for)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.run_for)
}

/**
 * Method:  finalize[]
 */
void
edu::csdms::models::Aquatellus_impl::finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.finalize)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.finalize} (finalize method)
  BMI_Finalize (this->state);
  this->is_initialized = FALSE;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.finalize)
}

/**
 * Method:  run_model[]
 */
bool
edu::csdms::models::Aquatellus_impl::run_model_impl (
  /* in */const ::std::string& config_file,
  /* in */const ::std::string& stop_rule,
  /* in */double stop_var ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.run_model)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.run_model} (run_model method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.run_model)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "run_model");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.run_model)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.run_model)
}

/**
 * Method:  get_values[]
 */
::sidl::basearray
edu::csdms::models::Aquatellus_impl::get_values_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_values)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_values} (get_values method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_values)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_values");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_values)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_values)
}

/**
 * Method:  set_values[]
 */
void
edu::csdms::models::Aquatellus_impl::set_values_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.set_values)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.set_values} (set_values method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.set_values)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_values");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.set_values)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.set_values)
}

/**
 * Method:  get_status[]
 */
::std::string
edu::csdms::models::Aquatellus_impl::get_status_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_status)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_status} (get_status method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_status)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_status");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_status)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_status)
}

/**
 * Method:  get_component_name[]
 */
::std::string
edu::csdms::models::Aquatellus_impl::get_component_name_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_component_name)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_component_name} (get_component_name method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_component_name)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_component_name");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_component_name)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_component_name)
}

/**
 * Method:  get_input_item_list[]
 */
::sidl::array< ::std::string>
edu::csdms::models::Aquatellus_impl::get_input_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_input_item_list)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_input_item_list} (get_input_item_list method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_input_item_list)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_input_item_list");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_input_item_list)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_input_item_list)
}

/**
 * Method:  get_output_item_list[]
 */
::sidl::array< ::std::string>
edu::csdms::models::Aquatellus_impl::get_output_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_output_item_list)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_output_item_list} (get_output_item_list method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_output_item_list)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_output_item_list");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_output_item_list)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_output_item_list)
}

/**
 * Method:  get_required_ports[]
 */
void
edu::csdms::models::Aquatellus_impl::get_required_ports_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_required_ports)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_required_ports} (get_required_ports method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_required_ports)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_required_ports");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_required_ports)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_required_ports)
}

/**
 * Method:  release_required_ports[]
 */
void
edu::csdms::models::Aquatellus_impl::release_required_ports_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.release_required_ports)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.release_required_ports} (release_required_ports method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.release_required_ports)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "release_required_ports");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.release_required_ports)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.release_required_ports)
}

/**
 * Method:  get_values_at_indices[]
 */
::sidl::basearray
edu::csdms::models::Aquatellus_impl::get_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_values_at_indices)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_values_at_indices} (get_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_values_at_indices)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_values_at_indices)
}

/**
 * Method:  set_values_at_indices[]
 */
void
edu::csdms::models::Aquatellus_impl::set_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.set_values_at_indices)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.set_values_at_indices} (set_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.set_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.set_values_at_indices)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.set_values_at_indices)
}

/**
 * Method:  print_traceback[]
 */
void
edu::csdms::models::Aquatellus_impl::print_traceback_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.print_traceback)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.print_traceback} (print_traceback method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.print_traceback)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "print_traceback");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.print_traceback)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.print_traceback)
}

/**
 * Method:  getRaster_nx[]
 */
int64_t
edu::csdms::models::Aquatellus_impl::getRaster_nx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_nx)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_nx} (getRaster_nx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_nx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_nx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_nx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_nx)
}

/**
 * Method:  getRaster_ny[]
 */
int64_t
edu::csdms::models::Aquatellus_impl::getRaster_ny_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_ny)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_ny} (getRaster_ny method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_ny)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ny");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_ny)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_ny)
}

/**
 * Method:  getRaster_dx[]
 */
double
edu::csdms::models::Aquatellus_impl::getRaster_dx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_dx)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_dx} (getRaster_dx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_dx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_dx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_dx)
}

/**
 * Method:  getRaster_dy[]
 */
double
edu::csdms::models::Aquatellus_impl::getRaster_dy_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_dy)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_dy} (getRaster_dy method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_dy)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dy");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_dy)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_dy)
}

/**
 * Method:  getRaster_ulx[]
 */
double
edu::csdms::models::Aquatellus_impl::getRaster_ulx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_ulx)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_ulx} (getRaster_ulx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_ulx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ulx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_ulx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_ulx)
}

/**
 * Method:  getRaster_uly[]
 */
double
edu::csdms::models::Aquatellus_impl::getRaster_uly_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_uly)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_uly} (getRaster_uly method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_uly)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_uly");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_uly)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_uly)
}

/**
 * Method:  getRaster_grid[]
 */
::sidl::array<double>
edu::csdms::models::Aquatellus_impl::getRaster_grid_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.getRaster_grid)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.getRaster_grid} (getRaster_grid method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.getRaster_grid)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_grid");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.getRaster_grid)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.getRaster_grid)
}

/**
 * Method:  get_raster_dimen[]
 */
::sidl::array<int32_t>
edu::csdms::models::Aquatellus_impl::get_raster_dimen_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_raster_dimen)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_raster_dimen} (get_raster_dimen method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_raster_dimen)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_dimen");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_raster_dimen)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_raster_dimen)
}

/**
 * Method:  get_raster_res[]
 */
::sidl::array<double>
edu::csdms::models::Aquatellus_impl::get_raster_res_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_raster_res)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_raster_res} (get_raster_res method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_raster_res)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_res");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_raster_res)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_raster_res)
}

/**
 * Method:  get_raster_data[]
 */
::sidl::basearray
edu::csdms::models::Aquatellus_impl::get_raster_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_raster_data)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_raster_data} (get_raster_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_raster_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_raster_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_raster_data)
}

/**
 * Method:  get_time_span[]
 */
::sidl::array<double>
edu::csdms::models::Aquatellus_impl::get_time_span_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_time_span)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_time_span} (get_time_span method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_time_span)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_time_span");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_time_span)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_time_span)
}

/**
 * Method:  get_value_set_data[]
 */
::sidl::basearray
edu::csdms::models::Aquatellus_impl::get_value_set_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus.get_value_set_data)
  // Insert-Code-Here {edu.csdms.models.Aquatellus.get_value_set_data} (get_value_set_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Aquatellus.get_value_set_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Aquatellus.get_value_set_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus.get_value_set_data)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._misc)
// Insert-Code-Here {edu.csdms.models.Aquatellus._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._misc)

