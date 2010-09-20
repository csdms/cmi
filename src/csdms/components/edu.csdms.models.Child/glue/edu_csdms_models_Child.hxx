// 
// File:          edu_csdms_models_Child.hxx
// Symbol:        edu.csdms.models.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Client-side glue code for edu.csdms.models.Child
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_edu_csdms_models_Child_hxx
#define included_edu_csdms_models_Child_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
// declare class before main #includes
// (this alleviates circular #include guard problems)[BUG#393]
namespace edu { 
  namespace csdms { 
    namespace models { 

      class Child;
    } // end namespace models
  } // end namespace csdms
} // end namespace edu

// Some compilers need to define array template before the specializations
namespace sidl {
  template<>
  class array< ::edu::csdms::models::Child >;
}
// 
// Forward declarations for method dependencies.
// 
namespace edu { 
  namespace csdms { 
    namespace openmi { 

      class ElementMapper;
    } // end namespace openmi
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace openmi { 

      class ElementSet;
    } // end namespace openmi
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace openmi { 

      class IElementSet;
    } // end namespace openmi
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace openmi { 

      class IValueSet;
    } // end namespace openmi
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace openmi { 

      class ScalarSet;
    } // end namespace openmi
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace ports { 

      class IRFPort;
    } // end namespace ports
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace tools { 

      class ConfigDialog;
    } // end namespace tools
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace tools { 

      class IRFPortQueue;
    } // end namespace tools
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace tools { 

      class PrintQueue;
    } // end namespace tools
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace tools { 

      class TemplateFiles;
    } // end namespace tools
  } // end namespace csdms
} // end namespace edu

namespace edu { 
  namespace csdms { 
    namespace tools { 

      class Verbose;
    } // end namespace tools
  } // end namespace csdms
} // end namespace edu

namespace gov { 
  namespace cca { 

    class CCAException;
  } // end namespace cca
} // end namespace gov

namespace gov { 
  namespace cca { 

    class Services;
  } // end namespace cca
} // end namespace gov

namespace gov { 
  namespace cca { 
    namespace ports { 

      class ParameterPortFactory;
    } // end namespace ports
  } // end namespace cca
} // end namespace gov

namespace sidl { 

  class RuntimeException;
} // end namespace sidl

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_edu_csdms_models_Child_IOR_h
#include "edu_csdms_models_Child_IOR.h"
#endif
#ifndef included_edu_csdms_openmi_ElementType_hxx
#include "edu_csdms_openmi_ElementType.hxx"
#endif
#ifndef included_edu_csdms_ports_IRFPort_hxx
#include "edu_csdms_ports_IRFPort.hxx"
#endif
#ifndef included_gov_cca_Component_hxx
#include "gov_cca_Component.hxx"
#endif
#ifndef included_gov_cca_ComponentRelease_hxx
#include "gov_cca_ComponentRelease.hxx"
#endif
#ifndef included_gov_cca_ports_GoPort_hxx
#include "gov_cca_ports_GoPort.hxx"
#endif
#ifndef included_sidl_BaseClass_hxx
#include "sidl_BaseClass.hxx"
#endif
namespace sidl {
  namespace rmi {
    class Call;
    class Return;
    class Ticket;
  }
  namespace rmi {
    class InstanceHandle;
  }
}
namespace edu { 
  namespace csdms { 
    namespace models { 

