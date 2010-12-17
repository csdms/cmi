// 
// File:          edu_csdms_models_stm_DeltaNorm_Impl.cxx
// Symbol:        edu.csdms.models.stm.DeltaNorm-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.stm.DeltaNorm
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "edu_csdms_models_stm_DeltaNorm_Impl.hxx"

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
// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaNorm._includes:prolog} (additional includes or code)
#include <fstream>
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaNorm._includes)

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


  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaNorm._includes)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaNorm._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
edu::csdms::models::stm::DeltaNorm_impl::DeltaNorm_impl() : StubBase(
  reinterpret_cast< void*>(::edu::csdms::models::stm::DeltaNorm::_wrapObj(
  reinterpret_cast< void*>(this))),false) , _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm._ctor2)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm._ctor2)
}

// user defined constructor
void edu::csdms::models::stm::DeltaNorm_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm._ctor)
    
  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaNorm._ctor:prolog} (constructor method) 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaNorm._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR edu.csdms.models.stm.DeltaNorm: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaNorm._ctor)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaNorm._ctor:epilog} (constructor method)

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm._ctor)
}

// user defined destructor
void edu::csdms::models::stm::DeltaNorm_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm._dtor)
  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaNorm._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaNorm._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR edu.csdms.models.stm.DeltaNorm: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaNorm._dtor) 

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm._dtor)
}

// static class initializer
void edu::csdms::models::stm::DeltaNorm_impl::_load() {
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm._load)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 * Method:  boccaSetServices[]
 */
void
edu::csdms::models::stm::DeltaNorm_impl::boccaSetServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.boccaSetServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaNorm.boccaSetServices)

  gov::cca::TypeMap typeMap;
  gov::cca::Port    port;

  this->d_services = services;

  typeMap = this->d_services.createTypeMap();

  port = ::babel_cast< gov::cca::Port>(*this);
  if (port._is_nil()) {
    BOCCA_THROW_CXX( ::sidl::SIDLException , 
                     "edu.csdms.models.stm.DeltaNorm: Error casting self to gov::cca::Port");
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
        "edu.csdms.models.stm.DeltaNorm: Error calling addProvidesPort(port,"
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
       "edu.csdms.models.stm.DeltaNorm: Error calling registerUsesPort(\"ppf\", "
       "\"gov.cca.ports.ParameterPortFactory\", typeMap) ", -2);
    throw;
  }


  gov::cca::ComponentRelease cr = 
        ::babel_cast< gov::cca::ComponentRelease>(*this);
  this->d_services.registerForRelease(cr);
  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaNorm.boccaSetServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.boccaSetServices)
}

/**
 * Method:  boccaReleaseServices[]
 */
void
edu::csdms::models::stm::DeltaNorm_impl::boccaReleaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.boccaReleaseServices)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaNorm.boccaReleaseServices)
  this->d_services=0;


  // Un-provide edu.csdms.ports.IRFPort port with port name Model 
  try{
    services.removeProvidesPort("Model");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.stm.DeltaNorm: Error calling removeProvidesPort("
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
    std::cerr << "edu.csdms.models.stm.DeltaNorm: Error calling unregisterUsesPort("
              << "\"ppf\") at " 
              << __FILE__ << ":" << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  return;
  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaNorm.boccaReleaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.boccaReleaseServices)
}

