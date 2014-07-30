// 
// File:          csdms_model_Child_Impl.hxx
// Symbol:        csdms.model.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for csdms.model.Child
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 

#ifndef included_csdms_model_Child_Impl_hxx
#define included_csdms_model_Child_Impl_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_csdms_model_Child_IOR_h
#include "csdms_model_Child_IOR.h"
#endif
#ifndef included_csdms_core_Bmi_hxx
#include "csdms_core_Bmi.hxx"
#endif
#ifndef included_csdms_model_Child_hxx
#include "csdms_model_Child.hxx"
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


// DO-NOT-DELETE splicer.begin(csdms.model.Child._hincludes)
// Insert-Code-Here {csdms.model.Child._hincludes} (includes or arbitrary code)
#include<child/ChildInterface/bmi_model_child.h>

#define CALL_BMI_VOID(func,...) { \
  try { \
    state.func(__VA_ARGS__); \
  } catch (int e) { \
    BOCCA_THROW_CXX(::sidl::SIDLException, "Error running " #func); \
  } \
}


#define CALL_BMI(rtn,func,...) { \
  try { \
    rtn = state.func(__VA_ARGS__); \
  } catch (int e) { \
    BOCCA_THROW_CXX(::sidl::SIDLException, "Error running " #func); \
  } \
}

// DO-NOT-DELETE splicer.end(csdms.model.Child._hincludes)

namespace csdms { 
  namespace model { 

    /**
     * Symbol "csdms.model.Child" (version 0.0)
     */
    class Child_impl : public virtual ::csdms::model::Child 
    // DO-NOT-DELETE splicer.begin(csdms.model.Child._inherits)
    // Insert-Code-Here {csdms.model.Child._inherits} (optional inheritance here)
    // DO-NOT-DELETE splicer.end(csdms.model.Child._inherits)

    {

    // All data marked protected will be accessable by 
    // descendant Impl classes
    protected:

      bool _wrapped;

      // DO-NOT-DELETE splicer.begin(csdms.model.Child._implementation)
      bmi::Model state;
      // DO-NOT-DELETE splicer.end(csdms.model.Child._implementation)

    public:
      // default constructor, used for data wrapping(required)
      Child_impl();
      // sidl constructor (required)
      // Note: alternate Skel constructor doesn't call addref()
      // (fixes bug #275)
        Child_impl( struct csdms_model_Child__object * ior ) : StubBase(ior,
          true), 
      ::csdms::core::Bmi((ior==NULL) ? NULL : &((*ior).d_csdms_core_bmi)) , 
        _wrapped(false) {_ctor();}


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
       *  This function should never be called, but helps babel generate better code. 
       */
      void
      boccaForceUsePortInclude_impl() ;
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
      update_impl (
        /* in */double time_interval
      )
      ;

      /**
       * user defined non-static method.
       */
      bool
      finalize_impl() ;
      /**
       * user defined non-static method.
       */
      double
      get_start_time_impl() ;
      /**
       * user defined non-static method.
       */
      double
      get_current_time_impl() ;
      /**
       * user defined non-static method.
       */
      double
      get_end_time_impl() ;
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
      get_component_name_impl() ;
      /**
       * user defined non-static method.
       */
      int32_t
      get_input_item_count_impl() ;
      /**
       * user defined non-static method.
       */
      ::sidl::array< ::std::string>
      get_input_item_list_impl() ;
      /**
       * user defined non-static method.
       */
      int32_t
      get_output_item_count_impl() ;
      /**
       * user defined non-static method.
       */
      ::sidl::array< ::std::string>
      get_output_item_list_impl() ;
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
      int32_t
      get_grid_rank_impl (
        /* in */const ::std::string& long_var_name
      )
      ;

      /**
       * user defined non-static method.
       */
      ::sidl::array<double>
      get_grid_spacing_impl (
        /* in */const ::std::string& long_var_name
      )
      ;

      /**
       * user defined non-static method.
       */
      ::sidl::array<double>
      get_grid_origin_impl (
        /* in */const ::std::string& long_var_name
      )
      ;

      /**
       * user defined non-static method.
       */
      ::sidl::array<int32_t>
      get_grid_shape_impl (
        /* in */const ::std::string& long_var_name
      )
      ;

      /**
       * user defined non-static method.
       */
      ::sidl::array<double>
      get_grid_x_impl (
        /* in */const ::std::string& long_var_name
      )
      ;

      /**
       * user defined non-static method.
       */
      ::sidl::array<double>
      get_grid_y_impl (
        /* in */const ::std::string& long_var_name
      )
      ;

      /**
       * user defined non-static method.
       */
      ::sidl::array<double>
      get_grid_z_impl (
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

  } // end namespace model
} // end namespace csdms

// DO-NOT-DELETE splicer.begin(csdms.model.Child._hmisc)
// Insert-Code-Here {csdms.model.Child._hmisc} (miscellaneous things)
// DO-NOT-DELETE splicer.end(csdms.model.Child._hmisc)

#endif
