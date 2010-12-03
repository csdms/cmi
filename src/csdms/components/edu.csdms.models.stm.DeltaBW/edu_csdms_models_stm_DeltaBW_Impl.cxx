// 
// File:          edu_csdms_models_stm_DeltaBW_Impl.cxx
// Symbol:        edu.csdms.models.stm.DeltaBW-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.stm.DeltaBW
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "edu_csdms_models_stm_DeltaBW_Impl.hxx"

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
// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaBW._includes:prolog} (additional includes or code)
#include <fstream>
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaBW._includes)

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


  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaBW._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaBW._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
edu::csdms::models::stm::DeltaBW_impl::DeltaBW_impl() : StubBase(
  reinterpret_cast< void*>(::edu::csdms::models::stm::DeltaBW::_wrapObj(
  reinterpret_cast< void*>(this))),false) , _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW._ctor2)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW._ctor2)
}

// user defined constructor
void edu::csdms::models::stm::DeltaBW_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW._ctor)
    
  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaBW._ctor:prolog} (constructor method) 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaBW._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR edu.csdms.models.stm.DeltaBW: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaBW._ctor)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaBW._ctor:epilog} (constructor method)

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW._ctor)
}

// user defined destructor
void edu::csdms::models::stm::DeltaBW_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW._dtor)
  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaBW._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaBW._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR edu.csdms.models.stm.DeltaBW: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaBW._dtor) 

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW._dtor)
}

// static class initializer
void edu::csdms::models::stm::DeltaBW_impl::_load() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW._load)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 * Method:  boccaSetServices[]
 */
void
edu::csdms::models::stm::DeltaBW_impl::boccaSetServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.boccaSetServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaBW.boccaSetServices)

  gov::cca::TypeMap typeMap;
  gov::cca::Port    port;

  this->d_services = services;

  typeMap = this->d_services.createTypeMap();

  port = ::babel_cast< gov::cca::Port>(*this);
  if (port._is_nil()) {
    BOCCA_THROW_CXX( ::sidl::SIDLException , 
                     "edu.csdms.models.stm.DeltaBW: Error casting self to gov::cca::Port");
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
        "edu.csdms.models.stm.DeltaBW: Error calling addProvidesPort(port,"
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
       "edu.csdms.models.stm.DeltaBW: Error calling registerUsesPort(\"ppf\", "
       "\"gov.cca.ports.ParameterPortFactory\", typeMap) ", -2);
    throw;
  }


  gov::cca::ComponentRelease cr = 
        ::babel_cast< gov::cca::ComponentRelease>(*this);
  this->d_services.registerForRelease(cr);
  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaBW.boccaSetServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.boccaSetServices)
}

/**
 * Method:  boccaReleaseServices[]
 */
void
edu::csdms::models::stm::DeltaBW_impl::boccaReleaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.boccaReleaseServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaBW.boccaReleaseServices)
  this->d_services=0;


  // Un-provide edu.csdms.ports.IRFPort port with port name Model 
  try{
    services.removeProvidesPort("Model");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.DeltaBW: Error calling removeProvidesPort("
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
    std::cerr << "edu.csdms.models.stm.DeltaBW: Error calling unregisterUsesPort("
              << "\"ppf\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaBW.boccaReleaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.boccaReleaseServices)
}

/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::stm::DeltaBW_impl::boccaForceUsePortInclude_impl (
  /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
  /* in */::edu::csdms::openmi::ValueSet& dummy1,
  /* in */::edu::csdms::tools::TemplateFiles& dummy2,
  /* in */::edu::csdms::openmi::ScalarSet& dummy3,
  /* in */::edu::csdms::tools::ConfigDialog& dummy4,
  /* in */::edu::csdms::openmi::IScalarSet& dummy5 ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaBW.boccaForceUsePortInclude)
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;

  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaBW.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.boccaForceUsePortInclude)
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
edu::csdms::models::stm::DeltaBW_impl::setServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.setServices)

  // Insert-UserCode-Here{edu.csdms.models.stm.DeltaBW.setServices:prolog}

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaBW.setServices)
     boccaSetServices(services); 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaBW.setServices)
  
  // Insert-UserCode-Here{edu.csdms.models.stm.DeltaBW.setServices:epilog}
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

  ppf.initParameterData(userinput, "Configure");
  ppf.setBatchTitle(userinput, "Parameters");
  //ppf.addRequestString(userinput, "Input", "Path to input files", "Input directory", "/data/sims/stm/1DDeltaBW/test.txt");

  {
    ::edu::csdms::tools::ConfigDialog dialog =
      ::edu::csdms::tools::ConfigDialog::_create ();

    dialog.read ("STM_1DDeltaBW.xml");
    dialog.construct (ppf, this->userinput);
  }

  ppf.addParameterPort(this->userinput, services);
  services.releasePort("ppf");