/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
edu::csdms::models::stm::DeltaNorm_impl::boccaForceUsePortInclude_impl (
  /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
  /* in */::edu::csdms::openmi::ValueSet& dummy1,
  /* in */::edu::csdms::tools::TemplateFiles& dummy2,
  /* in */::edu::csdms::openmi::ScalarSet& dummy3,
  /* in */::edu::csdms::tools::ConfigDialog& dummy4,
  /* in */::edu::csdms::openmi::IScalarSet& dummy5 ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.DeltaNorm.boccaForceUsePortInclude)
    (void)dummy0;
    (void)dummy1;
    (void)dummy2;
    (void)dummy3;
    (void)dummy4;
    (void)dummy5;

  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.DeltaNorm.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.boccaForceUsePortInclude)
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
edu::csdms::models::stm::DeltaNorm_impl::setServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.setServices)

  // Insert-UserCode-Here{edu.csdms.models.stm.DeltaNorm.setServices:prolog}

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaNorm.setServices)
     boccaSetServices(services); 
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaNorm.setServices)
  
  // Insert-UserCode-Here{edu.csdms.models.stm.DeltaNorm.setServices:epilog}
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

  {
    ::edu::csdms::tools::ConfigDialog dialog =
      ::edu::csdms::tools::ConfigDialog::_create ();

    dialog.read ("STM_1DDeltaNorm.xml");
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
  ppf.addRequestDouble(userinput, "f", "Initial fluvial bedslope", "f", 0.00025, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "b", "Subaqueous basement slope", "b", 0, 0, 1.0e12);
  ppf.addRequestDouble(userinput, "s", "Initial length of the fluvial zone [m]", "s", 10000, 0, 1.0e12);
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
  ppf.addRequestString(userinput, "Output", "Path to output files", "Output directory", "/data/sims/stm/1DDeltaNorm/result.txt");
  ppf.addRequestInt(userinput, "ChezyOrManning", "Chezy or Manning", "Chezy-1 or Manning-2", 1,1,2);
*/
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.setServices)
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
edu::csdms::models::stm::DeltaNorm_impl::releaseServices_impl (
  /* in */::gov::cca::Services& services ) 
// throws:
//    ::gov::cca::CCAException
//    ::sidl::RuntimeException
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.releaseServices)

  // Insert-UserCode-Here {edu.csdms.models.stm.DeltaNorm.releaseServices} 

  // bocca-default-code. User may edit or delete.begin(edu.csdms.models.stm.DeltaNorm.releaseServices)
     boccaReleaseServices(services);
  // bocca-default-code. User may edit or delete.end(edu.csdms.models.stm.DeltaNorm.releaseServices)
    
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.releaseServices)
}

/**
 * Method:  initialize[]
 */
