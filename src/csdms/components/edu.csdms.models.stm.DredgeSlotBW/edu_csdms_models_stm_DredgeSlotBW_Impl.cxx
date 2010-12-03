// 
// File:          edu_csdms_models_stm_DredgeSlotBW_Impl.cxx
// Symbol:        edu.csdms.models.stm.DredgeSlotBW-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.stm.DredgeSlotBW
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "edu_csdms_models_stm_DredgeSlotBW_Impl.hxx"

// 
// Includes for all method dependencies.
// 
#ifndef included_edu_csdms_openmi_IElementSet_hxx
#include "edu_csdms_openmi_IElementSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_IScalarSet_hxx
#include "edu_csdms_openmi_IScalarSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_hxx
#include "edu_csdms_openmi_IValueSet.hxx"
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
// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.DredgeSlotBW._includes:prolog} (additional includes or code)

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DredgeSlotBW._includes)

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


  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DredgeSlotBW._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.DredgeSlotBW._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
edu::csdms::models::stm::DredgeSlotBW_impl::DredgeSlotBW_impl() : StubBase(
  reinterpret_cast< void*>(::edu::csdms::models::stm::DredgeSlotBW::_wrapObj(
  reinterpret_cast< void*>(this))),false) , _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW._ctor2)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW._ctor2)
}

// user defined constructor
void edu::csdms::models::stm::DredgeSlotBW_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW._ctor)
    
  // Insert-UserCode-Here {edu.csdms.models.stm.DredgeSlotBW._ctor:prolog} (constructor method) 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DredgeSlotBW._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR edu.csdms.models.stm.DredgeSlotBW: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DredgeSlotBW._ctor)

  // Insert-UserCode-Here {edu.csdms.models.stm.DredgeSlotBW._ctor:epilog} (constructor method)

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW._ctor)
}

// user defined destructor
void edu::csdms::models::stm::DredgeSlotBW_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW._dtor)
  // Insert-UserCode-Here {edu.csdms.models.stm.DredgeSlotBW._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DredgeSlotBW._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR edu.csdms.models.stm.DredgeSlotBW: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DredgeSlotBW._dtor) 

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW._dtor)
}

// static class initializer
void edu::csdms::models::stm::DredgeSlotBW_impl::_load() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW._load)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 * Method:  boccaSetServices[]
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::boccaSetServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.boccaSetServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DredgeSlotBW.boccaSetServices)

  gov::cca::TypeMap typeMap;
  gov::cca::Port    port;

  this->d_services = services;

  typeMap = this->d_services.createTypeMap();

  port = ::babel_cast< gov::cca::Port>(*this);
  if (port._is_nil()) {
    BOCCA_THROW_CXX( ::sidl::SIDLException , 
                     "edu.csdms.models.stm.DredgeSlotBW: Error casting self to gov::cca::Port");
  } 


  // Provide a edu.csdms.ports.IRFPort port with port name Model 
  try{
    this->d_services.addProvidesPort(
                   port,              // implementing object
                   "Model", // port instance name
                   "edu.csdms.ports.IRFPort",     // full sidl type of port
                   typeMap);          // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex, 
        "edu.csdms.models.stm.DredgeSlotBW: Error calling addProvidesPort(port,"
        "\"Model\", \"edu.csdms.ports.IRFPort\", typeMap) ", -2);
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
       "edu.csdms.models.stm.DredgeSlotBW: Error calling registerUsesPort(\"ppf\", "
       "\"gov.cca.ports.ParameterPortFactory\", typeMap) ", -2);
    throw;
  }


  gov::cca::ComponentRelease cr = 
        ::babel_cast< gov::cca::ComponentRelease>(*this);
  this->d_services.registerForRelease(cr);
  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DredgeSlotBW.boccaSetServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.boccaSetServices)
}

/**
 * Method:  boccaReleaseServices[]
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::boccaReleaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.boccaReleaseServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DredgeSlotBW.boccaReleaseServices)
  this->d_services=0;


  // Un-provide edu.csdms.ports.IRFPort port with port name Model 
  try{
    services.removeProvidesPort("Model");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.DredgeSlotBW: Error calling removeProvidesPort("
              << "\"Model\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  try{
    services.unregisterUsesPort("ppf");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.DredgeSlotBW: Error calling unregisterUsesPort("
              << "\"ppf\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DredgeSlotBW.boccaReleaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.boccaReleaseServices)
}

/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::boccaForceUsePortInclude_impl (
  /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
  /* in */::edu::csdms::openmi::ValueSet& dummy1,
  /* in */::edu::csdms::tools::TemplateFiles& dummy2,
  /* in */::edu::csdms::openmi::ScalarSet& dummy3,
  /* in */::edu::csdms::tools::ConfigDialog& dummy4,
  /* in */::edu::csdms::openmi::IScalarSet& dummy5 ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DredgeSlotBW.boccaForceUsePortInclude)
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;

  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DredgeSlotBW.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.boccaForceUsePortInclude)
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
edu::csdms::models::stm::DredgeSlotBW_impl::setServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.setServices)

  // Insert-UserCode-Here{edu.csdms.models.stm.DredgeSlotBW.setServices:prolog}

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DredgeSlotBW.setServices)
     boccaSetServices(services); 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DredgeSlotBW.setServices)
  
  // Insert-UserCode-Here{edu.csdms.models.stm.DredgeSlotBW.setServices:epilog}