/*
  ppf.addRequestDouble(userinput, "q", "Flood Discharge [m^2/s]", "q", 6, 0, 1.0e12);
  ppf.addRequestInt   (userinput, "I", "Intermittency", "I", 1, 0, 100000);
  ppf.addRequestDouble(userinput, "Q", "Upstream bed material sediment feed rate during floods [m^2/s]", "Q", 0.001, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "D", "Grain size of bed material [mm]", "D", 0.5, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "C", "Chezy resistance coefficient", "C", 15, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "n", "Exponent in the load relation", "n", 2.5, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "T", "Critical Shields stress in load relation", "T", 0, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "E", "Elevation of top of the foreset [m]", "E", 3, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "e", "Initial elevation of bottom of the foreset [m]", "e", 0, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "x", "Water surface elevation of the lake [m]", "x", 8.5, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "f", "Initial fluvial bedslope", "f", 0.00025, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "b", "Subaqueous basement slope", "b", 0, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "s", "Initial length of the fluvial zone [m]", "s", 10000, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "m", "Maximum length of the fluvial zone [m]", "m", 500000, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "S", "Slope of foreset face", "S", 0.2, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "R", "Submerged specific gravity of sediment", "R", 1.65, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "L", "Bed porosity", "L", 0.4, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "k", "Coefficient in Manning-Strickler relation (ks = n * D90)", "k", 0.3, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "r", "Coefficient in Manning-Strickler relation (alpha,r)", "r", 8.1, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "a", "Coefficient in total bed material load relation", "a", 7.2, 0, 1.0e12);
  ppf.addRequestInt   (userinput, "M", "Number of fluvial nodes", "M", 20, 0, 100000);
  ppf.addRequestDouble(userinput, "t", "Time step [days]", "t", 0.182625, 0, 1.0e12);
  ppf.addRequestInt   (userinput, "p", "Number of printouts after initial one", "p", 6, 0, 100000);
  ppf.addRequestInt   (userinput, "i", "Iterations per each printout", "i", 5000, 0, 1000000);

  ppf.addRequestInt(userinput, "ChezyOrManning", "Chezy or Manning", "Chezy-1 or Manning-2", 1,1,2);
  ppf.addRequestString(userinput, "Output", "Path to output files", "Output directory", "/data/sims/stm/1DDeltaBW/result.txt");
  ppf.addParameterPort(userinput, services);
  services.releasePort("ppf");
*/

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.setServices)
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
edu::csdms::models::stm::DeltaBW_impl::releaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.releaseServices)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaBW.releaseServices} 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaBW.releaseServices)
     boccaReleaseServices(services);
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaBW.releaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.releaseServices)
}

/**
 * Method:  initialize[]
 */
void
edu::csdms::models::stm::DeltaBW_impl::initialize_impl (
  /* in array<string> */::sidl::array< ::std::string>& properties ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.initialize)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.initialize} (initialize method)
  const int ChezyOrManning = 1;
  //std::string input = userinput.getString("Input","");