void
edu::csdms::models::stm::DeltaNorm_impl::initialize_impl (
  /* in array<string> */::sidl::array< ::std::string>& properties ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.initialize)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.initialize} (initialize method)
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
  double input_f =  userinput.getDouble("f",0);
  double input_b =  userinput.getDouble("b",0);
  double input_s =  userinput.getDouble("s",0);
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

  std::string input("/data/sims/stm/1DDeltaNorm/test.txt");
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
  outfs << "f " << input_f << std::endl;
  outfs << "b " << input_b << std::endl;
  outfs << "s " << input_s << std::endl;
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
                              "/STM/1DDeltaNorm/Input/Dir", "");
    std::string site_prefix = userinput.getString (
                                "/STM/1DDeltaNorm/SitePrefix", "");
    std::string case_prefix = userinput.getString (
                                "/STM/1DDeltaNorm/CasePrefix", "");
    std::string in_file = site_prefix + "_" + case_prefix + ".txt";
    char* work_dir = (char*)malloc (2048*sizeof (char));
    getcwd (work_dir, 2048);

    if (input_dir.compare (0,3,"GUI")==0)
    {
      ::edu::csdms::tools::TemplateFiles tmpls;
      std::string to_file;
  
      tmpls = ::edu::csdms::tools::TemplateFiles::_create ();
  
      tmpls.add_file ("STM_1DDeltaNorm.txt.in", in_file);
 
      tmpls.substitute (userinput, "/STM/1DDeltaNorm/Input/Var/", work_dir);
        
    } 
    else
    {
        in_file = input_dir + "/" + in_file;
    }                             

    input = in_file;

    fprintf (stderr, "#DeltaNorm: Run directory: %s\n", work_dir);
    fprintf (stderr, "#DeltaNorm: Input file: %s\n", input.c_str ());

    free (work_dir);
  }

    check=0; M=0; prints=0; iterates=0; formulation=0; k=0; m=0;
    qw=0; I=0; qtf=0; D=0; Cz=0; nt=0; tsc=0; etasl=0; etabl=0; Sfi=0; Sb=0;
    ssfi=0; Sa=0; R=0; lamdap=0; ks=0; alphar=0; alphat=0; dt=0; __time=0;
    dxbar=0; su=0; sss=0; sbb=0; etatop=0; etabot=0; abase=0; Volinit=0;
    etaup=0;

    check = Initialize(xfbar, x, eta, Sl, &qw, &I, &qtf, &D, &Cz, &nt, &tsc, &etasl,
                &etabl, &Sfi, &Sb, &ssfi, &Sa, &R, &lamdap, &ks, &alphat, &alphar,
                &dt, &dxbar, &su, &sss, &sbb, &etaup, &etatop, &etabot, &abase,
                &Volinit, &M, &prints, &iterates, &formulation,  const_cast<char*> (input.c_str()), ChezyOrManning);

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
  if ( (suvector    = (double *) malloc( (prints+3) * sizeof(double) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (sssvector   = (double *) malloc( (prints+3) * sizeof(double) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }
  if ( (sbbvector   = (double *) malloc( (prints+3) * sizeof(double) ) ) == NULL) {
    fprintf(stderr, "malloc error"); exit;
  }

    SaveDatatoMatrix(printmatrix, Slmatrix, qbmatrix, Hmatrix, taumatrix, xmatrix, eta, Sl,
        qb, H, tau, x, suvector, sssvector, sbbvector, __time, su, sss, sbb, k, M);

  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.initialize)
}

/**
 * Method:  run[]
 */
void
edu::csdms::models::stm::DeltaNorm_impl::run_impl (
  /* in */double time ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.run)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.run} (run method)
    for (k=1; k <= prints; k++) {
        for (m=1; m <= iterates; m++) {
            Run (Sl, eta, H, tau, qb, xfbar, x, etasl, I, lamdap, &sbb, &sss,
                 &etaup, &etatop, &etabot, Sa, Sb, dxbar, qw, Cz, ks, alphar,
                 alphat, tsc, nt, R, D, dt, qtf, su, formulation, M);
            __time += dt;
        }
        SaveDatatoMatrix (printmatrix, Slmatrix, qbmatrix, Hmatrix, taumatrix,
                          xmatrix, eta, Sl, qb, H, tau, x, suvector, sssvector,
                          sbbvector, __time, su, sss, sbb, k, M);
    }
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.run)
}

/**
 * Method:  finalize[]
 */
void
edu::csdms::models::stm::DeltaNorm_impl::finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.finalize)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.finalize} (finalize method)
  //std::string output = userinput.getString("Output","");
  std::string site_prefix = userinput.getString (
                              "/STM/1DDeltaBW/SitePrefix", "");
  std::string case_prefix = userinput.getString (
                              "/STM/1DDeltaBW/CasePrefix", "");
  std::string output = site_prefix + "_" + case_prefix + ".out";

  fprintf (stderr, "#DeltaNorm: Output file: %s\n", output.c_str ());

  Finalize (printmatrix, xmatrix, Slmatrix, qbmatrix, Hmatrix, taumatrix,
            suvector, sssvector, sbbvector, x, eta, Volinit, qtf, lamdap, dt,
            Sb, abase, iterates, prints, M, const_cast<char*> (output.c_str()));

  free(printmatrix);
  free(Slmatrix);
  free(qbmatrix);
  free(taumatrix);
  free(Hmatrix);
  free(xmatrix);
  free(suvector);
  free(sssvector);
  free(sbbvector);
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.finalize)
}

/**
 * Method:  getRaster_nx[]
 */
int64_t
edu::csdms::models::stm::DeltaNorm_impl::getRaster_nx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_nx)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_nx} (getRaster_nx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_nx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_nx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_nx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_nx)
}

/**
 * Method:  getRaster_ny[]
 */
