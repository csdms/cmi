// 
// File:          edu_csdms_models_Child_Impl.hxx
// Symbol:        edu.csdms.models.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for edu.csdms.models.Child
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 

#ifndef included_edu_csdms_models_Child_Impl_hxx
#define included_edu_csdms_models_Child_Impl_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_edu_csdms_models_Child_IOR_h
#include "edu_csdms_models_Child_IOR.h"
#endif
#ifndef included_edu_csdms_cmi_IGrid_hxx
#include "edu_csdms_cmi_IGrid.hxx"
#endif
#ifndef included_edu_csdms_models_Child_hxx
#include "edu_csdms_models_Child.hxx"
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


// DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._hincludes)
// Insert-Code-Here {edu.csdms.models.Child._hincludes} (includes or arbitrary code)
#include <childInterface.h>
#include <glib.h>

typedef enum
{
  CMI_STATUS_CREATED = 0,
  CMI_STATUS_INITIALIZING,
  CMI_STATUS_INITIALIZED,
  CMI_STATUS_UPDATING,
  CMI_STATUS_UPDATED,
  CMI_STATUS_FINALIZING,
  CMI_STATUS_FINALIZED
}
CMI_Status;

#define CMI_COMPONENT_NAME "Child"
#define CMI_PORT_NAMES "SubaqueousDelta"
#define CMI_TEMPLATE_SOURCE_FILES "Child.in.in,Child_command_line.txt.in"
#define CMI_TEMPLATE_DEST_FILES "Child.in,Child_command_line.txt"
#define CMI_PORT_QUEUE_DT (1.)
#define CMI_MAPPERS "SeaFloorElevation@SubaqueousDelta:Weighted Mean"
#define CMI_OUTPUT_FILE_NS "Output/Grid,Output/CellGrid"

#define CMI_TURN_OFF_PORTS 0
#define CMI_TURN_OFF_MAPPING 0

#if !defined (PRINT)
# define PRINT(l, m) {  \
  string prefix ("Child:"); \
  string message ((m)); \
  this->log.log ((l), prefix+message); }
#endif
// DO-NOT-DELETE splicer.end(edu.csdms.models.Child._hincludes)

namespace edu { 
  namespace csdms { 
    namespace models { 

      /**
       * Symbol "edu.csdms.models.Child" (version 0.0)
       */
      class Child_impl : public virtual ::edu::csdms::models::Child 
      // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._inherits)
      // Insert-Code-Here {edu.csdms.models.Child._inherits} (optional inheritance here)
      // DO-NOT-DELETE splicer.end(edu.csdms.models.Child._inherits)

      {

      // All data marked protected will be accessable by 
      // descendant Impl classes
      protected:

        bool _wrapped;

        // DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._implementation)

  // Insert-UserCode-Here(edu.csdms.models.Child._implementation)

        gov::cca::TypeMap userinput;
        childInterface state;
        CMI_Status status;
        bool is_driver;
        ::edu::csdms::tools::CMIConfigFile cfg_file;
        ::edu::csdms::tools::CMIPortQueue ports;
        ::edu::csdms::tools::PrintQueue print_q;

        //::edu::csdms::tools::IRFPortQueue irf_ports;
        ::edu::csdms::tools::PrintQueue print_queue;
        ::edu::csdms::tools::Verbose log;

        bool subaqueous_erosion_port_is_on;
        bool printer_port_is_on;
        bool is_initialized;
        bool logging_is_initialized;

  // Bocca generated code. bocca.protected.begin(edu.csdms.models.Child._implementation)
  
   gov::cca::Services    d_services; // our cca handle.
 

  // Bocca generated code. bocca.protected.end(edu.csdms.models.Child._implementation)

        // DO-NOT-DELETE splicer.end(edu.csdms.models.Child._implementation)

      public:
        // default constructor, used for data wrapping(required)
        Child_impl();
        // sidl constructor (required)
        // Note: alternate Skel constructor doesn't call addref()
        // (fixes bug #275)
          Child_impl( struct edu_csdms_models_Child__object * ior ) : StubBase(
            ior,true), 
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
        virtual ~Child_impl() { _dtor(); }

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
          /* in */::edu::csdms::ports::CMIPort& dummy1,
          /* in */::edu::csdms::tools::CMIGrid& dummy2,
          /* in */::edu::csdms::tools::Verbose& dummy3,
          /* in */::edu::csdms::tools::CMIConfigFile& dummy4,
          /* in */::edu::csdms::tools::TemplateFiles& dummy5,
          /* in */::edu::csdms::tools::ConfigDialog& dummy6,
          /* in */::edu::csdms::tools::CMIPortQueue& dummy7,
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
        bool
        CMI_has_output_item_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        bool
        CMI_has_input_item_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

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
        ::sidl::array<double>
        CMI_get_grid_spacing_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<double>
        CMI_get_grid_lower_left_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<int32_t>
        CMI_get_grid_shape_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<double>
        CMI_get_grid_x_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<double>
        CMI_get_grid_y_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<double>
        CMI_get_grid_z_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<int32_t>
        get_grid_connectivity_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<int32_t>
        get_grid_offset_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::edu::csdms::cmi::IGrid
        get_grid_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        ::sidl::array<double>
        get_grid_values_impl (
          /* in */const ::std::string& long_var_name
        )
        ;

        /**
         * user defined non-static method.
         */
        void
        set_grid_values_impl (
          /* in */const ::std::string& long_var_name,
          /* in array<double> */::sidl::array<double>& vals
        )
        ;

      };  // end class Child_impl

    } // end namespace models
  } // end namespace csdms
} // end namespace edu

// DO-NOT-DELETE splicer.begin(edu.csdms.models.Child._hmisc)
// Insert-Code-Here {edu.csdms.models.Child._hmisc} (miscellaneous things)
// DO-NOT-DELETE splicer.end(edu.csdms.models.Child._hmisc)

#endif
