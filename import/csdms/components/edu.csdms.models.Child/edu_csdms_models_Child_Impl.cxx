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
#ifndef included_edu_csdms_openmi_ElementMapper_hxx
#include "edu_csdms_openmi_ElementMapper.hxx"
#endif
#ifndef included_edu_csdms_openmi_ElementSet_hxx
#include "edu_csdms_openmi_ElementSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_ElementType_hxx
#include "edu_csdms_openmi_ElementType.hxx"
#endif
#ifndef included_edu_csdms_openmi_IElementSet_hxx
#include "edu_csdms_openmi_IElementSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_IValueSet_hxx
#include "edu_csdms_openmi_IValueSet.hxx"
#endif
#ifndef included_edu_csdms_openmi_ScalarSet_hxx
#include "edu_csdms_openmi_ScalarSet.hxx"
#endif
#ifndef included_edu_csdms_ports_IRFPort_hxx
#include "edu_csdms_ports_IRFPort.hxx"
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
  this->is_initialized = false;
  this->logging_is_initialized = false;
  this->log = NULL;

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

  // Provide a edu.csdms.ports.IRFPort port with port name WaterDischarge 
  try{
    this->d_services.addProvidesPort(
                   port,              // implementing object
                   "WaterDischarge", // port instance name
                   "edu.csdms.ports.IRFPort",     // full sidl type of port
                   typeMap);          // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex, 
        "edu.csdms.models.Child: Error calling addProvidesPort(port,"
        "\"WaterDischarge\", \"edu.csdms.ports.IRFPort\", typeMap) ", -2);
    throw;
  }    

  // Provide a edu.csdms.ports.IRFPort port with port name SubaerialErosion 
  try{
    this->d_services.addProvidesPort(
                   port,              // implementing object
                   "SubaerialErosion", // port instance name
                   "edu.csdms.ports.IRFPort",     // full sidl type of port
                   typeMap);          // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex, 
        "edu.csdms.models.Child: Error calling addProvidesPort(port,"
        "\"SubaerialErosion\", \"edu.csdms.ports.IRFPort\", typeMap) ", -2);
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

  // Use a edu.csdms.ports.IRFPort port with port name SubaqueousErosion 
  try{
    this->d_services.registerUsesPort(
                   "SubaqueousErosion", // port instance name
                   "edu.csdms.ports.IRFPort",     // full sidl type of port
                    typeMap);         // properties for the port
  } catch ( ::gov::cca::CCAException ex )  {
    BOCCA_EXTEND_THROW_CXX(ex,
       "edu.csdms.models.Child: Error calling registerUsesPort(\"SubaqueousErosion\", "
       "\"edu.csdms.ports.IRFPort\", typeMap) ", -2);
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

  // Un-provide edu.csdms.ports.IRFPort port with port name WaterDischarge 
  try{
    services.removeProvidesPort("WaterDischarge");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling removeProvidesPort("
              << "\"WaterDischarge\") at " 
              << __FILE__ << ": " << __LINE__ -4 << ": " << ex.getNote() 
              << std::endl;
#endif // _BOCCA_STDERR

  }

  // Un-provide edu.csdms.ports.IRFPort port with port name SubaerialErosion 
  try{
    services.removeProvidesPort("SubaerialErosion");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling removeProvidesPort("
              << "\"SubaerialErosion\") at " 
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

  // Release edu.csdms.ports.IRFPort port with port name SubaqueousErosion 
  try{
    services.unregisterUsesPort("SubaqueousErosion");
  } catch ( ::gov::cca::CCAException ex )  {

#ifdef _BOCCA_STDERR
    std::cerr << "edu.csdms.models.Child: Error calling unregisterUsesPort("
              << "\"SubaqueousErosion\") at " 
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
  /* in */::edu::csdms::ports::IRFPort& dummy1,
  /* in */::edu::csdms::openmi::ElementType dummy2,
  /* in */::edu::csdms::tools::TemplateFiles& dummy3,
  /* in */::edu::csdms::tools::IRFPortQueue& dummy4,
  /* in */::edu::csdms::tools::Verbose& dummy5,
  /* in */::edu::csdms::openmi::ElementMapper& dummy6,
  /* in */::edu::csdms::openmi::ScalarSet& dummy7,
  /* in */::edu::csdms::tools::ConfigDialog& dummy8,
  /* in */::edu::csdms::openmi::ElementSet& dummy9,
  /* in */::edu::csdms::tools::PrintQueue& dummy10 ) 
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
    (void)dummy9;
    (void)dummy10;

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
  ::gov::cca::Port gcp = services.getPort("ppf");

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
  ppf.setBatchTitle (this->userinput, "Child Parameters");

  {
    ::edu::csdms::tools::ConfigDialog dialog =
      ::edu::csdms::tools::ConfigDialog::_create ();

    dialog.read ("Child.xml");
    dialog.construct (ppf, this->userinput);
  }

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

  {
    ::sidl::array< ::std::string> properties =
      sidl::array< ::std::string>::create1d(2);
    double duration;

    fprintf (stderr, "Running GO\n");
    if (!this->logging_is_initialized)
    {
      fprintf (stderr, "Set up logging\n");
      this->log = ::edu::csdms::tools::Verbose::_create ();
      fprintf (stderr, "Logging is set up\n");
      this->log.set_log_level (1);
      fprintf (stderr, "Logging level set\n");
      this->logging_is_initialized = true;
    }

    PRINT(1, "Read input paramaters");
    { /*   Get site and case prefixes from the GUI */
      string site_prefix = userinput.getString ("/Child/SitePrefix", "");
      string case_prefix = userinput.getString ("/Child/CasePrefix", "");

      duration= userinput.getDouble ("/Child/Input/Var/RunDuration", 0);

      properties.set (0, site_prefix);
      properties.set (1, case_prefix);
    }

    PRINT(1, "Initialize");
    this->initialize_impl (properties);

    PRINT (1, "Run");
    this->run_impl (duration);

    PRINT (1, "Finalize");
    this->finalize_impl ();
  }

  PRINT (1, "Model is complete");
  return bocca_status;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.go)
}

/**
 * Method:  initialize[]
 */
void
edu::csdms::models::Child_impl::initialize_impl (
  /* in array<string> */::sidl::array< ::std::string>& properties ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.initialize)
  {
    if (!this->logging_is_initialized)
    {
      this->log = ::edu::csdms::tools::Verbose::_create ();
      this->log.set_log_level (1);
      this->logging_is_initialized = true;
    }

    if (this->is_initialized)
    {
      PRINT (0, "Child is already initialized\n");
      return;
    }

    { /* Read Ports Configure tab */
      string str = userinput.getString ("/Child/Port/SubaqueousErosion", "ON");
      if (str.compare ("ON")==0)
        this->subaqueous_erosion_port_is_on= true;
      else
        this->subaqueous_erosion_port_is_on= false;
    }

    PRINT (2, "Create port queue");
    {
      ::edu::csdms::ports::IRFPort port = 
        ::babel_cast< edu::csdms::ports::IRFPort>(*this);
      this->irf_ports = ::edu::csdms::tools::IRFPortQueue::_create ();

      this->irf_ports.initialize (this->d_services, port);

      PRINT (2, "Add port to queue");
      if (this->subaqueous_erosion_port_is_on)
        this->irf_ports.add_port ("SubaqueousErosion");

      PRINT (2, "Connect ports in queue");
      this->irf_ports.connect_ports ();
    }

    { /* Initialize CHILD */
      string input_dir = userinput.getString ("/Child/Input/Dir", ""); 
      string site_prefix = userinput.getString ("/Child/SitePrefix", "");
      string case_prefix = userinput.getString ("/Child/CasePrefix", "");
      string in_file = site_prefix + "_" + case_prefix + ".in";

      if (input_dir.compare (0,3,"GUI")==0)
      {
        ::edu::csdms::tools::TemplateFiles tmpls;
        string to_file;
        char* work_dir = g_get_current_dir ();

        tmpls = ::edu::csdms::tools::TemplateFiles::_create ();

        tmpls.add_file ("Child.in.in", in_file);
          //"/data/progs/cca/project/csdms_eric/templates/Child.in.in",

        tmpls.substitute (userinput, "/Child/Input/Var/", work_dir);

        g_free (work_dir);
      }
      else
      {
        in_file = g_build_filename (input_dir.c_str (),
                                    in_file.c_str (), NULL);
      }

      {
        int   argc=2;
        char* argv[2];
        //char* full_name = g_build_filename (input_dir.c_str (),
        //                                    in_file.c_str (), NULL);

        argv[0] = g_strdup ("Child");
        argv[1] = g_strdup (in_file.c_str ());

        fprintf (stderr, "CHILD: input file is %s\n", argv[1]);
        fflush (stderr);

        this->state.Initialize (argc, argv);
        this->is_initialized = true;

        g_free (argv[1]);
        g_free (argv[0]);
      }

    }

    PRINT (2, "Set up PrintQueue");
    {
      ::edu::csdms::ports::IRFPort port = 
        ::babel_cast< edu::csdms::ports::IRFPort>(*this);
      this->print_queue = ::edu::csdms::tools::PrintQueue::_create ();

      this->print_queue.initialize (this->userinput, "/Child", port);
      this->print_queue.add_files ("Output/Grid");
      this->print_queue.add_files ("Output/CellGrid");
    }

    PRINT (2, "Initialize model uses ports");
    this->irf_ports.initialize_ports (properties);

    if (this->subaqueous_erosion_port_is_on)
    { /*   Create the WaterDischarge mapper */
      PRINT (2, "Initialize mapper for SubaqueousErosion");
      this->irf_ports.initialize_mapper ("SubaqueousErosion");
    }

    PRINT (2, "Initialize model elevations through SubaqueousErosion");
    if (this->subaqueous_erosion_port_is_on)
    { /*   Run and map SubaqueousErosion values */
      this->irf_ports.map_value ("SubaqueousErosion", "elevation",
                                 "SeaFloorElevation");
      //this->irf_ports.map_value ("SubaqueousErosion", "erosion",
      //                           "SeaFloorErosion");
    }
  }

  return;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.initialize)
}