/*
  double input_q =  userinput.getDouble("q",0);
  int    input_I =  userinput.getInt   ("I",0);
  double input_Q =  userinput.getDouble("Q",0);
  double input_D =  userinput.getDouble("D",0);
  double input_C =  userinput.getDouble("C",0);
  double input_n =  userinput.getDouble("n",0);
  double input_T =  userinput.getDouble("T",0);
  double input_E =  userinput.getDouble("E",0);
  double input_e =  userinput.getDouble("e",0);
  double input_x =  userinput.getDouble("x",0);
  double input_f =  userinput.getDouble("f",0);
  double input_b =  userinput.getDouble("b",0);
  double input_s =  userinput.getDouble("s",0);
  double input_m =  userinput.getDouble("m",0);
  double input_S =  userinput.getDouble("S",0);
  double input_R =  userinput.getDouble("R",0);
  double input_L =  userinput.getDouble("L",0);
  double input_k =  userinput.getDouble("k",0);
  double input_r =  userinput.getDouble("r",0);
  double input_a =  userinput.getDouble("a",0);
  int    input_M =  userinput.getInt   ("M",0);
  double input_t =  userinput.getDouble("t",0);
  int    input_p =  userinput.getInt   ("p",0);
  int    input_i =  userinput.getInt   ("i",0);

  int ChezyOrManning = userinput.getInt("ChezyOrManning",1);

  std::string input("/data/sims/stm/1DDeltaBW/test.txt");
  std::ofstream outfs(input.c_str(), std::fstream::out);
  if (!outfs) {
    std::cout << "In DeltaBW ofstream error: " << input << std::endl;
    return;
  }

  outfs << "q " << input_q << std::endl;
  outfs << "I " << input_I << std::endl;
  outfs << "Q " << input_Q << std::endl;
  outfs << "D " << input_D << std::endl;
  outfs << "C " << input_C << std::endl;
  outfs << "n " << input_n << std::endl;
  outfs << "T " << input_T << std::endl;
  outfs << "E " << input_E << std::endl;
  outfs << "e " << input_e << std::endl;
  outfs << "x " << input_x << std::endl;
  outfs << "f " << input_f << std::endl;
  outfs << "b " << input_b << std::endl;
  outfs << "s " << input_s << std::endl;
  outfs << "m " << input_m << std::endl;
  outfs << "S " << input_S << std::endl;
  outfs << "R " << input_R << std::endl;
  outfs << "L " << input_L << std::endl;
  outfs << "k " << input_k << std::endl;
  outfs << "r " << input_r << std::endl;
  outfs << "a " << input_a << std::endl;
  outfs << "M " << input_M << std::endl;
  outfs << "t " << input_t << std::endl;
  outfs << "p " << input_p << std::endl;
  outfs << "i " << input_i << std::endl;

  outfs.close();
*/
  std::string input;

  {
    std::string input_dir = userinput.getString (
                              "/STM/1DDeltaBW/Input/Dir", "");
    std::string site_prefix = userinput.getString (
                                "/STM/1DDeltaBW/SitePrefix", "");
    std::string case_prefix = userinput.getString (
                                "/STM/1DDeltaBW/CasePrefix", "");
    std::string in_file = site_prefix + "_" + case_prefix + ".txt";
    char* work_dir = (char*)malloc (2048*sizeof (char));
    getcwd (work_dir, 2048);

    if (input_dir.compare (0,3,"GUI")==0)
    {
      ::edu::csdms::tools::TemplateFiles tmpls;
      std::string to_file;
  
      tmpls = ::edu::csdms::tools::TemplateFiles::_create ();
  
      tmpls.add_file ("STM_1DDeltaBW.txt.in", in_file);
 
      tmpls.substitute (userinput, "/STM/1DDeltaBW/Input/Var/", work_dir);
        
    } 
    else
    {
        in_file = input_dir + "/" + in_file;

        //in_file = g_build_filename (input_dir.c_str (),
        //                            in_file.c_str (), NULL);
    }                             

    input = in_file;

    fprintf (stderr, "#DeltaBW: Run directory: %s\n", work_dir);
    fprintf (stderr, "#DeltaBW: Input file: %s\n", input.c_str ());

    free (work_dir);
  }



    check=0; M=0; prints=0; iterates=0; formulation=0; bombed=0; k=0; m=0;
    qw=0; I=0; qtf=0; D=0; Cz=0; nt=0; tsc=0; etasl=0; etabl=0; Sfi=0; Sb=0;
    Sa=0; ssfi=0; R=0; lamdap=0; ks=0; alphat=0; alphar=0; dt=0; dxbar=0;
    Cf=0; sfmax=0; ksid=0; Volinit=0; abase=0; etasdot=0; etatop=0; etabot=0;
    sss=0; sbb=0; tsn=0; Sn=0; Hn=0; Frn=0; __time=0; ssdot=0; sbdot=0; Volfed=0;
    Volfin=0; ervol=0;

  check = Initialize(xfbar, xfluv, etafluv, x, eta, &qw, &I, &qtf, &D, &Cz, &nt,
                &tsc, &etasl, &etabl, &Sfi, &Sb, &Sa, &ssfi, &R, &lamdap, &ks,
                &alphat, &alphar, &dt, &dxbar, &Cf, &sfmax, &ksid, &Volinit, &abase,
                &etasdot, &etabot, &etatop, &sss, &sbb, &tsn, &Sn, &Hn, &Frn, &M, &prints,
			 &iterates, &formulation, const_cast<char*> (input.c_str()), ChezyOrManning);


  if ( (printmatrix = (double (*)[102]) malloc( (prints+3) * sizeof(double [102]) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (Slmatrix    = (double (*)[102]) malloc( (prints+3) * sizeof(double [102]) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (qbmatrix    = (double (*)[102]) malloc( (prints+3) * sizeof(double [102]) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (taumatrix   = (double (*)[102]) malloc( (prints+3) * sizeof(double [102]) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (Hmatrix     = (double (*)[102]) malloc( (prints+3) * sizeof(double [102]) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (xmatrix     = (double (*)[102]) malloc( (prints+3) * sizeof(double [102]) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }

    SaveDatatoMatrix(printmatrix, Slmatrix, qbmatrix, Hmatrix, taumatrix, xmatrix,
        eta, Sl, qb, H, tau, x, sssvector, sbbvector, __time, sss, sbb, dxbar, ksid, k, M);

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.initialize)
}

/**
 * Method:  run[]
 */
void
edu::csdms::models::stm::DeltaBW_impl::run_impl (
  /* in */double time ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.run)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.run} (run method)
  
    for (k=1; k <= prints; k++) {
        for (m=1; m <= iterates; m++) {
            Run (H, etafluv, tau, qb, x, eta, xfluv, xfbar, Cz, dxbar, Hn, qw,
                 R, D, tsc, alphat, nt, dt, qtf, I, Sa, Sb, lamdap, ksid, sfmax,
                 __time, ks, alphar, &etasdot, &etatop, &ssdot, &sbb, &sss,
                 &sbdot, &etabot, &bombed, M, formulation);
            if (bombed == 1)
                break;
            __time += dt;
        }
        SaveDatatoMatrix (printmatrix, Slmatrix, qbmatrix, Hmatrix, taumatrix,
                          xmatrix, eta, Sl, qb, H, tau, x, sssvector,
                          sbbvector, __time, sss, sbb, dxbar, ksid, k, M);
        if (bombed == 1)
            break;
    }

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.run)
}

/**
 * Method:  finalize[]
 */
void
edu::csdms::models::stm::DeltaBW_impl::finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.finalize)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.finalize} (finalize method)
   
  //std::string output = userinput.getString("Output","");
  std::string site_prefix = userinput.getString (
                              "/STM/1DDeltaBW/SitePrefix", "");
  std::string case_prefix = userinput.getString (
                              "/STM/1DDeltaBW/CasePrefix", "");
  std::string output = site_prefix + "_" + case_prefix + ".out";

  fprintf (stderr, "#DeltaBW: Output file: %s\n", output.c_str ());

  Finalize (printmatrix, xmatrix, Slmatrix, qbmatrix, Hmatrix, taumatrix,
            sssvector, sbbvector, x, eta, Volinit, Volfin, Volfed, ervol, dt,
            qtf, lamdap, Sb, abase, prints, M, iterates,
            const_cast<char*> (output.c_str()));

  free(printmatrix);
  free(Slmatrix);
  free(qbmatrix);
  free(taumatrix);
  free(Hmatrix);
  free(xmatrix);
  
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.finalize)
}

/**
 * Method:  getRaster_nx[]
 */
int64_t
edu::csdms::models::stm::DeltaBW_impl::getRaster_nx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_nx)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_nx} (getRaster_nx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_nx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_nx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_nx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_nx)
}