      /**
       * Symbol "edu.csdms.models.Child" (version 0.0)
       */
      class Child: public virtual ::edu::csdms::ports::IRFPort, public virtual 
        ::gov::cca::Component, public virtual ::gov::cca::ComponentRelease, 
        public virtual ::gov::cca::ports::GoPort, public virtual 
        ::sidl::BaseClass {

        //////////////////////////////////////////////////
        // 
        // Special methods for throwing exceptions
        // 

      private:
        static 
        void
        throwException1(
          const char* methodName,
          struct sidl_BaseInterface__object *_exception
        )
          // throws:
        ;
        static 
        void
        throwException0(
          const char* methodName,
          struct sidl_BaseInterface__object *_exception
        )
          // throws:
          //    ::gov::cca::CCAException
          //    ::sidl::RuntimeException
        ;

        //////////////////////////////////////////////////
        // 
        // User Defined Methods
        // 

      public:
        /**
         * user defined non-static method
         */
        void
        boccaSetServices (
          /* in */const ::gov::cca::Services& services
        )
        // throws:
        //    ::gov::cca::CCAException
        //    ::sidl::RuntimeException
        ;


        /**
         * user defined non-static method
         */
        void
        boccaReleaseServices (
          /* in */const ::gov::cca::Services& services
        )
        // throws:
        //    ::gov::cca::CCAException
        //    ::sidl::RuntimeException
        ;



        /**
         *  This function should never be called, but helps babel generate better code. 
         */
        void
        boccaForceUsePortInclude (
          /* in */const ::gov::cca::ports::ParameterPortFactory& dummy0,
          /* in */const ::edu::csdms::ports::IRFPort& dummy1,
          /* in */::edu::csdms::openmi::ElementType dummy2,
          /* in */const ::edu::csdms::tools::TemplateFiles& dummy3,
          /* in */const ::edu::csdms::tools::IRFPortQueue& dummy4,
          /* in */const ::edu::csdms::tools::Verbose& dummy5,
          /* in */const ::edu::csdms::openmi::ElementMapper& dummy6,
          /* in */const ::edu::csdms::openmi::ScalarSet& dummy7,
          /* in */const ::edu::csdms::tools::ConfigDialog& dummy8,
          /* in */const ::edu::csdms::openmi::ElementSet& dummy9,
          /* in */const ::edu::csdms::tools::PrintQueue& dummy10
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
        setServices (
          /* in */const ::gov::cca::Services& services
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
        releaseServices (
          /* in */const ::gov::cca::Services& services
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
        go() ;

        /**
         * user defined non-static method
         */
        void
        initialize (
          /* in array<string> */const ::sidl::array< ::std::string>& properties
        )
        ;


        /**
         * user defined non-static method
         */
        void
        run (
          /* in */double time
        )
        ;


        /**
         * user defined non-static method
         */
        void
        finalize() ;

        /**
         * user defined non-static method
         */
        int64_t
        getRaster_nx() ;

        /**
         * user defined non-static method
         */
        int64_t
        getRaster_ny() ;

        /**
         * user defined non-static method
         */
        double
        getRaster_dx() ;

        /**
         * user defined non-static method
         */
        double
        getRaster_dy() ;

        /**
         * user defined non-static method
         */
        double
        getRaster_ulx() ;

        /**
         * user defined non-static method
         */
        double
        getRaster_uly() ;

        /**
         * user defined non-static method
         */
        ::sidl::array<double>
        getRaster_grid (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        ::sidl::array<int32_t>
        get_raster_dimen (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        ::sidl::array<double>
        get_raster_res (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        ::sidl::basearray
        get_raster_data (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        ::sidl::array<double>
        get_time_span() ;

        /**
         * user defined non-static method
         */
        ::edu::csdms::openmi::IElementSet
        get_element_set (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        ::edu::csdms::openmi::IValueSet
        get_value_set (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        ::sidl::basearray
        get_value_set_data (
          /* in */const ::std::string& val_string
        )
        ;


        /**
         * user defined non-static method
         */
        void
        set_value_set (
          /* in */const ::std::string& val_string,
          /* in */const ::edu::csdms::openmi::IValueSet& values
        )
        ;



        //////////////////////////////////////////////////
        // 
        // End User Defined Methods
        // (everything else in this file is specific to
        //  Babel's C++ bindings)
        // 

      public:
        typedef struct edu_csdms_models_Child__object ior_t;
        typedef struct edu_csdms_models_Child__external ext_t;
        typedef struct edu_csdms_models_Child__sepv sepv_t;

        // default constructor
        Child() { }
        // static constructor
        static ::edu::csdms::models::Child _create();


#ifdef WITH_RMI

        // RMI constructor
        static ::edu::csdms::models::Child _create( /*in*/ const std::string& 
          url );

        // RMI connect
        static inline ::edu::csdms::models::Child _connect( /*in*/ const 
          std::string& url ) { 
          return _connect(url, true);
        }

        // RMI connect 2
        static ::edu::csdms::models::Child _connect( /*in*/ const std::string& 
          url, /*in*/ const bool ar  );


#endif /*WITH_RMI*/

        // default destructor
        virtual ~Child () { }

        // copy constructor
        Child ( const Child& original );

        // assignment operator
        Child& operator= ( const Child& rhs );


        protected:
        // Internal data wrapping method
        static ior_t*  _wrapObj(void* private_data);


        public:
        // conversion from ior to C++ class
        Child ( Child::ior_t* ior );

        // Alternate constructor: does not call addRef()
        // (sets d_weak_reference=isWeak)
        // For internal use by Impls (fixes bug#275)
        Child ( Child::ior_t* ior, bool isWeak );

        inline ior_t* _get_ior() const throw() {
          return reinterpret_cast< ior_t*>(d_self);
        }

        inline void _set_ior( ior_t* ptr ) throw () { 
          if(d_self == ptr) {return;}
          d_self = reinterpret_cast< void*>(ptr);

          if( ptr != NULL ) {
            gov_cca_Port_IORCache = &((*ptr).d_gov_cca_port);
            edu_csdms_ports_IRFPort_IORCache = &((
              *ptr).d_edu_csdms_ports_irfport);
            gov_cca_ComponentRelease_IORCache = &((
              *ptr).d_gov_cca_componentrelease);
            gov_cca_Component_IORCache = &((*ptr).d_gov_cca_component);
            gov_cca_ports_GoPort_IORCache = &((*ptr).d_gov_cca_ports_goport);
          } else {
            gov_cca_Port_IORCache = NULL;
            edu_csdms_ports_IRFPort_IORCache = NULL;
            gov_cca_ComponentRelease_IORCache = NULL;
            gov_cca_Component_IORCache = NULL;
            gov_cca_ports_GoPort_IORCache = NULL;
          }
        }

        virtual int _set_ior_typesafe( struct sidl_BaseInterface__object *obj,
                                       const ::std::type_info &argtype );

        bool _is_nil() const throw () { return (d_self==0); }

        bool _not_nil() const throw () { return (d_self!=0); }

        bool operator !() const throw () { return (d_self==0); }

        static inline const char * type_name() throw () { return 
          "edu.csdms.models.Child";}

        static struct edu_csdms_models_Child__object* _cast(const void* src);

        // execute member function by name
        void _exec(const std::string& methodName,
                   ::sidl::rmi::Call& inArgs,
                   ::sidl::rmi::Return& outArgs);

        /**
         * Get the URL of the Implementation of this object (for RMI)
         */
        ::std::string
        _getURL() // throws:
        //    ::sidl::RuntimeException
        ;


        /**
         * Method to enable/disable method hooks invocation.
         */
        void
        _set_hooks (
          /* in */bool enable
        )
        // throws:
        //    ::sidl::RuntimeException
        ;


        /**
         * Method to enable/disable interface contract enforcement.
         */
        void
        _set_contracts (
          /* in */bool enable,
          /* in */const ::std::string& enfFilename,
          /* in */bool resetCounters
        )
        // throws:
        //    ::sidl::RuntimeException
        ;


        /**
         * Method to dump contract enforcement statistics.
         */
        void
        _dump_stats (
          /* in */const ::std::string& filename,
          /* in */const ::std::string& prefix
        )
        // throws:
        //    ::sidl::RuntimeException
        ;

        // return true iff object is remote
        bool _isRemote() const { 
          ior_t* self = const_cast<ior_t*>(_get_ior() );
          struct sidl_BaseInterface__object *throwaway_exception;
          return (*self->d_epv->f__isRemote)(self, &throwaway_exception) == 
            TRUE;
        }

        // return true iff object is local
        bool _isLocal() const {
          return !_isRemote();
        }

      protected:
        // Pointer to external (DLL loadable) symbols (shared among instances)
        static const ext_t * s_ext;

      public:
        static const ext_t * _get_ext() throw ( ::sidl::NullIORException );

      }; // end class Child
    } // end namespace models
  } // end namespace csdms
} // end namespace edu

extern "C" {


#pragma weak edu_csdms_models_Child__connectI

  /**
   * RMI connector function for the class. (no addref)
   */
  struct edu_csdms_models_Child__object*
  edu_csdms_models_Child__connectI(const char * url, sidl_bool ar, struct 
    sidl_BaseInterface__object **_ex);


} // end extern "C"
namespace sidl {
  // traits specialization
  template<>
  struct array_traits< ::edu::csdms::models::Child > {
    typedef array< ::edu::csdms::models::Child > cxx_array_t;
    typedef ::edu::csdms::models::Child cxx_item_t;
    typedef struct edu_csdms_models_Child__array ior_array_t;
    typedef sidl_interface__array ior_array_internal_t;
    typedef struct edu_csdms_models_Child__object ior_item_t;
    typedef cxx_item_t value_type;
    typedef value_type reference;
    typedef value_type* pointer;
    typedef const value_type const_reference;
    typedef const value_type* const_pointer;
    typedef array_iter< array_traits< ::edu::csdms::models::Child > > iterator;
    typedef const_array_iter< array_traits< ::edu::csdms::models::Child > > 
      const_iterator;
  };

  // array specialization
  template<>
  class array< ::edu::csdms::models::Child >: public interface_array< 
    array_traits< ::edu::csdms::models::Child > > {
  public:
    typedef interface_array< array_traits< ::edu::csdms::models::Child > > Base;
    typedef array_traits< ::edu::csdms::models::Child >::cxx_array_t          
      cxx_array_t;
    typedef array_traits< ::edu::csdms::models::Child >::cxx_item_t           
      cxx_item_t;
    typedef array_traits< ::edu::csdms::models::Child >::ior_array_t          
      ior_array_t;
    typedef array_traits< ::edu::csdms::models::Child >::ior_array_internal_t 
      ior_array_internal_t;
    typedef array_traits< ::edu::csdms::models::Child >::ior_item_t           
      ior_item_t;

    /**
     * conversion from ior to C++ class
     * (constructor/casting operator)
     */
    array( struct edu_csdms_models_Child__array* src = 0) : Base(src) {}

    /**
     * copy constructor
     */
    array( const array< ::edu::csdms::models::Child >&src) : Base(src) {}

    /**
     * assignment
     */
    array< ::edu::csdms::models::Child >&
    operator =( const array< ::edu::csdms::models::Child >&rhs ) { 
      if (d_array != rhs._get_baseior()) {
        if (d_array) deleteRef();
        d_array = const_cast<sidl__array *>(rhs._get_baseior());
        if (d_array) addRef();
      }
      return *this;
    }

  };
}

#ifndef included_edu_csdms_openmi_ElementMapper_hxx
#include "edu_csdms_openmi_ElementMapper.hxx"
#endif
#ifndef included_edu_csdms_openmi_ElementSet_hxx
#include "edu_csdms_openmi_ElementSet.hxx"
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
#ifndef included_gov_cca_Services_hxx
#include "gov_cca_Services.hxx"
#endif
#ifndef included_gov_cca_ports_ParameterPortFactory_hxx
#include "gov_cca_ports_ParameterPortFactory.hxx"
#endif
#endif