/**
 * Method:  run[]
 */
void
edu::csdms::models::Child_impl::run_impl (
  /* in */double time ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.run)
  {
    if (this->is_initialized)
    {
      double current = this->state.GetCurrentTime ();
      //double horizon = current + this->state.GetRemainingRunTime ();
      const double horizon = 1e6;
      double print_time = this->print_queue.next_print_time ();

      fprintf (stderr, "CHILD: current time is %f\n", current);
      fprintf (stderr, "CHILD: time is %f\n", time);

      while (print_time<time)
      {
        this->run_impl (print_time);
        print_time = this->print_queue.next_print_time ();
      }

      fprintf (stderr, "CHILD: current time is %f\n", current);
      fprintf (stderr, "CHILD: time is %f\n", time);

      current = this->state.GetCurrentTime ();

      if (time>horizon)
      {
        PRINT (1, "Requested time is greater than horizon.");
      } 
      else if (time>current)
      { 
        double t;
        const double dt = 1.;
        const double stop_time = time;

        fprintf (stderr, "DEBUG: run from %f to %f\n", current, time);
        fflush (stderr);

        while (current<stop_time)
        {
          t = current + dt;
          if (t>stop_time)
            t = stop_time;

          fprintf (stderr, "CHILD: Run ports\n");
          fprintf (stderr, "CHILD: current time is %f\n", current);
          fprintf (stderr, "CHILD: time is %f\n", t);
          fflush (stderr);

          this->irf_ports.run_ports (current);

          if (this->subaqueous_erosion_port_is_on)
          { /*   Run and map SubaqueousErosion values */
            //this->irf_ports.map_value ("SubaqueousErosion", "elevation",
            //                           "SeaFloorElevation");
            //this->irf_ports.map_value ("SubaqueousErosion", "erosion",
            //                           "SeaFloorElevation");

            this->irf_ports.map_value ("SubaqueousErosion", "erosion",
                                       "SeaFloorErosion");
          }

          fprintf (stderr, "CHILD: Time before run is %f\n", this->state.GetCurrentTime ());
          fflush (stderr);

          // Mask out nodes below sea level
          this->state.MaskNodesBelowElevation (0);
          //this->state.Run (time-current);
          this->state.Run (dt);
          fprintf (stderr, "CHILD: Time after run is %f\n", this->state.GetCurrentTime ());
          fflush (stderr);

          PRINT (2, "Print everything in the queue");
          this->print_queue.print_all (t);

          current = this->state.GetCurrentTime ();
        }
      }
      else
      {
        fprintf (stderr, "DEBUG: time < current (%f<%f\n", time, current);
        fflush (stderr);
      }
    }
  }

  PRINT (2, "End of this run step");
  return;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.run)
}

