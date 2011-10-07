// 
// File:          edu_csdms_models_Aquatellus_Impl.hxx
// Symbol:        edu.csdms.models.Aquatellus-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.Aquatellus
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 

#ifndef included_edu_csdms_models_Aquatellus_Impl_hxx
#define included_edu_csdms_models_Aquatellus_Impl_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_edu_csdms_models_Aquatellus_IOR_h
#include "edu_csdms_models_Aquatellus_IOR.h"
#endif
#ifndef included_edu_csdms_models_Aquatellus_hxx
#include "edu_csdms_models_Aquatellus.hxx"
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
#ifndef included_edu_csdms_ports_CMIPort_hxx
#include "edu_csdms_ports_CMIPort.hxx"
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


// DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._hincludes)
// Insert-Code-Here {edu.csdms.models.Aquatellus._hincludes} (includes or arbitrary code)
#include <aquatellus_bmi.h>
#include <aquatellus_cmi.h>
typedef enum
{
  CMI_STATUS_CREATED,
  CMI_STATUS_INITIALIZING,
  CMI_STATUS_INITIALIZED,
  CMI_STATUS_UPDATING,
  CMI_STATUS_UPDATED,
  CMI_STATUS_FINALIZING,
  CMI_STATUS_FINALIZED
}
CMI_Component_status;
// DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._hincludes)

namespace edu { 
  namespace csdms { 
    namespace models { 

      /**
       * Symbol "edu.csdms.models.Aquatellus" (version 0.0)
       */
      class Aquatellus_impl : public virtual ::edu::csdms::models::Aquatellus 
      // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._inherits)
      // Insert-Code-Here {edu.csdms.models.Aquatellus._inherits} (optional inheritance here)
      // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._inherits)

      {

      // All data marked protected will be accessable by 
      // descendant Impl classes
      protected:

        bool _wrapped;

        // DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._implementation)

  // Insert-UserCode-Here(edu.csdms.models.Aquatellus._implementation)
        gov::cca::TypeMap userinput;
        void * state;
        bool is_initialized;
        bool is_driver;
        CMI_Component_status status;

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Aquatellus._implementation)
  
   gov::cca::Services    d_services; // our cca handle.
 

  // Bocca generated code. bocca.protected.end(edu.csdms.models.Aquatellus._implementation)

        // DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._implementation)

      public:
        // default constructor, used for data wrapping(required)
        Aquatellus_impl();
        // sidl constructor (required)
        // Note: alternate Skel constructor doesn't call addref()
        // (fixes bug #275)
          Aquatellus_impl( struct edu_csdms_models_Aquatellus__object * ior ) : 
            StubBase(ior,true), 
          ::gov::cca::Port((ior==NULL) ? NULL : &((*ior).d_gov_cca_port)),
          ::edu::csdms::ports::CMIPort((ior==NULL) ? NULL : &((
            *ior).d_edu_csdms_ports_cmiport)),
          ::gov::cca::Component((ior==NULL) ? NULL : &((
            *ior).d_gov_cca_component)),
          ::gov::cca::ComponentRelease((ior==NULL) ? NULL : &((
            *ior).d_gov_cca_componentrelease)),
        ::gov::cca::ports::GoPort((ior==NULL) ? NULL : &((
          *ior).d_gov_cca_ports_goport)) , _wrapped(false) {_ctor();}


        // user defined construction
        void _ctor();

        // virtual destructor (required)
        virtual ~Aquatellus_impl() { _dtor(); }

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
          /* in */::edu::csdms::tools::IRFPortQueue& dummy1,
          /* in */::edu::csdms::tools::Verbose& dummy2,
          /* in */::edu::csdms::openmi::ValueSet& dummy3,
          /* in */::edu::csdms::tools::TemplateFiles& dummy4,
          /* in */::edu::csdms::openmi::ScalarSet& dummy5,
          /* in */::edu::csdms::tools::ConfigDialog& dummy6,
          /* in */::edu::csdms::openmi::IScalarSet& dummy7,
          /* in */::edu::csdms::tools::PrintQueue& dummy8
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
        /**
         * user defined non-static method.
         */
        bool
        CMI_initialize_impl (
          /* in */const ::std::string& config_file
        )
        ;