/**
 * Method:  getRaster_ny[]
 */
int64_t
edu::csdms::models::stm::DeltaBW_impl::getRaster_ny_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_ny)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_ny} (getRaster_ny method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_ny)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ny");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_ny)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_ny)
}

/**
 * Method:  getRaster_dx[]
 */
double
edu::csdms::models::stm::DeltaBW_impl::getRaster_dx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_dx)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_dx} (getRaster_dx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_dx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_dx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_dx)
}

/**
 * Method:  getRaster_dy[]
 */
double
edu::csdms::models::stm::DeltaBW_impl::getRaster_dy_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_dy)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_dy} (getRaster_dy method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_dy)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dy");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_dy)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_dy)
}

/**
 * Method:  getRaster_ulx[]
 */
double
edu::csdms::models::stm::DeltaBW_impl::getRaster_ulx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_ulx)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_ulx} (getRaster_ulx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_ulx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ulx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_ulx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_ulx)
}

/**
 * Method:  getRaster_uly[]
 */
double
edu::csdms::models::stm::DeltaBW_impl::getRaster_uly_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_uly)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_uly} (getRaster_uly method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_uly)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_uly");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_uly)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_uly)
}

/**
 * Method:  getRaster_grid[]
 */
::sidl::array<double>
edu::csdms::models::stm::DeltaBW_impl::getRaster_grid_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.getRaster_grid)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.getRaster_grid} (getRaster_grid method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.getRaster_grid)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_grid");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.getRaster_grid)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.getRaster_grid)
}