/**
 * Method:  finalize[]
 */
void
edu::csdms::models::Child_impl::finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.finalize)
  if (this->is_initialized)
  {
    PRINT (1, "Clean up");

    if (this->is_initialized)
    { /*   Free resources. */
      this->state.CleanUp ();
    }
    
    this->is_initialized = false;

    this->print_queue.close ();

    this->irf_ports.finalize_ports ();
    this->irf_ports.disconnect_ports ();

    PRINT (1, "Done finalize step");
    this->logging_is_initialized = false;
  }
  return;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.finalize)
}

/**
 * Method:  getRaster_nx[]
 */
int64_t
edu::csdms::models::Child_impl::getRaster_nx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_nx)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_nx} (getRaster_nx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_nx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_nx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_nx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_nx)
}

/**
 * Method:  getRaster_ny[]
 */
int64_t
edu::csdms::models::Child_impl::getRaster_ny_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_ny)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_ny} (getRaster_ny method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_ny)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ny");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_ny)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_ny)
}

/**
 * Method:  getRaster_dx[]
 */
double
edu::csdms::models::Child_impl::getRaster_dx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_dx)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_dx} (getRaster_dx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_dx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_dx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_dx)
}

/**
 * Method:  getRaster_dy[]
 */
double
edu::csdms::models::Child_impl::getRaster_dy_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_dy)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_dy} (getRaster_dy method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_dy)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_dy");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_dy)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_dy)
}