userinput = services.createTypeMap();
::gov::cca::Port gcp = services.getPort("ppf");

if (gcp._is_nil()) {
  BOCCA_THROW_CXX(sidl::SIDLException, "ParameterPortFactory not provided by framework");
}
::gov::cca::ports::ParameterPortFactory ppf;
ppf = ::babel_cast< gov::cca::ports::ParameterPortFactory >(gcp);
if (ppf._is_nil()) {
  BOCCA_THROW_CXX(sidl::SIDLException, "Bogus ParameterPortFactory provided");
}

ppf.initParameterData(userinput, "userinput");
ppf.setBatchTitle(userinput, "parameters");
ppf.addRequestString(userinput, "Input", "Path to input files", "Input directory", "/data/sims/stm/DredgeSlotBW/test.txt");
ppf.addRequestString(userinput, "Output", "Path to output files", "Output directory", "/data/sims/stm/DredgeSlotBW/result.txt");
ppf.addParameterPort(userinput, services);
services.releasePort("ppf");
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.setServices)
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
edu::csdms::models::stm::DredgeSlotBW_impl::releaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.releaseServices)

  // Insert-UserCode-Here {edu.csdms.models.stm.DredgeSlotBW.releaseServices} 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DredgeSlotBW.releaseServices)
     boccaReleaseServices(services);
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DredgeSlotBW.releaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.releaseServices)
}

/**
 * Method:  initialize[]
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::initialize_impl (
  /* in array<string> */::sidl::array< ::std::string>& properties ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.initialize)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.initialize} (initialize method)
    check=0; M=0; prints=0; iterates=0; k=0; m=0;
    Qww=0; I=0; B=0; D50=0; D90=0; R=0; S=0; lamdap=0; L=0; Hslot=0; ru=0; rd=0;
    au=0; dt=0; qw=0; dx=0; Rep=0; vs=0; dzeta=0; Hnorm=0; Hsnorm=0; Gbnorm=0;
    Gsnorm=0; ustarr=0; Hr=0; qsint=0; ksid=0; qbf=0; qsf=0; Cnorm=0; MassIn=0;
    MassStored=0; MassOut=0; FracDisc=0; time=0;

  std::string input = userinput.getString("Input","");

    check = Initialize(zeta, x, eta, ksi, H, Sf, Hs, &Qww, &I, &B, &D50, &D90, &R,
                &S, &lamdap, &L, &Hslot, &ru, &rd, &au, &dt, &qw, &dx, &Rep, &vs, &dzeta,
                &Hnorm, &Hsnorm, &Gbnorm, &Gsnorm, &ustarr, &Hr, &qsint, &ksid, &qbf,
                &qsf, &Cnorm, &MassIn, &MassStored, &MassOut, &FracDisc, &M, &iterates,
		       &prints, input.c_str());

  if ( (printmatrix = (double (*)[2002]) malloc( (prints+2) * sizeof(double [2002])  ) ) == NULL) {
      fprintf(stderr, "malloc error"); exit(0);
  }
  if ( (Hmatrix =  (double (*)[2002])  malloc( (prints+2) * sizeof(double [2002])  ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit(0);
  }
  if ( (ksimatrix =   (double (*)[2002]) malloc( (prints+2) * sizeof(double [2002])  ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit(0);
  }
  if ( (qsmatrix =   (double (*)[2002]) malloc( (prints+2) * sizeof(double [2002])  ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit(0);
  }
  if ( (qbmatrix =   (double (*)[2002]) malloc( (prints+2) * sizeof(double [2002])  ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit(0);
  }
  if ( (Hsmatrix =   (double (*)[2002]) malloc( (prints+2) * sizeof(double [2002])  ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit(0);
  }


    SaveDatatoMatrix(printmatrix, Hmatrix, ksimatrix, qbmatrix, qsmatrix,
        Hsmatrix, eta, H, ksi, qb, qs, Hs, time, k, M);

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.initialize)
}

/**
 * Method:  run[]
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::run_impl (
  /* in */double time ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.run)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.run} (run method)
    for (k=1; k <= prints; k++) {
        for (m=1; m <= iterates; m++) {
            check = Run(qb, Hs, Sf, qs, H, Ent, zeta, eta, ksi, &ustarr, &Hr, &qsint,
                        &MassIn, &MassOut, &MassStored, &FracDisc, D50, R, vs, Rep,
                        qw, dzeta, qbf, qsf, au, dt, I, lamdap, dx, B, ksid, D90, M);
            if (check == 1) 
                return ;
            time += dt;
        }
        SaveDatatoMatrix(printmatrix, Hmatrix, ksimatrix, qbmatrix, qsmatrix,
            Hsmatrix, eta, H, ksi, qb, qs, Hs, time, k, M);
    }

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.run)
}

/**
 * Method:  finalize[]
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.finalize)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.finalize} (finalize method)

  std::string output = userinput.getString("Output","");
    Finalize(printmatrix, Hmatrix, Hsmatrix, qbmatrix, qsmatrix, ksimatrix, x, Hnorm,
	     Hsnorm, Gbnorm, Gsnorm, Cnorm, ksid, M, prints, output.c_str());

    free(printmatrix);
    free(Hmatrix);
    free(ksimatrix);
    free(qsmatrix);
    free(qbmatrix);   
    free(Hsmatrix);
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.finalize)
}

/**
 * Method:  getRaster_nx[]
 */
int64_t
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_nx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_nx)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_nx} (getRaster_nx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_nx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_nx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_nx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_nx)
}

/**
 * Method:  getRaster_ny[]
 */
int64_t
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_ny_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_ny)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_ny} (getRaster_ny method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_ny)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ny");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_ny)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_ny)
}

