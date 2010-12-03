// 
// File:          edu_csdms_models_stm_Driver_Impl.hxx
// Symbol:        edu.csdms.models.stm.Driver-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.stm.Driver
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 

#ifndef included_edu_csdms_models_stm_Driver_Impl_hxx
#define included_edu_csdms_models_stm_Driver_Impl_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_edu_csdms_models_stm_Driver_IOR_h
#include "edu_csdms_models_stm_Driver_IOR.h"
#endif
#ifndef included_edu_csdms_models_stm_Driver_hxx
#include "edu_csdms_models_stm_Driver.hxx"
#endif
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
#ifndef included_gov_cca_Component_hxx
#include "gov_cca_Component.hxx"
#endif
#ifndef included_gov_cca_ComponentRelease_hxx
#include "gov_cca_ComponentRelease.hxx"
#endif
#ifndef included_gov_cca_Services_hxx
#include "gov_cca_Services.hxx"
#endif
#ifndef included_gov_cca_ports_GoPort_hxx
#include "gov_cca_ports_GoPort.hxx"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_hxx
#include "gov_cca_ports_ParameterPortFactory.hxx"
#endif
#ifndef included_sidl_BaseClass_hxx
#include "sidl_BaseClass.hxx"
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


// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._hincludes)
// Insert-Code-Here {edu.csdms.models.stm.Driver._hincludes} (includes or arbitrary code)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._hincludes)

namespace edu { 
  namespace csdms { 
    namespace models { 
      namespace stm { 

        /**
         * Symbol "edu.csdms.models.stm.Driver" (version 0.0)
         */
        class Driver_impl : public virtual ::edu::csdms::models::stm::Driver 
        // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._inherits)
        // Insert-Code-Here {edu.csdms.models.stm.Driver._inherits} (optional inheritance here)
        // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._inherits)

        {

        // All data marked protected will be accessable by 
        // descendant Impl classes
        protected:

          bool _wrapped;

          // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._implementation)

  // Insert-UserCode-Here(edu.csdms.models.stm.Driver._implementation)

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.Driver._implementation)
  
   gov::cca::Services    d_services; // our cca handle.
 

  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.Driver._implementation)

          // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._implementation)

        public:
          // default constructor, used for data wrapping(required)
          Driver_impl();
          // sidl constructor (required)
          // Note: alternate Skel constructor doesn't call addref()
          // (fixes bug #275)
            Driver_impl( struct edu_csdms_models_stm_Driver__object * ior ) : 
              StubBase(ior,true), 
            ::gov::cca::Component((ior==NULL) ? NULL : &((
              *ior).d_gov_cca_component)),
            ::gov::cca::ComponentRelease((ior==NULL) ? NULL : &((
              *ior).d_gov_cca_componentrelease)),
            ::gov::cca::Port((ior==NULL) ? NULL : &((*ior).d_gov_cca_port)),
          ::gov::cca::ports::GoPort((ior==NULL) ? NULL : &((
            *ior).d_gov_cca_ports_goport)) , _wrapped(false) {_ctor();}


          // user defined construction
          void _ctor();

          // virtual destructor (required)
          virtual ~Driver_impl() { _dtor(); }

          // user defined destruction
          void _dtor();

          // true if this object was created by a user newing the impl
          inline bool _isWrapped() {return _wrapped;}

          // static class initializer
          static void _load();

        public:

          /**
           * user defined non-static method.
           */
          void
          boccaSetServices_impl (
            /* in */::gov::cca::Services& services
          )
          // throws:
          //    ::gov::cca::CCAException
          //    ::sidl::RuntimeException
          ;

          /**
           * user defined non-static method.
           */
          void
          boccaReleaseServices_impl (
            /* in */::gov::cca::Services& services
          )
          // throws:
          //    ::gov::cca::CCAException
          //    ::sidl::RuntimeException
          ;


          /**
           *  This function should never be called, but helps babel generate better code. 
           */
          void
          boccaForceUsePortInclude_impl (
            /* in */::gov::cca::ports::ParameterPortFactory& dummy0,
            /* in */::edu::csdms::ports::IRFPort& dummy1,
            /* in */::edu::csdms::openmi::ValueSet& dummy2,
            /* in */::edu::csdms::tools::TemplateFiles& dummy3,
            /* in */::edu::csdms::openmi::ScalarSet& dummy4,
            /* in */::edu::csdms::tools::ConfigDialog& dummy5,
            /* in */::edu::csdms::openmi::IScalarSet& dummy6
          )
          ;


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
          setServices_impl (
            /* in */::gov::cca::Services& services
          )
          // throws:
          //    ::gov::cca::CCAException
          //    ::sidl::RuntimeException
          ;


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
          releaseServices_impl (
            /* in */::gov::cca::Services& services
          )
          // throws:
          //    ::gov::cca::CCAException
          //    ::sidl::RuntimeException
          ;


          /**
           *  
           * Execute some encapsulated functionality on the component. 
           * Return 0 if ok, -1 if internal error but component may be 
           * used further, and -2 if error so severe that component cannot
           * be further used safely.
           */
          int32_t
          go_impl() ;
        };  // end class Driver_impl

      } // end namespace stm
    } // end namespace models
  } // end namespace csdms
} // end namespace edu

// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.Driver._hmisc)
// Insert-Code-Here {edu.csdms.models.stm.Driver._hmisc} (miscellaneous things)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.Driver._hmisc)

#endif