/**
 * Method:  getRaster_ulx[]
 */
double
edu::csdms::models::Child_impl::getRaster_ulx_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_ulx)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_ulx} (getRaster_ulx method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_ulx)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_ulx");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_ulx)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_ulx)
}

/**
 * Method:  getRaster_uly[]
 */
double
edu::csdms::models::Child_impl::getRaster_uly_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_uly)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_uly} (getRaster_uly method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_uly)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_uly");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_uly)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_uly)
}

/**
 * Method:  getRaster_grid[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::getRaster_grid_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.getRaster_grid)
  // Insert-Code-Here {edu.csdms.models.Child.getRaster_grid} (getRaster_grid method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.getRaster_grid)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "getRaster_grid");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.getRaster_grid)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.getRaster_grid)
}

/**
 * Method:  get_raster_dimen[]
 */
::sidl::array<int32_t>
edu::csdms::models::Child_impl::get_raster_dimen_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_raster_dimen)
  // Insert-Code-Here {edu.csdms.models.Child.get_raster_dimen} (get_raster_dimen method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.get_raster_dimen)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_dimen");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.get_raster_dimen)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_raster_dimen)
}

/**
 * Method:  get_raster_res[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::get_raster_res_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_raster_res)
  // Insert-Code-Here {edu.csdms.models.Child.get_raster_res} (get_raster_res method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.get_raster_res)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_res");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.get_raster_res)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_raster_res)
}

/**
 * Method:  get_raster_data[]
 */
::sidl::basearray
edu::csdms::models::Child_impl::get_raster_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_raster_data)
  // Insert-Code-Here {edu.csdms.models.Child.get_raster_data} (get_raster_data method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Child.get_raster_data)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_raster_data");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Child.get_raster_data)
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_raster_data)
}

/**
 * Method:  get_time_span[]
 */
::sidl::array<double>
edu::csdms::models::Child_impl::get_time_span_impl () 

{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_time_span)
    sidl::array<double> span = sidl::array<double>::create1d (2);

    {
      const double current = this->state.GetCurrentTime ();
      const double end = current + this->state.GetRemainingRunTime ();
      
      span.set (0, 0.);
      span.set (1, end);
    }

    return span;
  EXIT:;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_time_span)
}

/**
 * Method:  get_element_set[]
 */