/**
 * Method:  getRaster_dx[]
 */
double
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_dx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_dx)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_dx} (getRaster_dx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_dx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_dx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_dx)
}

/**
 * Method:  getRaster_dy[]
 */
double
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_dy_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_dy)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_dy} (getRaster_dy method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_dy)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dy");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_dy)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_dy)
}

/**
 * Method:  getRaster_ulx[]
 */
double
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_ulx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_ulx)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_ulx} (getRaster_ulx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_ulx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ulx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_ulx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_ulx)
}

/**
 * Method:  getRaster_uly[]
 */
double
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_uly_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_uly)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_uly} (getRaster_uly method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_uly)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_uly");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_uly)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_uly)
}

/**
 * Method:  getRaster_grid[]
 */
::sidl::array<double>
edu::csdms::models::stm::DredgeSlotBW_impl::getRaster_grid_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_grid)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.getRaster_grid} (getRaster_grid method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.getRaster_grid)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_grid");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_grid)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.getRaster_grid)
}

/**
 * Method:  get_raster_dimen[]
 */
::sidl::array<int32_t>
edu::csdms::models::stm::DredgeSlotBW_impl::get_raster_dimen_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_raster_dimen)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_raster_dimen} (get_raster_dimen method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_raster_dimen)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_dimen");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_raster_dimen)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_raster_dimen)
}

/**
 * Method:  get_raster_res[]
 */
::sidl::array<double>
edu::csdms::models::stm::DredgeSlotBW_impl::get_raster_res_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_raster_res)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_raster_res} (get_raster_res method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_raster_res)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_res");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_raster_res)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_raster_res)
}

/**
 * Method:  get_raster_data[]
 */
::sidl::basearray
edu::csdms::models::stm::DredgeSlotBW_impl::get_raster_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_raster_data)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_raster_data} (get_raster_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_raster_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_raster_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_raster_data)
}

/**
 * Method:  get_time_span[]
 */
::sidl::array<double>
edu::csdms::models::stm::DredgeSlotBW_impl::get_time_span_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_time_span)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_time_span} (get_time_span method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_time_span)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_time_span");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_time_span)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_time_span)
}

/**
 * Method:  get_element_set[]
 */
::edu::csdms::openmi::IElementSet
edu::csdms::models::stm::DredgeSlotBW_impl::get_element_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_element_set)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_element_set} (get_element_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_element_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_element_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_element_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_element_set)
}

/**
 * Method:  get_value_set[]
 */
::edu::csdms::openmi::IValueSet
edu::csdms::models::stm::DredgeSlotBW_impl::get_value_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_value_set)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_value_set} (get_value_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_value_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_value_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_value_set)
}

/**
 * Method:  get_value_set_data[]
 */
::sidl::basearray
edu::csdms::models::stm::DredgeSlotBW_impl::get_value_set_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.get_value_set_data)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.get_value_set_data} (get_value_set_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.get_value_set_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.get_value_set_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.get_value_set_data)
}

/**
 * Method:  set_value_set[]
 */
void
edu::csdms::models::stm::DredgeSlotBW_impl::set_value_set_impl (
  /* in */const ::std::string& val_string,
  /* in */::edu::csdms::openmi::IValueSet& values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW.set_value_set)
  // Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW.set_value_set} (set_value_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DredgeSlotBW.set_value_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_value_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DredgeSlotBW.set_value_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW.set_value_set)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DredgeSlotBW._misc)
// Insert-Code-Here {edu.csdms.models.stm.DredgeSlotBW._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DredgeSlotBW._misc)