/**
 * Method:  get_raster_dimen[]
 */
::sidl::array<int32_t>
edu::csdms::models::stm::DeltaBW_impl::get_raster_dimen_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_raster_dimen)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_raster_dimen} (get_raster_dimen method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_raster_dimen)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_dimen");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_raster_dimen)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_raster_dimen)
}

/**
 * Method:  get_raster_res[]
 */
::sidl::array<double>
edu::csdms::models::stm::DeltaBW_impl::get_raster_res_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_raster_res)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_raster_res} (get_raster_res method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_raster_res)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_res");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_raster_res)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_raster_res)
}

/**
 * Method:  get_raster_data[]
 */
::sidl::basearray
edu::csdms::models::stm::DeltaBW_impl::get_raster_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_raster_data)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_raster_data} (get_raster_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_raster_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_raster_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_raster_data)
}

/**
 * Method:  get_time_span[]
 */
::sidl::array<double>
edu::csdms::models::stm::DeltaBW_impl::get_time_span_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_time_span)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_time_span} (get_time_span method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_time_span)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_time_span");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_time_span)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_time_span)
}

/**
 * Method:  get_element_set[]
 */
::edu::csdms::openmi::IElementSet
edu::csdms::models::stm::DeltaBW_impl::get_element_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_element_set)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_element_set} (get_element_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_element_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_element_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_element_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_element_set)
}

/**
 * Method:  get_value_set[]
 */
::edu::csdms::openmi::IValueSet
edu::csdms::models::stm::DeltaBW_impl::get_value_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_value_set)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_value_set} (get_value_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_value_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_value_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_value_set)
}

/**
 * Method:  get_value_set_data[]
 */
::sidl::basearray
edu::csdms::models::stm::DeltaBW_impl::get_value_set_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.get_value_set_data)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.get_value_set_data} (get_value_set_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.get_value_set_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.get_value_set_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.get_value_set_data)
}

/**
 * Method:  set_value_set[]
 */
void
edu::csdms::models::stm::DeltaBW_impl::set_value_set_impl (
  /* in */const ::std::string& val_string,
  /* in */::edu::csdms::openmi::IValueSet& values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW.set_value_set)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaBW.set_value_set} (set_value_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaBW.set_value_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_value_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaBW.set_value_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW.set_value_set)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaBW._misc)
// Insert-Code-Here {edu.csdms.models.stm.DeltaBW._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaBW._misc)