::edu::csdms::openmi::IElementSet
edu::csdms::models::Child_impl::get_element_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_element_set)
  ::edu::csdms::openmi::ElementSet elementSet =
    ::edu::csdms::openmi::ElementSet::_create ();

  elementSet.setID ("Child");
  
  //::edu::csdms::openmi::XYPolygon
  //elementSet.setElementType ((::edu::csdms::openmi::ElementType)4L);
  //::edu::csdms::openmi::XYPoint
  elementSet.setElementType ((::edu::csdms::openmi::ElementType)1L);
  //elementSet.setSpatialReference();


  fprintf (stderr, "Child: get elements\n");
  fflush (stderr);

  { /* New Child interface (triangles) */
    const int n_vertices = 3;
    const int coord_stride = 3;
    const int vertex_stride = 3;
    const int n_elements = this->state.GetTriangleCount ();
    std::vector<double> coords = this->state.GetNodeCoords ();
    std::vector<long> vertices = this->state.GetTriangleVertexIDs ();
    std::vector<double> disch = this->state.GetValueSet ("discharge");
    const int n_nodes = this->state.GetNodeCount ();
    const int len = coords.size ();

    // This is the number of elements (triangles) 3200
    fprintf (stderr, "Child: there are %d triangles\n", n_elements);

    // This is (x,y,z) for each node 5103
    fprintf (stderr, "Child: there are %d nodes\n", coords.size ());

    // This is the ID of each vertex of an element 3200*3 = 9600
    // This gives indices into coords
    fprintf (stderr, "Child: there are %d vertices\n", vertices.size ());

    // This is the number of nodes 5103/3 = 1701
    fprintf (stderr, "Child: there are %d nodes\n", n_nodes);

    // This is the number of values (one value for each node) 1701
    fprintf (stderr, "Child: there are %d values\n", disch.size ());

    assert (vertices.size () == n_elements*n_vertices);

    if (val_string.compare (0,4,"Cell")==0)
    {
      // Triangles
      for (int i=0; i<n_elements; i++) // 3200
      {
        ::edu::csdms::openmi::Element element = 
          ::edu::csdms::openmi::Element::_create ();

        for (int j=2; j>=0; j--)
        {
          int id;
          ::edu::csdms::openmi::Vertex vertex =
            ::edu::csdms::openmi::Vertex::_create ();

          id = vertices[i*3+j]*3;
          if (id%3 != 0)
          {
            fprintf (stderr, "******** id is %d\n", id);
            fflush (stderr);
          }
          if (id>coords.size ())
          {
            fprintf (stderr, "!!!!!!!! id is %d\n", id);
            fflush (stderr);
          }
          vertex.setX (coords[id]);
          vertex.setY (coords[id+1]);
          vertex.setZ (coords[id+2]);
          //vertex.setZ (0);

          element.addVertex (vertex);
        }
        elementSet.addElement (element);
      }
    }
    else
    {
      // Points
      for (int i=0; i<len; i+=3)
      {
        ::edu::csdms::openmi::Element element = 
          ::edu::csdms::openmi::Element::_create ();
        {
          ::edu::csdms::openmi::Vertex vertex =
            ::edu::csdms::openmi::Vertex::_create ();

          vertex.setX (coords[i]);
          vertex.setY (coords[i+1]);
          vertex.setZ (coords[i+2]);

          element.addVertex (vertex);
        }
        elementSet.addElement (element);
      }
    }
  }

  return (::edu::csdms::openmi::IElementSet) elementSet;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_element_set)
}

/**
 * Method:  get_value_set[]
 */
::edu::csdms::openmi::IValueSet
edu::csdms::models::Child_impl::get_value_set_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_value_set)
  ::edu::csdms::openmi::ScalarSet scalarSet =
    ::edu::csdms::openmi::ScalarSet::_create();
  
  std::cout << "val_string = " + val_string << std::endl;

  /* New child interface (triangles) */
  if (val_string.compare (0,4,"Cell")==0)
  { /* If using triangles */
    const int n_elements = this->state.GetTriangleCount ();
    std::vector<double> vec = state.GetValueSet (
                                val_string.substr (4,val_string.length ()));
    sidl::array<double> vals = sidl::array<double>::create1d(3*n_elements);
    std::vector<long> vertices = this->state.GetTriangleVertexIDs ();

    fprintf (stderr, "CHILD: n_elements is %d\n", n_elements);
    // For each element
    for (int i=0; i<n_elements; i++)
    {
      // For each vertex
      for (int j=2; j>=0; j--)
      {
        int id = vertices[3*i+j];
        vals.set (3*i+j, vec[id]);
      }
    }
    scalarSet.init(vals);
  }
  else
  { /* If using points */
    const int len = this->state.GetNodeCount ();
    std::vector<double> vec = state.GetValueSet (val_string);
    sidl::array<double> vals = sidl::array<double>::create1d(len);

    fprintf (stderr, "CHILD: len is %d\n", len);
    fprintf (stderr, "CHILD: vec.size is %d\n", vec.size ());
    assert (len==vec.size ());
/*
    if (val_string.compare (0,4,"erosion")==0)
    {
      for (int i=0; i<len; i++)
        if (i%5==0)
          vals.set (i, -1.);
        else
          vals.set (i, 0.);
    }
    else
*/
    {
      double max = -1e32;
      double min = 1e32;
      for (int i=0; i<len; i++)
      {
//        if (!state.IsInteriorNode (i))
//          vec[i] = 0.;
        //vec[i] /= 10.;
        vals.set (i, vec[i]);

        if (vec[i]>max)
          max = vec[i];
        if (vec[i]<min)
          min = vec[i];
      }
      fprintf (stderr, "CHILD: max is %f\n", max);
      fprintf (stderr, "CHILD: min is %f\n", min);
    }

    scalarSet.init(vals);
  }

  return (::edu::csdms::openmi::IValueSet) scalarSet;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_value_set)
}

