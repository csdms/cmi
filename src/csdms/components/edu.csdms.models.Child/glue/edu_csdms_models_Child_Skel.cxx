// 
// File:          edu_csdms_models_Child_Skel.cxx
// Symbol:        edu.csdms.models.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side glue code for edu.csdms.models.Child
// 
// WARNING: Automatically generated; changes will be lost
// 
// 
#ifndef included_edu_csdms_models_Child_Impl_hxx
#include "edu_csdms_models_Child_Impl.hxx"
#endif
#ifndef included_edu_csdms_models_Child_IOR_h
#include "edu_csdms_models_Child_IOR.h"
#endif
#ifndef included_sidl_BaseException_hxx
#include "sidl_BaseException.hxx"
#endif
#ifndef included_sidl_LangSpecificException_hxx
#include "sidl_LangSpecificException.hxx"
#endif
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
#include "sidl_String.h"
#include <stddef.h>
#include <cstring>

extern "C" {

  static void
  skel_edu_csdms_models_Child_boccaSetServices( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ struct 
    gov_cca_Services__object* services, sidl_BaseInterface__object ** 
    _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::gov::cca::Services  _local_services(services);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->boccaSetServices_impl( /* in */ _local_services );
    } catch ( ::sidl::BaseException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for boccaSetServices.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static void
  skel_edu_csdms_models_Child_boccaReleaseServices( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ struct 
    gov_cca_Services__object* services, sidl_BaseInterface__object ** 
    _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::gov::cca::Services  _local_services(services);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->boccaReleaseServices_impl( /* in */ _local_services );
    } catch ( ::sidl::BaseException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for boccaReleaseServices.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static void
  skel_edu_csdms_models_Child_boccaForceUsePortInclude( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ struct 
    gov_cca_ports_ParameterPortFactory__object* dummy0,/* in */ struct 
    edu_csdms_ports_IRFPort__object* dummy1,/* in */ int64_t dummy2,/* in */ 
    struct edu_csdms_tools_TemplateFiles__object* dummy3,/* in */ struct 
    edu_csdms_tools_IRFPortQueue__object* dummy4,/* in */ struct 
    edu_csdms_tools_Verbose__object* dummy5,/* in */ struct 
    edu_csdms_openmi_ElementMapper__object* dummy6,/* in */ struct 
    edu_csdms_openmi_ScalarSet__object* dummy7,/* in */ struct 
    edu_csdms_tools_ConfigDialog__object* dummy8,/* in */ struct 
    edu_csdms_openmi_ElementSet__object* dummy9,/* in */ struct 
    edu_csdms_tools_PrintQueue__object* dummy10, sidl_BaseInterface__object ** 
    _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::gov::cca::ports::ParameterPortFactory  _local_dummy0(dummy0);
    ::edu::csdms::ports::IRFPort  _local_dummy1(dummy1);
    ::edu::csdms::tools::TemplateFiles  _local_dummy3(dummy3);
    ::edu::csdms::tools::IRFPortQueue  _local_dummy4(dummy4);
    ::edu::csdms::tools::Verbose  _local_dummy5(dummy5);
    ::edu::csdms::openmi::ElementMapper  _local_dummy6(dummy6);
    ::edu::csdms::openmi::ScalarSet  _local_dummy7(dummy7);
    ::edu::csdms::tools::ConfigDialog  _local_dummy8(dummy8);
    ::edu::csdms::openmi::ElementSet  _local_dummy9(dummy9);
    ::edu::csdms::tools::PrintQueue  _local_dummy10(dummy10);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->boccaForceUsePortInclude_impl( /* in */ _local_dummy0, /* in */ 
        _local_dummy1, /* in */ (::edu::csdms::openmi::ElementType)dummy2, /* 
        in */ _local_dummy3, /* in */ _local_dummy4, /* in */ _local_dummy5, /* 
        in */ _local_dummy6, /* in */ _local_dummy7, /* in */ _local_dummy8, /* 
        in */ _local_dummy9, /* in */ _local_dummy10 );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for boccaForceUsePortInclude.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static void
  skel_edu_csdms_models_Child_setServices( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ struct 
    gov_cca_Services__object* services, sidl_BaseInterface__object ** 
    _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::gov::cca::Services  _local_services(services);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->setServices_impl( /* in */ _local_services );
    } catch ( ::sidl::BaseException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for setServices.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static void
  skel_edu_csdms_models_Child_releaseServices( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ struct 
    gov_cca_Services__object* services, sidl_BaseInterface__object ** 
    _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::gov::cca::Services  _local_services(services);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->releaseServices_impl( /* in */ _local_services );
    } catch ( ::sidl::BaseException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for releaseServices.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static int32_t
  skel_edu_csdms_models_Child_go( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    int32_t _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->go_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for go.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static void
  skel_edu_csdms_models_Child_initialize( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in array<string> */ 
    struct sidl_string__array* properties, sidl_BaseInterface__object ** 
    _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::sidl::array< ::std::string> _local_properties(properties);
    if (properties) {
      _local_properties.addRef();
     }
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->initialize_impl( /* in array<string> */ _local_properties );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for initialize.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static void
  skel_edu_csdms_models_Child_run( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ double time, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->run_impl( /* in */ time );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for run.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static void
  skel_edu_csdms_models_Child_finalize( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->finalize_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for finalize.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

  static int64_t
  skel_edu_csdms_models_Child_getRaster_nx( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    int64_t _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->getRaster_nx_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_nx.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static int64_t
  skel_edu_csdms_models_Child_getRaster_ny( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    int64_t _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->getRaster_ny_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_ny.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static double
  skel_edu_csdms_models_Child_getRaster_dx( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    double _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->getRaster_dx_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_dx.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static double
  skel_edu_csdms_models_Child_getRaster_dy( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    double _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->getRaster_dy_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_dy.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static double
  skel_edu_csdms_models_Child_getRaster_ulx( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    double _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->getRaster_ulx_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_ulx.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static double
  skel_edu_csdms_models_Child_getRaster_uly( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    double _result = 0;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _result = _this->getRaster_uly_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_uly.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup

    return _result;
  }

  static struct sidl_double__array*
  skel_edu_csdms_models_Child_getRaster_grid( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct sidl_double__array* _result = 0;
    ::sidl::array<double> _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->getRaster_grid_impl( /* in */ _local_val_string );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for getRaster_grid.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = _local_result._get_ior();
    return _result;
  }

  static struct sidl_int__array*
  skel_edu_csdms_models_Child_get_raster_dimen( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct sidl_int__array* _result = 0;
    ::sidl::array<int32_t> _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_raster_dimen_impl( /* in */ _local_val_string 
        );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_raster_dimen.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = _local_result._get_ior();
    return _result;
  }

  static struct sidl_double__array*
  skel_edu_csdms_models_Child_get_raster_res( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct sidl_double__array* _result = 0;
    ::sidl::array<double> _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_raster_res_impl( /* in */ _local_val_string );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_raster_res.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = _local_result._get_ior();
    return _result;
  }

  static struct sidl__array*
  skel_edu_csdms_models_Child_get_raster_data( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct sidl__array* _result = 0;
    ::sidl::basearray _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_raster_data_impl( /* in */ _local_val_string );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_raster_data.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = _local_result._get_baseior();
    return _result;
  }

  static struct sidl_double__array*
  skel_edu_csdms_models_Child_get_time_span( 
  /* in */ struct edu_csdms_models_Child__object* self, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct sidl_double__array* _result = 0;
    ::sidl::array<double> _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_time_span_impl(  );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_time_span.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = _local_result._get_ior();
    return _result;
  }

  static struct edu_csdms_openmi_IElementSet__object*
  skel_edu_csdms_models_Child_get_element_set( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct edu_csdms_openmi_IElementSet__object* _result = 0;
    ::edu::csdms::openmi::IElementSet _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_element_set_impl( /* in */ _local_val_string );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_element_set.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = (struct edu_csdms_openmi_IElementSet__object*) 
      _local_result.::edu::csdms::openmi::IElementSet::_get_ior();
    return _result;
  }

  static struct edu_csdms_openmi_IValueSet__object*
  skel_edu_csdms_models_Child_get_value_set( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct edu_csdms_openmi_IValueSet__object* _result = 0;
    ::edu::csdms::openmi::IValueSet _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_value_set_impl( /* in */ _local_val_string );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_value_set.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = (struct edu_csdms_openmi_IValueSet__object*) 
      _local_result.::edu::csdms::openmi::IValueSet::_get_ior();
    return _result;
  }

  static struct sidl__array*
  skel_edu_csdms_models_Child_get_value_set_data( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string, sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    struct sidl__array* _result = 0;
    ::sidl::basearray _local_result;
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _local_result = _this->get_value_set_data_impl( /* in */ 
        _local_val_string );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for get_value_set_data.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

      return _result;
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

      return _result;
    }
    // unpack results and cleanup
    if ( _local_result._not_nil() ) {
      _local_result.addRef();
    }
    _result = _local_result._get_baseior();
    return _result;
  }

  static void
  skel_edu_csdms_models_Child_set_value_set( 
  /* in */ struct edu_csdms_models_Child__object* self, /* in */ const char* 
    val_string,/* in */ struct edu_csdms_openmi_IValueSet__object* values, 
    sidl_BaseInterface__object ** _exception )
  {
    // pack args to dispatch to impl
    ::edu::csdms::models::Child_impl *_this = reinterpret_cast< 
      ::edu::csdms::models::Child_impl*>(self->d_data);
    ::std::string _local_val_string = ( val_string ? val_string: "" );
    ::edu::csdms::openmi::IValueSet  _local_values(values);
    *_exception = 0;//init just to be safe

    // dispatch to impl
    try { 
      _this->set_value_set_impl( /* in */ _local_val_string, /* in */ 
        _local_values );
    } catch ( ::sidl::RuntimeException _ex ) { 
      sidl_BaseInterface _throwaway_exception;
      (_ex._get_ior()->d_epv->f_add) (_ex._get_ior()->d_object,  __FILE__, __LINE__,"C++ skeleton for set_value_set.", &_throwaway_exception);
      _ex.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _ex._get_ior());

    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      sidl_BaseInterface _throwaway_exception;
      (_unexpected._get_ior()->d_epv->f_setNote) (_unexpected._get_ior(),
        "Unexpected C++ exception", &_throwaway_exception);
      _unexpected.addRef();
      *_exception = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());

    }
    // unpack results and cleanup

  }

#ifdef WITH_RMI
  struct edu_csdms_tools_TemplateFiles__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_tools_TemplateFiles(const 
    char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_tools_TemplateFiles__connectI(url, ar, _ex);
  }

  struct edu_csdms_tools_PrintQueue__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_tools_PrintQueue(const char* 
    url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_tools_PrintQueue__connectI(url, ar, _ex);
  }

  struct sidl_BaseInterface__object* 
    skel_edu_csdms_models_Child_fconnect_sidl_BaseInterface(const char* url, 
    sidl_bool ar, sidl_BaseInterface *_ex) { 
    return sidl_BaseInterface__connectI(url, ar, _ex);
  }

  struct edu_csdms_tools_IRFPortQueue__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_tools_IRFPortQueue(const 
    char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_tools_IRFPortQueue__connectI(url, ar, _ex);
  }

  struct gov_cca_ports_ParameterPortFactory__object* 
    skel_edu_csdms_models_Child_fconnect_gov_cca_ports_ParameterPortFactory(
    const char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return gov_cca_ports_ParameterPortFactory__connectI(url, ar, _ex);
  }

  struct edu_csdms_openmi_IValueSet__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_openmi_IValueSet(const char* 
    url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_openmi_IValueSet__connectI(url, ar, _ex);
  }

  struct edu_csdms_tools_ConfigDialog__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_tools_ConfigDialog(const 
    char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_tools_ConfigDialog__connectI(url, ar, _ex);
  }

  struct gov_cca_Services__object* 
    skel_edu_csdms_models_Child_fconnect_gov_cca_Services(const char* url, 
    sidl_bool ar, sidl_BaseInterface *_ex) { 
    return gov_cca_Services__connectI(url, ar, _ex);
  }

  struct edu_csdms_openmi_ElementMapper__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_openmi_ElementMapper(const 
    char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_openmi_ElementMapper__connectI(url, ar, _ex);
  }

  struct edu_csdms_ports_IRFPort__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_ports_IRFPort(const char* 
    url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_ports_IRFPort__connectI(url, ar, _ex);
  }

  struct edu_csdms_tools_Verbose__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_tools_Verbose(const char* 
    url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_tools_Verbose__connectI(url, ar, _ex);
  }

  struct edu_csdms_openmi_ScalarSet__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_openmi_ScalarSet(const char* 
    url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_openmi_ScalarSet__connectI(url, ar, _ex);
  }

  struct edu_csdms_openmi_ElementSet__object* 
    skel_edu_csdms_models_Child_fconnect_edu_csdms_openmi_ElementSet(const 
    char* url, sidl_bool ar, sidl_BaseInterface *_ex) { 
    return edu_csdms_openmi_ElementSet__connectI(url, ar, _ex);
  }

#endif /*WITH_RMI*/
  void
  edu_csdms_models_Child__call_load(void) 
    {::edu::csdms::models::Child_impl::_load();}

  static void
  skel_edu_csdms_models_Child__ctor(struct edu_csdms_models_Child__object* self,
    struct sidl_BaseInterface__object **_ex ) { 
    try {
      self->d_data = reinterpret_cast< void*>(new 
        ::edu::csdms::models::Child_impl(self));
    } catch ( ::sidl::RuntimeException _exc ) {
      sidl_BaseInterface _throwaway_exception;
      (_exc._get_ior()->d_epv->f_add) (_exc._get_ior()->d_object, __FILE__, __LINE__," C++ skeleton for _ctor.", &_throwaway_exception);
      _exc.addRef();
      *_ex = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _exc._get_ior());
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = 
        ::sidl::LangSpecificException::_create();
      _unexpected.setNote("Unexpected C++ exception in _ctor.");
      _unexpected.addRef();
      *_ex = reinterpret_cast< struct sidl_BaseInterface__object * >(
        _unexpected._get_ior());
    }
  }

  static void
  skel_edu_csdms_models_Child__ctor2(struct edu_csdms_models_Child__object* 
    self, void* private_data, struct sidl_BaseInterface__object **_ex ) { 
    *_ex = NULL;
  }

  static void
  skel_edu_csdms_models_Child__dtor(struct edu_csdms_models_Child__object* self,
    struct sidl_BaseInterface__object **_ex ) { 
    try {
      ::edu::csdms::models::Child_impl* loc_data = reinterpret_cast< 
        ::edu::csdms::models::Child_impl*>(self->d_data);
      if(!loc_data->_isWrapped()) {
        delete (loc_data);
      }
    } catch ( ::sidl::RuntimeException _exc ) {
      sidl_BaseInterface _throwaway_exception;
      (_exc._get_ior()->d_epv->f_add) (_exc._get_ior()->d_object, __FILE__, __LINE__," C++ skeleton for _dtor.", &_throwaway_exception);
      _exc.addRef();
      *_ex = reinterpret_cast< struct sidl_BaseInterface__object * >(_exc._get_ior());
    } catch (...) {
      // Convert all other exceptions to LangSpecific
      ::sidl::LangSpecificException _unexpected = ::sidl::LangSpecificException::_create();
      _unexpected.setNote("Unexpected C++ exception in _dtor.");
      _unexpected.addRef();
      *_ex = reinterpret_cast< struct sidl_BaseInterface__object * >(_unexpected._get_ior());
    }
  }

  void
  edu_csdms_models_Child__set_epv(struct edu_csdms_models_Child__epv *epv,
  struct edu_csdms_models_Child__pre_epv *pre_epv, struct edu_csdms_models_Child__post_epv *post_epv){
    // initialize builtin methods
    epv->f__ctor = skel_edu_csdms_models_Child__ctor;
    epv->f__ctor2 = skel_edu_csdms_models_Child__ctor2;
    epv->f__dtor = skel_edu_csdms_models_Child__dtor;
    // initialize local methods
    pre_epv->f_boccaSetServices_pre = NULL;
    epv->f_boccaSetServices = skel_edu_csdms_models_Child_boccaSetServices;
    post_epv->f_boccaSetServices_post = NULL;
    pre_epv->f_boccaReleaseServices_pre = NULL;
    epv->f_boccaReleaseServices = skel_edu_csdms_models_Child_boccaReleaseServices;
    post_epv->f_boccaReleaseServices_post = NULL;
    pre_epv->f_boccaForceUsePortInclude_pre = NULL;
    epv->f_boccaForceUsePortInclude = skel_edu_csdms_models_Child_boccaForceUsePortInclude;
    post_epv->f_boccaForceUsePortInclude_post = NULL;
    pre_epv->f_setServices_pre = NULL;
    epv->f_setServices = skel_edu_csdms_models_Child_setServices;
    post_epv->f_setServices_post = NULL;
    pre_epv->f_releaseServices_pre = NULL;
    epv->f_releaseServices = skel_edu_csdms_models_Child_releaseServices;
    post_epv->f_releaseServices_post = NULL;
    pre_epv->f_go_pre = NULL;
    epv->f_go = skel_edu_csdms_models_Child_go;
    post_epv->f_go_post = NULL;
    pre_epv->f_initialize_pre = NULL;
    epv->f_initialize = skel_edu_csdms_models_Child_initialize;
    post_epv->f_initialize_post = NULL;
    pre_epv->f_run_pre = NULL;
    epv->f_run = skel_edu_csdms_models_Child_run;
    post_epv->f_run_post = NULL;
    pre_epv->f_finalize_pre = NULL;
    epv->f_finalize = skel_edu_csdms_models_Child_finalize;
    post_epv->f_finalize_post = NULL;
    pre_epv->f_getRaster_nx_pre = NULL;
    epv->f_getRaster_nx = skel_edu_csdms_models_Child_getRaster_nx;
    post_epv->f_getRaster_nx_post = NULL;
    pre_epv->f_getRaster_ny_pre = NULL;
    epv->f_getRaster_ny = skel_edu_csdms_models_Child_getRaster_ny;
    post_epv->f_getRaster_ny_post = NULL;
    pre_epv->f_getRaster_dx_pre = NULL;
    epv->f_getRaster_dx = skel_edu_csdms_models_Child_getRaster_dx;
    post_epv->f_getRaster_dx_post = NULL;
    pre_epv->f_getRaster_dy_pre = NULL;
    epv->f_getRaster_dy = skel_edu_csdms_models_Child_getRaster_dy;
    post_epv->f_getRaster_dy_post = NULL;
    pre_epv->f_getRaster_ulx_pre = NULL;
    epv->f_getRaster_ulx = skel_edu_csdms_models_Child_getRaster_ulx;
    post_epv->f_getRaster_ulx_post = NULL;
    pre_epv->f_getRaster_uly_pre = NULL;
    epv->f_getRaster_uly = skel_edu_csdms_models_Child_getRaster_uly;
    post_epv->f_getRaster_uly_post = NULL;
    pre_epv->f_getRaster_grid_pre = NULL;
    epv->f_getRaster_grid = skel_edu_csdms_models_Child_getRaster_grid;
    post_epv->f_getRaster_grid_post = NULL;
    pre_epv->f_get_raster_dimen_pre = NULL;
    epv->f_get_raster_dimen = skel_edu_csdms_models_Child_get_raster_dimen;
    post_epv->f_get_raster_dimen_post = NULL;
    pre_epv->f_get_raster_res_pre = NULL;
    epv->f_get_raster_res = skel_edu_csdms_models_Child_get_raster_res;
    post_epv->f_get_raster_res_post = NULL;
    pre_epv->f_get_raster_data_pre = NULL;
    epv->f_get_raster_data = skel_edu_csdms_models_Child_get_raster_data;
    post_epv->f_get_raster_data_post = NULL;
    pre_epv->f_get_time_span_pre = NULL;
    epv->f_get_time_span = skel_edu_csdms_models_Child_get_time_span;
    post_epv->f_get_time_span_post = NULL;
    pre_epv->f_get_element_set_pre = NULL;
    epv->f_get_element_set = skel_edu_csdms_models_Child_get_element_set;
    post_epv->f_get_element_set_post = NULL;
    pre_epv->f_get_value_set_pre = NULL;
    epv->f_get_value_set = skel_edu_csdms_models_Child_get_value_set;
    post_epv->f_get_value_set_post = NULL;
    pre_epv->f_get_value_set_data_pre = NULL;
    epv->f_get_value_set_data = skel_edu_csdms_models_Child_get_value_set_data;
    post_epv->f_get_value_set_data_post = NULL;
    pre_epv->f_set_value_set_pre = NULL;
    epv->f_set_value_set = skel_edu_csdms_models_Child_set_value_set;
    post_epv->f_set_value_set_post = NULL;
  }


} // end extern "C"