int64_t
edu::csdms::models::stm::DeltaNorm_impl::getRaster_ny_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_ny)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_ny} (getRaster_ny method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_ny)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ny");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_ny)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_ny)
}

/**
 * Method:  getRaster_dx[]
 */
double
edu::csdms::models::stm::DeltaNorm_impl::getRaster_dx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_dx)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_dx} (getRaster_dx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_dx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_dx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_dx)
}

/**
 * Method:  getRaster_dy[]
 */
double
edu::csdms::models::stm::DeltaNorm_impl::getRaster_dy_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_dy)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_dy} (getRaster_dy method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_dy)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dy");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_dy)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_dy)
}

/**
 * Method:  getRaster_ulx[]
 */
double
edu::csdms::models::stm::DeltaNorm_impl::getRaster_ulx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_ulx)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_ulx} (getRaster_ulx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_ulx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ulx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_ulx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_ulx)
}

/**
 * Method:  getRaster_uly[]
 */
double
edu::csdms::models::stm::DeltaNorm_impl::getRaster_uly_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_uly)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_uly} (getRaster_uly method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_uly)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_uly");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_uly)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_uly)
}

/**
 * Method:  getRaster_grid[]
 */
::sidl::array<double>
edu::csdms::models::stm::DeltaNorm_impl::getRaster_grid_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.getRaster_grid)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.getRaster_grid} (getRaster_grid method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.getRaster_grid)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_grid");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.getRaster_grid)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.getRaster_grid)
}

/**
 * Method:  get_raster_dimen[]
 */
::sidl::array<int32_t>
edu::csdms::models::stm::DeltaNorm_impl::get_raster_dimen_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_raster_dimen)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_raster_dimen} (get_raster_dimen method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_raster_dimen)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_dimen");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_raster_dimen)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_raster_dimen)
}

/**
 * Method:  get_raster_res[]
 */
::sidl::array<double>
edu::csdms::models::stm::DeltaNorm_impl::get_raster_res_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_raster_res)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_raster_res} (get_raster_res method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_raster_res)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_res");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_raster_res)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_raster_res)
}

/**
 * Method:  get_raster_data[]
 */
::sidl::basearray
edu::csdms::models::stm::DeltaNorm_impl::get_raster_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_raster_data)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_raster_data} (get_raster_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_raster_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_raster_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_raster_data)
}

/**
 * Method:  get_time_span[]
 */
::sidl::array<double>
edu::csdms::models::stm::DeltaNorm_impl::get_time_span_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_time_span)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_time_span} (get_time_span method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_time_span)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_time_span");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_time_span)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_time_span)
}

/**
 * Method:  get_element_set[]
 */
::edu::csdms::openmi::IElementSet
edu::csdms::models::stm::DeltaNorm_impl::get_element_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_element_set)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_element_set} (get_element_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_element_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_element_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_element_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_element_set)
}

/**
 * Method:  get_value_set[]
 */
::edu::csdms::openmi::IValueSet
edu::csdms::models::stm::DeltaNorm_impl::get_value_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_value_set)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_value_set} (get_value_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_value_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_value_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_value_set)
}

/**
 * Method:  get_value_set_data[]
 */
::sidl::basearray
edu::csdms::models::stm::DeltaNorm_impl::get_value_set_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.get_value_set_data)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.get_value_set_data} (get_value_set_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.get_value_set_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_value_set_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.get_value_set_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.get_value_set_data)
}

/**
 * Method:  set_value_set[]
 */
void
edu::csdms::models::stm::DeltaNorm_impl::set_value_set_impl (
  /* in */const ::std::string& val_string,
  /* in */::edu::csdms::openmi::IValueSet& values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm.set_value_set)
  // Insert-Code-Here {edu.csdms.models.stm.DeltaNorm.set_value_set} (set_value_set method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.stm.DeltaNorm.set_value_set)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_value_set");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.stm.DeltaNorm.set_value_set)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm.set_value_set)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.DeltaNorm._misc)
// Insert-Code-Here {edu.csdms.models.stm.DeltaNorm._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.DeltaNorm._misc)