/**
 * Method:  get_value_set_data[]
 */
::sidl::basearray
edu::csdms::models::Child_impl::get_value_set_data_impl (
  /* in */const ::std::string& val_string ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.get_value_set_data)
  sidl::array<double> vals;
  
  std::cout << "val_string = " + val_string << std::endl;
   /* New child interface (triangles) */

  if (val_string.compare (0,4,"Cell")==0)
  { /* If using triangles */
    const int n_elements = this->state.GetTriangleCount ();
    std::vector<double> vec = state.GetValueSet (
                                val_string.substr (4,val_string.length ()));
    std::vector<long> vertices = this->state.GetTriangleVertexIDs ();

    vals = sidl::array<double>::create1d(3*n_elements);

    //fprintf (stderr, "CHILD: n_elements %d\n", n_elements);
    // For each element
    for (int i=0; i<n_elements; i++)
    {
      // For each vertex
      for (int j=2; j>=0; j--)
      {
        int id = vertices[3*i+j];
        vals.set (3*i+j, vec[id]);
        //fprintf (stderr, "CHILD: vec[%d] = %f\n", id, vals.get (3*i+j));
      }
    }
    //fflush (stderr);
  }
  else
  { /* If using points */
    const int len = this->state.GetNodeCount ();
    std::vector<double> vec = state.GetValueSet (val_string);

    assert (len==vec.size ());
    vals = sidl::array<double>::create1d(len);

    for (int i=0; i<len; i++)
    {
      if (!state.IsInteriorNode (i))
        vec[i] = 0.;
      //vec[i] /= 10.;
      vals.set (i, vec[i]);
    }

    {
      double max = -1e32;
      double min = 1e32;
      for (int i=0; i<len; i++)
      {
//        if (!state.IsInteriorNode (i))
//          vec[i] = 0.;
        //vec[i] /= 10.;
        vals.set (i, vec[i]);

        if (vec[i]>max)
          max = vec[i];
        if (vec[i]<min)
          min = vec[i];
      }
      fprintf (stderr, "CHILD: max is %f\n", max);
      fprintf (stderr, "CHILD: min is %f\n", min);
    }
  }

  return vals;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.get_value_set_data)
}

/**
 * Method:  set_value_set[]
 */
void
edu::csdms::models::Child_impl::set_value_set_impl (
  /* in */const ::std::string& val_string,
  /* in */::edu::csdms::openmi::IValueSet& values ) 
{
  // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child.set_value_set)
  {
    const int len = values.getCount ();
    std::vector<double> val (len);
    ::edu::csdms::openmi::IScalarSet scalars =
      ::babel_cast< ::edu::csdms::openmi::IScalarSet>(values);
      //(::edu::csdms::openmi::IScalarSet) values;
    double max = -1e32;
    double min = 1e32;

    for (int i=0; i<len; i++)
    {
      val[i] = scalars.getScalar (i);
      if (!state.IsInteriorNode (i))
        val[i] = 0;
      //val[i] *= 10.;
      if (val[i]>max)
        max = val[i];
      if (val[i]<min)
        min = val[i];
    }

    fprintf (stderr, "Child: Max erosion is %f\n", max);
    fprintf (stderr, "Child: Min erosion is %f\n", min);
    fflush (stderr);

    if (val_string.compare (0,4,"elev")==0)
      this->state.SetValueSet ("elev", val);
    else
      this->state.ExternalErosionAndDeposition (val);
      //this->state.ExternalErodeAndDepositToElevation (val);
    //this->state.ExternalErosionAndDeposition (val);
  }

  return;
  // DO-NOT-DELETE splicer.end(edu.csdms.models.Child.set_value_set)
}


// DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._misc)
// Insert-Code-Here {edu.csdms.models.Child._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.Child._misc)

