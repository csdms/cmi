// 
// File:          edu_csdms_models_stm_AgDegNormalSub_Impl.hxx
// Symbol:        edu.csdms.models.stm.AgDegNormalSub-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.stm.AgDegNormalSub
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 

#ifndef included_edu_csdms_models_stm_AgDegNormalSub_Impl_hxx
#define included_edu_csdms_models_stm_AgDegNormalSub_Impl_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_edu_csdms_models_stm_AgDegNormalSub_IOR_h
#include "edu_csdms_models_stm_AgDegNormalSub_IOR.h"
#endif
#ifndef included_edu_csdms_models_stm_AgDegNormalSub_hxx
#include "edu_csdms_models_stm_AgDegNormalSub.hxx"
#endif
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


// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.AgDegNormalSub._hincludes)
// Insert-Code-Here {edu.csdms.models.stm.AgDegNormalSub._hincludes} (includes or arbitrary code)
#include "Initialize.h"
#include "Run.h"
#include "Finalize.h"
#include "SaveDatatoMatrix.h"

// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.AgDegNormalSub._hincludes)

namespace edu { 
  namespace csdms { 
    namespace models { 
      namespace stm { 

        /**
         * Symbol "edu.csdms.models.stm.AgDegNormalSub" (version 0.0)
         */
        class AgDegNormalSub_impl : public virtual 
          ::edu::csdms::models::stm::AgDegNormalSub 
        // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.AgDegNormalSub._inherits)
        // Insert-Code-Here {edu.csdms.models.stm.AgDegNormalSub._inherits} (optional inheritance here)
        // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.AgDegNormalSub._inherits)

        {

        // All data marked protected will be accessable by 
        // descendant Impl classes
        protected:

          bool _wrapped;

          // DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.AgDegNormalSub._implementation)

  // Insert-UserCode-Here(edu.csdms.models.stm.AgDegNormalSub._implementation)
gov::cca::TypeMap userinput;
    float qw, If, D, lamdap, kc, S, qtf, L, dt, alphau, alphar, qtg, time;
    float alphat, nt, tauc, phis, R, Cf, sigma, rB, omega, lamda, dx, Lmax;
    int iterate, prints, M, formulation, check, k, j;
    double eta[101], x[101], qb[101], Sl[101], tau[101], H[101];
        double (*printmatrix)[101], (*Slmatrix)[101], (*Hmatrix)[101];
        double (*taumatrix)[101], (*qbmatrix)[101];

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.stm.AgDegNormalSub._implementation)
  
   gov::cca::Services    d_services; // our cca handle.
 

  // Bocca generated code. bocca.protected.end(edu.csdms.models.stm.AgDegNormalSub._implementation)

          // DO-NOT-DELETE splicer.end(edu.csdms.models.stm.AgDegNormalSub._implementation)

        public:
          // default constructor, used for data wrapping(required)
          AgDegNormalSub_impl();
          // sidl constructor (required)
          // Note: alternate Skel constructor doesn't call addref()
          // (fixes bug #275)
            AgDegNormalSub_impl( struct 
              edu_csdms_models_stm_AgDegNormalSub__object * ior ) : StubBase(
              ior,true), 
            ::gov::cca::Port((ior==NULL) ? NULL : &((*ior).d_gov_cca_port)),
            ::edu::csdms::ports::IRFPort((ior==NULL) ? NULL : &((
              *ior).d_edu_csdms_ports_irfport)),
            ::gov::cca::Component((ior==NULL) ? NULL : &((
              *ior).d_gov_cca_component)),
          ::gov::cca::ComponentRelease((ior==NULL) ? NULL : &((
            *ior).d_gov_cca_componentrelease)) , _wrapped(false) {_ctor();}


          // user defined construction
          void _ctor();

          // virtual destructor (required)
          virtual ~AgDegNormalSub_impl() { _dtor(); }

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
            /* in */::edu::csdms::openmi::ValueSet& dummy1,
            /* in */::edu::csdms::tools::TemplateFiles& dummy2,
            /* in */::edu::csdms::openmi::ScalarSet& dummy3,
            /* in */::edu::csdms::tools::ConfigDialog& dummy4,
            /* in */::edu::csdms::openmi::IScalarSet& dummy5
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
           * user defined non-static method.
           */
          void
          initialize_impl (
            /* in array<string> */::sidl::array< ::std::string>& properties
          )
          ;

          /**
           * user defined non-static method.
           */
          void
          run_impl (
            /* in */double time
          )
          ;

          /**
           * user defined non-static method.
           */
          void
          finalize_impl() ;
          /**
           * user defined non-static method.
           */
          int64_t
          getRaster_nx_impl() ;
          /**
           * user defined non-static method.
           */
          int64_t
          getRaster_ny_impl() ;
          /**
           * user defined non-static method.
           */
          double
          getRaster_dx_impl() ;
          /**
           * user defined non-static method.
           */
          double
          getRaster_dy_impl() ;
          /**
           * user defined non-static method.
           */
          double
          getRaster_ulx_impl() ;
          /**
           * user defined non-static method.
           */
          double
          getRaster_uly_impl() ;
          /**
           * user defined non-static method.
           */
          ::sidl::array<double>
          getRaster_grid_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          ::sidl::array<int32_t>
          get_raster_dimen_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          ::sidl::array<double>
          get_raster_res_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          ::sidl::basearray
          get_raster_data_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          ::sidl::array<double>
          get_time_span_impl() ;
          /**
           * user defined non-static method.
           */
          ::edu::csdms::openmi::IElementSet
          get_element_set_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          ::edu::csdms::openmi::IValueSet
          get_value_set_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          ::sidl::basearray
          get_value_set_data_impl (
            /* in */const ::std::string& val_string
          )
          ;

          /**
           * user defined non-static method.
           */
          void
          set_value_set_impl (
            /* in */const ::std::string& val_string,
            /* in */::edu::csdms::openmi::IValueSet& values
          )
          ;

        };  // end class AgDegNormalSub_impl

      } // end namespace stm
    } // end namespace models
  } // end namespace csdms
} // end namespace edu

// DO-NOT-DELETE splicer.begin(edu.csdms.models.stm.AgDegNormalSub._hmisc)
// Insert-Code-Here {edu.csdms.models.stm.AgDegNormalSub._hmisc} (miscellaneous things)
// DO-NOT-DELETE splicer.end(edu.csdms.models.stm.AgDegNormalSub._hmisc)

#endif