        /**
         * user defined non-static method.
         */
        bool
        CMI_run_for_impl (
          /* in */double time_interval,
          /* in */const ::std::string& time_units,
          /* in */const ::std::string& stop_rule,
          /* in array<double> */::sidl::array<double>& stop_vars
        )
        ;

        /**
         * user defined non-static method.
         */
        bool
        CMI_run_impl (
          /* in */double time_interval
        )
        ;

        /**
         * user defined non-static method.
         */
        bool
        CMI_finalize_impl() ;
        /**
         * user defined non-static method.
         */
        bool
        CMI_run_model_impl (
          /* in */const ::std::string& config_file,
          /* in */const ::std::string& stop_rule,
          /* in */double stop_var
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::basearray
        CMI_get_values_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        CMI_set_values_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<> */::sidl::basearray& in_values
        )
        ;

        /**
         * user defined non-static method.
         */
        ::std::string
        CMI_get_status_impl() ;
        /**
         * user defined non-static method.
         */
        ::std::string
        CMI_get_component_name_impl() ;
        /**
         * user defined non-static method.
         */
        ::sidl::array< ::std::string>
        CMI_get_input_item_list_impl() ;
        /**
         * user defined non-static method.
         */
        ::sidl::array< ::std::string>
        CMI_get_output_item_list_impl() ;
        /**
         * user defined non-static method.
         */
        void
        CMI_get_required_ports_impl() ;
        /**
         * user defined non-static method.
         */
        void
        CMI_release_required_ports_impl() ;
        /**
         * user defined non-static method.
         */
        ::sidl::basearray
        CMI_get_values_at_indices_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<int> */::sidl::array<int32_t>& indices
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        CMI_set_values_at_indices_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<int> */::sidl::array<int32_t>& indices,
          /* in array<> */::sidl::basearray& in_values
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        CMI_print_traceback_impl() ;
        /**
         * user defined non-static method.
         */
        bool
        initialize_impl (
          /* in */const ::std::string& config_file
        )
        ;

        /**
         * user defined non-static method.
         */
        bool
        run_for_impl (
          /* in */double time_interval,
          /* in */const ::std::string& time_units,
          /* in */const ::std::string& stop_rule,
          /* in array<double> */::sidl::array<double>& stop_vars
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
        bool
        run_model_impl (
          /* in */const ::std::string& config_file,
          /* in */const ::std::string& stop_rule,
          /* in */double stop_var
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::basearray
        get_values_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        set_values_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<> */::sidl::basearray& in_values
        )
        ;

        /**
         * user defined non-static method.
         */
        ::std::string
        get_status_impl() ;
        /**
         * user defined non-static method.
         */
        ::std::string
        get_component_name_impl() ;
        /**
         * user defined non-static method.
         */
        ::sidl::array< ::std::string>
        get_input_item_list_impl() ;
        /**
         * user defined non-static method.
         */
        ::sidl::array< ::std::string>
        get_output_item_list_impl() ;
        /**
         * user defined non-static method.
         */
        void
        get_required_ports_impl() ;
        /**
         * user defined non-static method.
         */
        void
        release_required_ports_impl() ;
        /**
         * user defined non-static method.
         */
        ::sidl::basearray
        get_values_at_indices_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<int> */::sidl::array<int32_t>& indices
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        set_values_at_indices_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<int> */::sidl::array<int32_t>& indices,
          /* in array<> */::sidl::basearray& in_values
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        print_traceback_impl() ;
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
        ::sidl::basearray
        get_value_set_data_impl (
          /* in */const ::std::string& val_string
        )
        ;

      };  // end class Aquatellus_impl

    } // end namespace models
  } // end namespace csdms
} // end namespace edu

// DO-NOT-DELETE splicer.begin(edu.csdms.models.Aquatellus._hmisc)
// Insert-Code-Here {edu.csdms.models.Aquatellus._hmisc} (miscellaneous things)
// DO-NOT-DELETE splicer.end(edu.csdms.models.Aquatellus._hmisc)

#endif
