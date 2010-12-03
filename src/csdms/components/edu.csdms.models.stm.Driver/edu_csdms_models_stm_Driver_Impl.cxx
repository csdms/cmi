// 
// File:          edu_csdms_models_stm_Driver_Impl.cxx
// Symbol:        edu.csdms.models.stm.Driver-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.stm.Driver
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "edu_csdms_models_stm_Driver_Impl.hxx"

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
#ifndef included_edu_csdms_ports_IRFPort_hxx
#include "edu_csdms_ports_IRFPort.hxx"
#endif
#ifndef included_edu_csdms_tools_ConfigDialog_hxx
#include "edu_csdms_tools_ConfigDialog.hxx"
#endif
#ifndef included_edu_csdms_tools_TemplateFiles_hxx
#include "edu_csdms_tools_TemplateFiles.hxx"
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
// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.Driver._includes:prolog} (additional includes or code)

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.Driver._includes)

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


  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.Driver._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.Driver._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
edu::csdms::models::stm::Driver_impl::Driver_impl() : StubBase(
  reinterpret_cast< void*>(::edu::csdms::models::stm::Driver::_wrapObj(
  reinterpret_cast< void*>(this))),false) , _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._ctor2)
  // Insert-Code-Here {edu.csdms.models.stm.Driver._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._ctor2)
}

// user defined constructor
void edu::csdms::models::stm::Driver_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._ctor)
    
  // Insert-UserCode-Here {edu.csdms.models.stm.Driver._ctor:prolog} (constructor method) 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.Driver._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR edu.csdms.models.stm.Driver: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.Driver._ctor)

  // Insert-UserCode-Here {edu.csdms.models.stm.Driver._ctor:epilog} (constructor method)

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._ctor)
}

// user defined destructor
void edu::csdms::models::stm::Driver_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._dtor)
  // Insert-UserCode-Here {edu.csdms.models.stm.Driver._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.Driver._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR edu.csdms.models.stm.Driver: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.Driver._dtor) 

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._dtor)
}

// static class initializer
void edu::csdms::models::stm::Driver_impl::_load() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._load)
  // Insert-Code-Here {edu.csdms.models.stm.Driver._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 * Method:  boccaSetServices[]
 */
void
edu::csdms::models::stm::Driver_impl::boccaSetServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver.boccaSetServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.Driver.boccaSetServices)

  gov::cca::TypeMap typeMap;
  gov::cca::Port    port;

  this->d_services = services;

  typeMap = this->d_services.createTypeMap();

  port = ::babel_cast< gov::cca::Port>(*this);
  if (port._is_nil()) {
    BOCCA_THROW_CXX( ::sidl::SIDLException , 
                     "edu.csdms.models.stm.Driver: Error casting self to gov::cca::Port");
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
        "edu.csdms.models.stm.Driver: Error calling addProvidesPort(port,"
        "\"Run\", \"gov.cca.ports.GoPort\", typeMap) ", -2);
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
       "edu.csdms.models.stm.Driver: Error calling registerUsesPort(\"ppf\", "
       "\"gov.cca.ports.ParameterPortFactory\", typeMap) ", -2);
    throw;
  }

  // Use a edu.csdms.ports.IRFPort port with port name Model 
  try{
    this->d_services.registerUsesPort(
                   "Model", // port instance name
                   "edu.csdms.ports.IRFPort",     // full sidl type of port
                    typeMap);         // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex,
       "edu.csdms.models.stm.Driver: Error calling registerUsesPort(\"Model\", "
       "\"edu.csdms.ports.IRFPort\", typeMap) ", -2);
    throw;
  }


  gov::cca::ComponentRelease cr = 
        ::babel_cast< gov::cca::ComponentRelease>(*this);
  this->d_services.registerForRelease(cr);
  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.Driver.boccaSetServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver.boccaSetServices)
}

/**
 * Method:  boccaReleaseServices[]
 */
void
edu::csdms::models::stm::Driver_impl::boccaReleaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver.boccaReleaseServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.Driver.boccaReleaseServices)
  this->d_services=0;


  // Un-provide gov.cca.ports.GoPort port with port name Run 
  try{
    services.removeProvidesPort("Run");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.Driver: Error calling removeProvidesPort("
              << "\"Run\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  try{
    services.unregisterUsesPort("ppf");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.Driver: Error calling unregisterUsesPort("
              << "\"ppf\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Release edu.csdms.ports.IRFPort port with port name Model 
  try{
    services.unregisterUsesPort("Model");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.Driver: Error calling unregisterUsesPort("
              << "\"Model\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.Driver.boccaReleaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver.boccaReleaseServices)
}

/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::stm::Driver_impl::boccaForceUsePortInclude_impl (
  /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
  /* in */::edu::csdms::ports::IRFPort& dummy1,
  /* in */::edu::csdms::openmi::ValueSet& dummy2,
  /* in */::edu::csdms::tools::TemplateFiles& dummy3,
  /* in */::edu::csdms::openmi::ScalarSet& dummy4,
  /* in */::edu::csdms::tools::ConfigDialog& dummy5,
  /* in */::edu::csdms::openmi::IScalarSet& dummy6 ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.Driver.boccaForceUsePortInclude)
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;
    (void)dummy6;

  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.Driver.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver.boccaForceUsePortInclude)
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
edu::csdms::models::stm::Driver_impl::setServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver.setServices)

  // Insert-UserCode-Here{edu.csdms.models.stm.Driver.setServices:prolog}

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.Driver.setServices)
     boccaSetServices(services); 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.Driver.setServices)
  
  // Insert-UserCode-Here{edu.csdms.models.stm.Driver.setServices:epilog}

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver.setServices)
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
edu::csdms::models::stm::Driver_impl::releaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver.releaseServices)

  // Insert-UserCode-Here {edu.csdms.models.stm.Driver.releaseServices} 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.Driver.releaseServices)
     boccaReleaseServices(services);
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.Driver.releaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver.releaseServices)
}

/**
 *  
 * Execute some encapsulated functionality on the component. 
 * Return 0 if ok, -1 if internal error but component may be 
 * used further, and -2 if error so severe that component cannot
 * be further used safely.
 */
int32_t
edu::csdms::models::stm::Driver_impl::go_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver.go)
  // Insert-Code-Here {edu.csdms.models.stm.Driver.go} (go method)
  gov::cca::Port port;
  edu::csdms::ports::IRFPort model;

  try {
    port = d_services.getPort("Model");
  } catch ( ::gov::cca::CCAException ex) {

    std::cerr << "Driver: Error calling getPort(\"model\")" << std::endl;
    try{
      d_services.releasePort("model");
    } catch ( ::gov::cca::CCAException ex )  {
      std::cerr << "Driver: Error calling releasePort(\"model\")" << std::endl;
    }
  }

  if ( port._not_nil() ) {
    model = ::babel_cast< edu::csdms::ports::IRFPort >(port);
    if (model._is_nil())
      std::cerr << "Driver: Error casting gov::cca::Port" << std::endl;
  }

  //std::cout << "now start initializing ..." << std::endl; std::cout.flush();
  {
    ::sidl::array< ::std::string> properties =
      sidl::array< ::std::string>::create1d(1);

    model.initialize (properties);
  }
  
  model.run (-1);

  model.finalize ();

  d_services.releasePort("Model");
  return 0;

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver.go)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._misc)
// Insert-Code-Here {edu.csdms.models.stm.Driver._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._misc)

