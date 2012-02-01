! 
! File:          edu_csdms_models_MACROMS_Impl.F90
! Symbol:        edu.csdms.models.MACROMS-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side implementation for edu.csdms.models.MACROMS
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 


! 
! Symbol "edu.csdms.models.MACROMS" (version 0.0)
! 


#include "sidl_NotImplementedException_fAbbrev.h"
#include "edu_csdms_ports_CMIPort_fAbbrev.h"
#include "edu_csdms_tools_TemplateFiles_fAbbrev.h"
#include "gov_cca_Port_fAbbrev.h"
#include "sidl_ClassInfo_fAbbrev.h"
#include "sidl_BaseClass_fAbbrev.h"
#include "edu_csdms_tools_PrintQueue_fAbbrev.h"
#include "edu_csdms_openmi_IScalarSet_fAbbrev.h"
#include "gov_cca_Component_fAbbrev.h"
#include "sidl_BaseInterface_fAbbrev.h"
#include "edu_csdms_tools_IRFPortQueue_fAbbrev.h"
#include "gov_cca_ports_ParameterPortFactory_fAbbrev.h"
#include "sidl_BaseException_fAbbrev.h"
#include "edu_csdms_models_MACROMS_fAbbrev.h"
#include "edu_csdms_tools_ConfigDialog_fAbbrev.h"
#include "gov_cca_CCAException_fAbbrev.h"
#include "sidl_RuntimeException_fAbbrev.h"
#include "gov_cca_Services_fAbbrev.h"
#include "edu_csdms_tools_Verbose_fAbbrev.h"
#include "gov_cca_ComponentRelease_fAbbrev.h"
#include "edu_csdms_openmi_ScalarSet_fAbbrev.h"
#include "edu_csdms_openmi_ValueSet_fAbbrev.h"
#include "gov_cca_ports_GoPort_fAbbrev.h"
#include "sidl_double_fAbbrev.h"
#include "sidl_int_fAbbrev.h"
#include "sidl_string_fAbbrev.h"
! DO-NOT-DELETE splicer.begin(_miscellaneous_code_start)

! Insert-UserDecl-Here 
 
#include "gov_cca_TypeMap_fAbbrev.h"
#include "sidl_SIDLException_fAbbrev.h"

! Bocca generated code. bocca.protected.begin(_miscellaneous_code_start)


! bocca_update_exception. Used only in implementing BOCCA_SIDL_CHECK_F90
        logical function bue_edu_csdms_models_MACROMS(except, meth, lin) RESULT(bue)
        use sidl
        use sidl_BaseInterface
        use sidl_RuntimeException
        implicit none
        type(sidl_BaseInterface_t) :: except, etmp
        type(sidl_RuntimeException_t) :: rex
!       logical bue
        integer lin
        character (LEN=*) meth, myfilename
        parameter(myfilename='edu_csdms_models_MACROMS_Impl.F90')

        bue = .false.
        if ( not_null(except) ) then
          bue = .true.
          call cast(except, rex, etmp)
          if (not_null(rex)) then
             call add(rex, myfilename, 0_sidl_int, meth, etmp)
             call deleteRef(rex, etmp)
          endif
        endif
        return
        end

! Exit statement not normally reached (or needed) unless BOCCA_SIDL_CHECK_F90
! is used and finds an exception. 
#define BOCCAEXIT 20331

! Any method using BOCCA_SIDL_CHECK_F90 must start user code with BOCCA_EXTERNAL
! or equivalent. If the result of this macro is a line too long, the
! f90 user will have to put the equivalent in manually unless their freeform f90
! compiler supports unlimited length lines (e.g. -ffree-line-length-none).
#define BOCCA_EXTERNAL \
   external bue_edu_csdms_models_MACROMS ; \
   logical bue_edu_csdms_models_MACROMS

! call BOCCA_SIDL_CLEAR_F90(except)
#define BOCCA_SIDL_CLEAR_F90(except) \
  boccaClearException(self,except)

! BOCCA_SIDL_CHECK_F90(ex,methodandmessagestring) to jump to exit if
! exception ex was thrown. See SIDL_CHECK documentation for C in babel.
#define BOCCA_SIDL_CHECK_F90(except,method) \
  if ( bue_edu_csdms_models_MACROMS(except, method) ) goto BOCCAEXIT

! call BOCCA_SIDL_THROW_F90(except, messagestring) 
! generate new exception and jump to exit. See SIDL_THROW doc for C in babel.
#define BOCCA_SIDL_THROW_F90(except, messagestring) \
  boccaThrowException(self, messagestring, except); \
  goto BOCCAEXIT

        
! Bocca generated code. bocca.protected.end(_miscellaneous_code_start)

! or  Insert-UserDecl-Here 

! DO-NOT-DELETE splicer.end(_miscellaneous_code_start)




! 
! Method:  _ctor[]
! Class constructor called when the class is created.
! 

recursive subroutine MACROMS__ctorw2_fmcs1cr6gif1_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._ctor.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS._ctor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._ctor.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._ctor)

! Insert-UserDecl-Here

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.MACROMS._ctor)
  ! Access private data
  type(edu_csdms_models_MACROMS_wrap) :: dp
  ! Allocate memory and initialize
  allocate(dp%d_private_data) ! crash if out of memory
  call set_null(dp%d_private_data%d_services)
! Insert-UserCode-Here

  call edu_csdms_models_MACROMS__set_data_m(self, dp)
#ifdef _BOCCA_STDERR
    write(*, *) 'CTOR edu.csdms.models.MACROMS: F90 allocated'
#endif
! bocca-default-code. User may edit or delete.end(edu.csdms.models.MACROMS._ctor)


! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._ctor)
end subroutine MACROMS__ctorw2_fmcs1cr6gif1_mi


! 
! Method:  _ctor2[]
! Special Class constructor called when the user wants to wrap his own private data.
! 

recursive subroutine MACROMS__ctor2hcznd4ih4ph6hp_mi(self, private_data,       &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._ctor2.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS._ctor2.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._ctor2.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(edu_csdms_models_MACROMS_wrap) :: private_data
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._ctor2)
! Insert-Code-Here {edu.csdms.models.MACROMS._ctor2} (_ctor2 method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS._ctor2)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS._ctor2)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._ctor2)
end subroutine MACROMS__ctor2hcznd4ih4ph6hp_mi


! 
! Method:  _dtor[]
! Class destructor called when the class is deleted.
! 

recursive subroutine MACROMS__dtorolrf99kohx6hwku_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._dtor.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS._dtor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._dtor.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._dtor)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.MACROMS._dtor)
  ! Access private data
  type(edu_csdms_models_MACROMS_wrap) :: dp
  ! Insert-UserDecl-Here 

  call edu_csdms_models_MACROMS__get_data_m(self,dp)

  ! Insert-UserCode-Here 

#ifdef _BOCCA_STDERR
    write(*, *) 'DTOR edu.csdms.models.MACROMS: F90 deallocating'
#endif
  deallocate(dp%d_private_data)
! bocca-default-code. User may edit or delete.end(edu.csdms.models.MACROMS._dtor)

  ! Insert-UserCode-Here , alternatively

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._dtor)
end subroutine MACROMS__dtorolrf99kohx6hwku_mi


! 
! Method:  _load[]
! Static class initializer called exactly once before any user-defined method is dispatched
! 

recursive subroutine MACROMS__loadsde3rguhqp0a4cl_mi(exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._load.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS._load.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._load.use)
  implicit none
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS._load)
! Insert-Code-Here {edu.csdms.models.MACROMS._load} (_load method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS._load)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS._load)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS._load)
end subroutine MACROMS__loadsde3rguhqp0a4cl_mi


! 
! Method:  boccaSetServices[]
! 

recursive subroutine M_boccaSetServicesgf8z0susz4_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaSetServices.use)
  use gov_cca_ComponentRelease
  use gov_cca_TypeMap
  use gov_cca_Port
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaSetServices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaSetServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.boccaSetServices)
  
  type(edu_csdms_models_MACROMS_wrap) :: dp
  type(SIDL_BaseInterface_t) :: throwaway 
  type(gov_cca_ComponentRelease_t) :: cr
  logical dr_services, dr_port, dr_cr, dr_typeMap

  type(gov_cca_TypeMap_t)    :: typeMap 
  type(gov_cca_Port_t)       :: port

  BOCCA_EXTERNAL
  ! not crashing if something fails requires good bookkeeping and exception handling.
  dr_services= .false. 
  dr_port= .false. 
  dr_cr= .false. 

  ! Access private data
  call edu_csdms_models_MACROMS__get_data_m(self, dp)
  ! Set my reference to the services handle
  dp%d_private_data%d_services = services
  ! Increment reference count for the services subroutine parameter
  call addRef(services, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS failed addref(services)')
  dr_services = .true.


  call createTypeMap(dp%d_private_data%d_services, typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS failed to createTypeMap')

  dr_port = .false.
  call cast(self, port, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS is not Port')
  dr_port = .true.

! Add gov.cca.ports.GoPort:Run provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'Run', 'gov.cca.ports.GoPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS failed addProvidesPort Run ')

! Add edu.csdms.ports.CMIPort:Ocean provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'Ocean', 'edu.csdms.ports.CMIPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS failed addProvidesPort Ocean ')

  dr_port = .false.
  call deleteRef(port,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS failed deleteRef(port)')

! Register gov.cca.ports.ParameterPortFactory:ppf uses port
  call registerUsesPort(dp%d_private_data%d_services, &
      'ppf', 'gov.cca.ports.ParameterPortFactory', &
      typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS failed registerUsesPort ppf')

  dr_typeMap = .false.
  call deleteRef(typeMap,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS.boccaSetServices: failed deleteRef(typeMap)')

! Register component edu.csdms.models.MACROMS for release by the framework 
  call cast(self, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS.boccaSetServices: is not ComponentRelease')
  call registerForRelease(dp%d_private_data%d_services, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS.boccaSetServices: failed registerForRelease')
  call deleteRef(cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.MACROMS.boccaSetServices: failed deleteRef(cr)')
  return
   
BOCCAEXIT   continue
  if (dr_services) then
      call deleteRef(services, throwaway)
      call BOCCA_SIDL_CLEAR_F90(throwaway)
  endif
  if (dr_cr) then
      call deleteRef(cr, throwaway)
      call BOCCA_SIDL_CLEAR_F90(throwaway)
  endif

  if (dr_port) then
      call deleteRef(port, throwaway)
      call BOCCA_SIDL_CLEAR_F90(throwaway)
  endif
  if (dr_typeMap) then
      call deleteRef(typeMap, throwaway)
      call BOCCA_SIDL_CLEAR_F90(throwaway)
  endif

   return
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.boccaSetServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaSetServices)
end subroutine M_boccaSetServicesgf8z0susz4_mi


! 
! Method:  boccaReleaseServices[]
! 

recursive subroutine boccaReleaseServic3xww5hxvm0_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaReleaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.boccaReleaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaReleaseServices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaReleaseServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.boccaReleaseServices)
  type(edu_csdms_models_MACROMS_wrap) :: dp
  type(SIDL_BaseInterface_t) :: excpt, throwaway
! trap and optionally print all port-related exceptions. ignore others.

! Access private data
  BOCCA_EXTERNAL
  call edu_csdms_models_MACROMS__get_data_m(self, dp)
  call deleteRef(dp%d_private_data%d_services, throwaway)
  call set_null(dp%d_private_data%d_services)
  call BOCCA_SIDL_CLEAR_F90(throwaway)

! Un-provide gov.cca.ports.GoPort port with port name Run 
  call removeProvidesPort(services, 'Run', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort Run', &
      .false., throwaway &
  )

! Un-provide edu.csdms.ports.CMIPort port with port name Ocean 
  call removeProvidesPort(services, 'Ocean', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort Ocean', &
      .false., throwaway &
  )

! Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  call unregisterUsesPort(services, 'ppf', excpt)
  call checkException(self, excpt,  &
       'Error calling unregisterUsesPort ppf', &
       .false., throwaway &
  )

  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.boccaReleaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaReleaseServices)
end subroutine boccaReleaseServic3xww5hxvm0_mi


! 
! Method:  checkException[]
! 

recursive subroutine MAC_checkException2uv3fh9rb4_mi(self, excpt, msg, fatal,  &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.checkException.use)
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.checkException.use)
  use sidl_BaseException
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.checkException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.checkException.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: excpt
  ! inout
  character (len=*) :: msg
  ! in
  logical :: fatal
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.checkException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.checkException)

  type(sidl_BaseInterface_t) :: throwaway  ! unused exception
  type(sidl_BaseException_t) :: be
  character (LEN=4096) val

  if (not_null(excpt)) then
#ifdef _BOCCA_STDERR
    write(*, *) 'edu.csdms.models.MACROMS: ', msg
    write(*, *) 'Exception was: '
    call cast(excpt, be, throwaway)
    call BOCCA_SIDL_CLEAR_F90(throwaway)
    if (not_null(be)) then
      call getNote(be, val, throwaway)
      call BOCCA_SIDL_CLEAR_F90(throwaway)
      write(*,*) val
      call deleteRef(be, throwaway)
      call BOCCA_SIDL_CLEAR_F90(throwaway)
      call BOCCA_SIDL_CLEAR_F90(excpt)
    endif
#endif
    if (fatal) stop 'edu.csdms.models.MACROMS.checkException called with fatal .true.'
  end if
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.checkException)
    
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.checkException)
end subroutine MAC_checkException2uv3fh9rb4_mi


! 
! Method:  boccaClearException[]
! 

recursive subroutine boccaClearExceptiom5ggz5ebxe_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaClearException.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.boccaClearException.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaClearException.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaClearException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.boccaClearException)
        type(sidl_BaseInterface_t) :: etmp
        if (not_null(exception)) then
            call deleteRef(exception, etmp)
        endif
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.boccaClearException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaClearException)
end subroutine boccaClearExceptiom5ggz5ebxe_mi


! 
! Method:  boccaThrowException[]
! 

recursive subroutine boccaThrowExceptiostis55idzh_mi(self, message, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaThrowException.use)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.boccaThrowException.use)
        use sidl_SIDLException
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.boccaThrowException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaThrowException.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: message
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaThrowException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.boccaThrowException)
        type (sidl_BaseInterface_t) :: except
        type (sidl_SIDLException_t) :: einst
        character (LEN=*) myfilename
        parameter(myfilename='edu_csdms_models_MACROMS_Impl.F90')
        call new(einst, except)
        ! clear except here?
        call add(einst, myfilename, 0_sidl_int, message, except)
        ! clear except here?
        call cast(einst, exception, except)
        call deleteRef(einst,except)
        ! clear except here?
        return
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.boccaThrowException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaThrowException)
end subroutine boccaThrowExceptiostis55idzh_mi


! 
! Method:  boccaForceUsePortInclude[]
!  This function should never be called, but helps babel generate better code. 
! 

recursive subroutine boccaForceUsePortIwd5km1vxx9_mi(self, dummy0, dummy1,     &
  dummy2, dummy3, dummy4, dummy5, dummy6, dummy7, dummy8, dummy9, exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IScalarSet
  use edu_csdms_ports_CMIPort
  use gov_cca_ports_ParameterPortFactory
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_openmi_ScalarSet
  use edu_csdms_openmi_ValueSet
  use edu_csdms_tools_ConfigDialog
  use edu_csdms_tools_IRFPortQueue
  use edu_csdms_tools_PrintQueue
  use edu_csdms_tools_TemplateFiles
  use edu_csdms_tools_Verbose
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaForceUsePortInclude.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.boccaForceUsePortInclude.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaForceUsePortInclude.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(gov_cca_ports_ParameterPortFactory_t) :: dummy0
  ! in
  type(edu_csdms_tools_TemplateFiles_t) :: dummy1
  ! in
  type(edu_csdms_tools_IRFPortQueue_t) :: dummy2
  ! in
  type(edu_csdms_tools_Verbose_t) :: dummy3
  ! in
  type(edu_csdms_openmi_ValueSet_t) :: dummy4
  ! in
  type(edu_csdms_ports_CMIPort_t) :: dummy5
  ! in
  type(edu_csdms_openmi_ScalarSet_t) :: dummy6
  ! in
  type(edu_csdms_tools_ConfigDialog_t) :: dummy7
  ! in
  type(edu_csdms_openmi_IScalarSet_t) :: dummy8
  ! in
  type(edu_csdms_tools_PrintQueue_t) :: dummy9
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.boccaForceUsePortInclude)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.boccaForceUsePortInclude)
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.boccaForceUsePortInclude)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.boccaForceUsePortInclude)
end subroutine boccaForceUsePortIwd5km1vxx9_mi


! 
! Method:  setServices[]
!  Starts up a component presence in the calling framework.
! @param services the component instance's handle on the framework world.
! Contracts concerning services and setServices:
! 
! The component interaction with the CCA framework
! and Ports begins on the call to setServices by the framework.
! 
! This function is called exactly once for each instance created
! by the framework.
! 
! The argument services will never be nil/null.
! 
! Those uses ports which are automatically connected by the framework
! (so-called service-ports) may be obtained via getPort during
! setServices.
! 

recursive subroutine MACROM_setServicesf1cck__vbs_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.setServices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.setServices.use} (use statements)
  use gov_cca_ports_ParameterPortFactory
  use gov_cca_ports_ParameterPort
  use edu_csdms_tools_ConfigDialog

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.setServices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.setServices)
! bocca-default-code. User may edit or delete.begin(edu.csdms.models.MACROMS.setServices)
    BOCCA_EXTERNAL

    ! Insert-UserCode-Here
  type(gov_cca_Port_t) :: generalPort
  !type(gov_cca_ports_ParameterPortFactory_t) :: paramPortFactory
  type(gov_cca_ports_ParameterPortFactory_t) :: ppf
  type(gov_cca_TypeMap_t) :: userinput
  type(sidl_BaseInterface_t) :: throwawayException
  type(edu_csdms_tools_ConfigDialog_t) :: dialog
  type(edu_csdms_models_MACROMS_wrap) :: dp


    call boccaSetServices(self, services, exception) 
    BOCCA_SIDL_CHECK_F90(exception , 'setServices')

    ! Insert-UserCode-Here
    call createTypeMap(services, userinput, exception)
    call getPort(services, "ppf", generalPort, exception)
    if (is_null(exception)) then
      call cast(generalPort, ppf, throwawayException)
      if (not_null(ppf)) then
        call initParameterData(ppf, userinput, &
                               "Configure", throwawayException)
        call setBatchTitle(ppf, userinput, &
                           "ROMS Parameters", throwawayException)

        call new (dialog, throwawayException)
        call edu_csdms_tools_ConfigDialog_read_m(dialog, "ROMS.xml", &
              throwawayException)
        call edu_csdms_tools_ConfigDialog_construct_m (dialog, ppf, &
              userinput, throwawayException)

        call addParameterPort(ppf, userinput, services, &
                              throwawayException)
      end if
    end if
    call releasePort(services, "ppf", throwawayException)

    call edu_csdms_models_MACROMS__get_data_m(self, dp)
    dp%d_private_data%userinput = userinput

    return

! Exit route when there are exceptions
BOCCAEXIT      continue
    ! Insert cleanup code here if needed.
    return
! bocca-default-code. User may edit or delete.end(edu.csdms.models.MACROMS.setServices)

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.setServices)
end subroutine MACROM_setServicesf1cck__vbs_mi


! 
! Method:  releaseServices[]
! Shuts down a component presence in the calling framework.
! @param services the component instance's handle on the framework world.
! Contracts concerning services and setServices:
! 
! This function is called exactly once for each callback registered
! through Services.
! 
! The argument services will never be nil/null.
! The argument services will always be the same as that received in
! setServices.
! 
! During this call the component should release any interfaces
! acquired by getPort().
! 
! During this call the component should reset to nil any stored
! reference to services.
! 
! After this call, the component instance will be removed from the
! framework. If the component instance was created by the
! framework, it will be destroyed, not recycled, The behavior of
! any port references obtained from this component instance and
! stored elsewhere becomes undefined.
! 
! Notes for the component implementor:
! 1) The component writer may perform blocking activities
! within releaseServices, such as waiting for remote computations
! to shutdown.
! 2) It is good practice during releaseServices for the component
! writer to remove or unregister all the ports it defined.
! 

recursive subroutine MA_releaseServicesh8kjzcmv4q_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.releaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.releaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.releaseServices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.releaseServices)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.MACROMS.releaseServices)
    BOCCA_EXTERNAL

! Insert-UserCode-Here {edu.csdms.models.MACROMS.releaseServices} (releaseServices method)

    call boccaReleaseServices(self, services, exception)
    BOCCA_SIDL_CHECK_F90(exception , 'releaseServices')
    return
    
! Exit route when there are exceptions
BOCCAEXIT      continue

    ! Insert cleanup code here if needed.

    return

! bocca-default-code. User may edit or delete.end(edu.csdms.models.MACROMS.releaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.releaseServices)
end subroutine MA_releaseServicesh8kjzcmv4q_mi


! 
! Method:  go[]
!  
! Execute some encapsulated functionality on the component. 
! Return 0 if ok, -1 if internal error but component may be 
! used further, and -2 if error so severe that component cannot
! be further used safely.
! 

recursive subroutine edu_csdms_models_MACROMS_go_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.go.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.go.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  use gov_cca_TypeMap
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.go.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  integer (kind=sidl_int) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.go)
  type(edu_csdms_tools_TemplateFiles_t) :: template
  type(edu_csdms_models_MACROMS_wrap) :: dp
  character (len=2048) :: input_dir
  character (len=2048) :: site_prefix
  character (len=2048) :: case_prefix
  integer :: ng
  real(r8) :: RunInterval            ! seconds
  integer :: ntimes ! Number of timesteps
  double precision :: dt

  call edu_csdms_models_MACROMS__get_data_m(self, dp)
  call getString (dp%d_private_data%userinput, "/ROMS/Input/Dir", ".", &
                  input_dir, exception)
  call getString (dp%d_private_data%userinput, "/ROMS/SitePrefix", "", &
                  site_prefix, exception)
  call getString (dp%d_private_data%userinput, "/ROMS/CasePrefix", "", &
                  case_prefix, exception)
  call getInt (dp%d_private_data%userinput, "/ROMS/Input/Var/NTIMES", 0, &
                  ntimes, exception)
  call getDouble (dp%d_private_data%userinput, "/ROMS/Input/Var/DT", 0.0D0, &
                  dt, exception)
  call getDouble (dp%d_private_data%userinput, "/ROMS/Input/Var/RunInterval", 0.0D0, &
                  RunInterval, exception)
  print *, 'ROMS_CMI> ROMS component set as Driver'
  print *, 'ROMS_CMI> Reading Input: ', input_dir

  if (input_dir=="GUI") then
    RunInterval = ntimes * dt    
  endif

  print *, "ROMS_CMI> Initialize ROMS"
  if (exit_flag.eq.NoError) then
    !dp%d_private_data%first=.TRUE.
    !call ROMS_initialize (dp%d_private_data%first)
    call ROM_CMI_initializeav9vv8cbzw_mi(self, "Null", retval, exception)
  end if

  if (exit_flag.eq.NoError) then
    !print *, "Run ROMS for time steps:", RunInterval
    !call ROMS_run (RunInterval)
    call ROMS_CMI_runwdvzvh87fw3mpjcc_mi(self, RunInterval, retval, exception)
  end if
  
  if (exit_flag.eq.NoError) then
     !print *, 'Finalize ROMS...'
     !call ROMS_finalize()
     call ROMS_CMI_finalizeeld4zoe74zy_mi(self, retval, exception)
  end if
  
  print *, "ROMS_CMI> Done."
  return
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.go)
end subroutine edu_csdms_models_MACROMS_go_mi


! 
! Method:  CMI_initialize[]
! 

recursive subroutine MAC_CMI_initialize6z5ql7taef_mi(self, config_file,        &
  retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_initialize.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_initialize.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  use gov_cca_TypeMap
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_initialize.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: config_file
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_initialize)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_initialize} (CMI_initialize method)
! 
! This method has not been implemented
! 
  type(edu_csdms_tools_TemplateFiles_t) :: template
  type(edu_csdms_models_MACROMS_wrap) :: dp
  character (len=2048) :: input_file
  character (len=2048) :: input_dir

  print *, 'ROMS_CMI> Status: CMI Initialize'
  call edu_csdms_models_MACROMS__get_data_m(self, dp)
  call getString (dp%d_private_data%userinput, "/ROMS/Input/Dir", ".", &
                  input_dir, exception)
  call getString (dp%d_private_data%userinput, "/ROMS/Input/File", ".", &
                  input_file, exception)
    
  print *, 'ROMS_CMI> Input dir: ', trim(input_dir)
  print *, 'ROMS_CMI> Input File: ', trim(input_file)

  if (input_dir=="GUI") then
    input_dir = "."
    print *, "ROMS_CMI> Input from GUI"
    call new (template, exception)
    print *, "ROMS_CMI> Creating new file: ocean.in"
    call add_file (template, "ROMS_ser_upwelling.in.in", "ocean.in", &
                   exception)
    call add_file (template, "ROMS_ser_varinfo.dat.in", "varinfo.dat", &
                   exception)
    print *, "ROMS_CMI> Substitute"
    call substitute (template, dp%d_private_data%userinput, &
          "/ROMS/Input/Var/", ".", exception);
  else
    print *, 'ROMS_CMI> Copying varinfo.dat to working directory... '
    call system("cp " // trim(input_dir) // "/varinfo.dat" // " .")
    input_file = trim(input_dir) // "/" // trim(input_file)
    print *, "ROMS_CMI> Input from File: ", trim(input_file)
  endif

  print *, "ROMS_CMI> Reading ", trim(input_file)
  open (stdinp, FILE=input_file, ACTION='read')
  
  print *, "ROMS_CMI> Initializing ROMS component"
  call roms_bmi_initialize (config_file)
  print *, "ROMS_CMI> ROMS component initialized"

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_initialize)
end subroutine MAC_CMI_initialize6z5ql7taef_mi


! 
! Method:  CMI_run_for[]
! 

recursive subroutine MACROM_CMI_run_forsthah1p3mr_mi(self, time_interval,      &
  time_units, stop_rule, stop_vars, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_double_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_run_for.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_run_for.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_run_for.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: time_interval
  ! in
  character (len=*) :: time_units
  ! in
  character (len=*) :: stop_rule
  ! in
  type(sidl_double_1d) :: stop_vars
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_run_for)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_run_for} (CMI_run_for method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_run_for)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_run_for)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_run_for)
end subroutine MACROM_CMI_run_forsthah1p3mr_mi


! 
! Method:  CMI_run[]
! 

recursive subroutine MACROMS_CMI_runi4p_gxk2nnulx_mi(self, time_interval,      &
  retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_run.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_run.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_run.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: time_interval
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_run)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_run} (CMI_run method)
! 
! This method has not been implemented

  print *, "ROMS_CMI> Run ROMS for time steps:", time_interval
  call roms_bmi_update (time_interval)
  print *, 'ROMS_CMI> ROMS run finished'

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_run)
end subroutine MACROMS_CMI_runi4p_gxk2nnulx_mi


! 
! Method:  CMI_finalize[]
! 

recursive subroutine MACRO_CMI_finalizecwncg02lae_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_finalize.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_finalize.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_finalize.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_finalize)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_finalize} (CMI_finalize method)
! 
! This method has not been implemented
! 

  print *, 'ROMS_CMI> ROMS finalizing'
  call roms_bmi_finalize()
  print *, 'ROMS_CMI> ROMS finalize Done.'

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_finalize)
end subroutine MACRO_CMI_finalizecwncg02lae_mi


! 
! Method:  CMI_run_model[]
! 

recursive subroutine MACR_CMI_run_model9hbs1kafev_mi(self, config_file,        &
  stop_rule, stop_var, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_run_model.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_run_model.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_run_model.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: config_file
  ! in
  character (len=*) :: stop_rule
  ! in
  real (kind=sidl_double) :: stop_var
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_run_model)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_run_model} (CMI_run_model method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_run_model)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_run_model)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_run_model)
end subroutine MACR_CMI_run_model9hbs1kafev_mi


! 
! Method:  CMI_get_values[]
! 

recursive subroutine MAC_CMI_get_values6e0pf5ozqa_mi(self, long_var_name,      &
  retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_values.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_values.use} (use statements)
  use edu_csdms_tools_IRFPortQueue
  use edu_csdms_ports_CMIPort
  use sidl_array_type
  use sidl_double_array
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_values.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_values)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_values} (CMI_get_values method)
! 
! This method has not been implemented
! 

  character(len=100) :: rank_chr
  character(len=20) :: short_name
  integer :: rank, i
  double precision, pointer :: array_1d(:)
  !double precision, pointer :: array_1d_ptr 
  double precision, pointer :: array_2d(:,:)
  double precision, pointer :: array_3d(:, :, :)
  double precision, pointer :: array_4d(:, :, :, :)
  integer(selected_int_kind(9)) :: array_len, dimensn
  integer (selected_int_kind(9)), dimension(:), allocatable :: low, up, strd
  type(sidl_double_1d) :: double_1d
  type(sidl_double_2d) :: double_2d
  type(sidl_double_3d) :: double_3d
  type(sidl_double_4d) :: double_4d
  double precision :: val
  integer (selected_int_kind(8))    :: indx, n, len_ref
  real (selected_real_kind(17,308)), dimension(1) :: refarray
  integer (selected_int_kind(8)), dimension(3)    :: l, u, s
  integer (selected_int_kind(8))    :: ind, j, k

  call flush() 
  print *, 'ROMS cmi> get rank'
  call flush() 
  call roms_get_var_rank(trim(long_var_name), rank_chr)
  read (rank_chr,'(I10)') rank
  call roms_get_var_name(trim(long_var_name), short_name)
  print *, "ROMS_CMI> Getting array at the bmi level for ROMS for ", trim(long_var_name), ". Short name: ", trim(short_name), ". Array rank: ", rank
  call flush()
  select case(rank)
        case(1)
            call roms_get_1D_double(trim(short_name), array_1d)
            array_len=size(array_1d)
            !print *, "ROMS_CMI> Size of the array: "
            !print*, array_len
            allocate(low(1))
            allocate(up(1))
            allocate(strd(1))
            dimensn=1
            low(1)=lbound(array_1d, 1)
            up(1)=ubound(array_1d, 1)
            strd(1)=1
            !print *, shape(array_1d)
            !print *, array_1d
            ! This method creates a proxy SIDL multi-dimensional array using data provided by a third party
            ! Converting a double 1d array to a sidl double array
            call sidl_double__array_borrow_m(array_1d(1), dimensn, low, up, strd, double_1d)

            call cast(double_1d, retval)
            deallocate(low, up, strd)
        case(2)
            call roms_get_2D_double(trim(short_name), array_2d)
            array_len=size(array_2d)
            !print *, "ROMS_CMI> Size of the array: "
            !print*, array_len
            dimensn=2
            
            allocate(low(dimensn))
            do n=1,dimensn
                low(n)=lbound(array_2d, n)
            end do 
            
            allocate(up(dimensn))
            do n=1,dimensn
                up(n)=ubound(array_2d, n)
            end do
            
            allocate(strd(dimensn))
            strd(1)=1
            strd(2)= 1*size(array_2d, 1)
            !print *, array_2d
            
            call sidl_double__array_borrow_m(array_2d(1, 1), dimensn, low, up, strd, double_2d)
 
            !call sidl_double__array_length_m(double_1d, lenn)
            call cast(double_2d, retval)
            deallocate(low, up, strd)
        case(3)
            call roms_get_3D_double(trim(short_name), array_3d)
            array_len=size(array_3d)
            !print *, "ROMS_CMI> Size of the array: "
            !print*, array_len
            call flush()
            dimensn=3

            allocate(low(dimensn))
            do n=1,dimensn
                low(n)=lbound(array_3d, n)
            end do

            allocate(up(dimensn))
            do n=1,dimensn
                up(n)=ubound(array_3d, n)
            end do
            
            allocate(strd(dimensn))
            strd(1)=1
            strd(2)= 1*size(array_3d, 1)
            strd(3)= strd(2)*size(array_3d, 2)
            !print *, shape(array_3d)
            !print *, array_3d(low(1), low(2), up(3))
            call flush()
            call sidl_double__array_borrow_m(array_3d(low(1), low(2), low(3)), dimensn, low, up, strd, double_3d)
            !call sidl_double__array_length_m(double_1d, lenn)
            call cast(double_3d, retval)
            deallocate(low, up, strd)
        case(4)
            call roms_get_4D_double(trim(short_name), array_4d)
            array_len=size(array_4d)
            !print *, "ROMS_CMI> Size of the array: "
            !print*, array_len
            dimensn=4

            allocate(low(dimensn))
            do n=1,dimensn
                low(n)=lbound(array_4d, n)
            end do
            
            allocate(up(dimensn))
            do n=1,dimensn
                up(n)=ubound(array_4d, n)
            end do

            allocate(strd(dimensn))
            strd(1)=1
            strd(2)= 1*size(array_4d, 1)
            strd(3)= strd(2)*size(array_4d, 2)
            strd(4)= strd(3)*size(array_4d, 3)
            
            !print *, shape(array_4d)
            !print *, array_4d(low(1), low(2), low(3), up(4))
            call flush()
            call sidl_double__array_borrow_m(array_4d(low(1), low(2), low(3), low(4)), dimensn, low, up, strd, double_4d)
            !call sidl_double__array_length_m(double_1d, lenn)
            call cast(double_4d, retval)
            deallocate(low, up, strd)
        case default
            print *, 'ROMS_CMI> Error in fetching the value for the requested variable: ', long_var_name
            !return_value = -1
        end select
  print *, "ROMS_CMI> Done, returning from get_values"
  call flush()

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_values)
end subroutine MAC_CMI_get_values6e0pf5ozqa_mi


! 
! Method:  CMI_set_values[]
! 

recursive subroutine MAC_CMI_set_valuesp168t4js6d_mi(self, long_var_name,      &
  in_values, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_set_values.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_set_values.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_set_values.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl__array) :: in_values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_set_values)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_set_values} (CMI_set_values method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_set_values)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_set_values)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_set_values)
end subroutine MAC_CMI_set_valuesp168t4js6d_mi


! 
! Method:  CMI_get_status[]
! 

recursive subroutine MAC_CMI_get_status1tfbcn7r9j_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_status.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_status.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_status.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_status)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_status} (CMI_get_status method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_get_status)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_get_status)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_status)
end subroutine MAC_CMI_get_status1tfbcn7r9j_mi


! 
! Method:  CMI_get_component_name[]
! 

recursive subroutine CMI_get_component__qe_gshv7u_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_component_name.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_component_name.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_component_name.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_component_name)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_component_name} (CMI_get_component_name method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_get_component_name)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_get_component_name)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_component_name)
end subroutine CMI_get_component__qe_gshv7u_mi


! 
! Method:  CMI_get_input_item_list[]
! 

recursive subroutine CMI_get_input_item6nzd017f_j_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_string_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_input_item_list.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_input_item_list.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_input_item_list.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_string_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_input_item_list)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_input_item_list} (CMI_get_input_item_list method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_get_input_item_list)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_get_input_item_list)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_input_item_list)
end subroutine CMI_get_input_item6nzd017f_j_mi


! 
! Method:  CMI_get_output_item_list[]
! 

recursive subroutine CMI_get_output_itewi259iacgy_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_string_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_output_item_list.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_output_item_list.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_output_item_list.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_string_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_output_item_list)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_output_item_list} (CMI_get_output_item_list method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_get_output_item_list)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_get_output_item_list)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_output_item_list)
end subroutine CMI_get_output_itewi259iacgy_mi


! 
! Method:  CMI_get_required_ports[]
! 

recursive subroutine CMI_get_required_pc8kxc_x6bp_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_required_ports.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_required_ports.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_required_ports.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_required_ports)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_required_ports} (CMI_get_required_ports method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_get_required_ports)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_get_required_ports)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_required_ports)
end subroutine CMI_get_required_pc8kxc_x6bp_mi


! 
! Method:  CMI_release_required_ports[]
! 

recursive subroutine CMI_release_requirse3y7rr98g_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_release_required_ports.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_release_required_ports.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_release_required_ports.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_release_required_ports)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_release_required_ports} (CMI_release_required_ports method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_release_required_ports)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_release_required_ports)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_release_required_ports)
end subroutine CMI_release_requirse3y7rr98g_mi


! 
! Method:  CMI_get_values_at_indices[]
! 

recursive subroutine CMI_get_values_at_w3cow8x4jm_mi(self, long_var_name,      &
  indices, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use sidl_int_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_values_at_indices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_values_at_indices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_values_at_indices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl_int_1d) :: indices
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_get_values_at_indices)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_get_values_at_indices} (CMI_get_values_at_indices method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_get_values_at_indices)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_get_values_at_indices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_get_values_at_indices)
end subroutine CMI_get_values_at_w3cow8x4jm_mi


! 
! Method:  CMI_set_values_at_indices[]
! 

recursive subroutine CMI_set_values_at_136stsouzt_mi(self, long_var_name,      &
  indices, in_values, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use sidl_int_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_set_values_at_indices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_set_values_at_indices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_set_values_at_indices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl_int_1d) :: indices
  ! in
  type(sidl__array) :: in_values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_set_values_at_indices)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_set_values_at_indices} (CMI_set_values_at_indices method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_set_values_at_indices)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_set_values_at_indices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_set_values_at_indices)
end subroutine CMI_set_values_at_136stsouzt_mi


! 
! Method:  CMI_print_traceback[]
! 

recursive subroutine CMI_print_traceback8m9tskprc_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_print_traceback.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_print_traceback.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_print_traceback.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.CMI_print_traceback)
! Insert-Code-Here {edu.csdms.models.MACROMS.CMI_print_traceback} (CMI_print_traceback method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.CMI_print_traceback)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.CMI_print_traceback)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.CMI_print_traceback)
end subroutine CMI_print_traceback8m9tskprc_mi


! 
! Method:  initialize[]
! 

recursive subroutine MACROMS_initializec083fym83c_mi(self, config_file,        &
  retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.initialize.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.initialize.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.initialize.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: config_file
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.initialize)
! Insert-Code-Here {edu.csdms.models.MACROMS.initialize} (initialize method)
  type(edu_csdms_tools_TemplateFiles_t) :: template

  call new (template, exception)
  call add_file (template, "ROMS_upwelling.in.in", "ocean.in", exception)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.initialize)
!  type(sidl_BaseInterface_t) :: throwaway
!  type(sidl_NotImplementedException_t) :: notImpl
!  call new(notImpl, exception)
!  call setNote(notImpl, 'Not Implemented', exception)
!  call cast(notImpl, exception,throwaway)
!  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.initialize)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.initialize)
end subroutine MACROMS_initializec083fym83c_mi


! 
! Method:  run_for[]
! 

recursive subroutine MACROMS_run_forz1_8u8jf47y_e_mi(self, time_interval,      &
  time_units, stop_rule, stop_vars, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_double_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.run_for.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.run_for.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.run_for.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: time_interval
  ! in
  character (len=*) :: time_units
  ! in
  character (len=*) :: stop_rule
  ! in
  type(sidl_double_1d) :: stop_vars
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.run_for)
! Insert-Code-Here {edu.csdms.models.MACROMS.run_for} (run_for method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.run_for)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.run_for)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.run_for)
end subroutine MACROMS_run_forz1_8u8jf47y_e_mi


! 
! Method:  finalize[]
! 

recursive subroutine MACROMS_finalizem7mufh6k4qfh_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.finalize.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.finalize.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.finalize.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.finalize)
! Insert-Code-Here {edu.csdms.models.MACROMS.finalize} (finalize method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.finalize)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.finalize)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.finalize)
end subroutine MACROMS_finalizem7mufh6k4qfh_mi


! 
! Method:  run_model[]
! 

recursive subroutine MACROMS_run_modelkddkar98i75_mi(self, config_file,        &
  stop_rule, stop_var, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.run_model.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.run_model.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.run_model.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: config_file
  ! in
  character (len=*) :: stop_rule
  ! in
  real (kind=sidl_double) :: stop_var
  ! in
  logical :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.run_model)
! Insert-Code-Here {edu.csdms.models.MACROMS.run_model} (run_model method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.run_model)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.run_model)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.run_model)
end subroutine MACROMS_run_modelkddkar98i75_mi


! 
! Method:  get_values[]
! 

recursive subroutine MACROMS_get_values0j8x5jejfo_mi(self, long_var_name,      &
  retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_values.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_values.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_values.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_values)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_values} (get_values method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_values)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_values)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_values)
end subroutine MACROMS_get_values0j8x5jejfo_mi


! 
! Method:  set_values[]
! 

recursive subroutine MACROMS_set_values_qd7e9wylb_mi(self, long_var_name,      &
  in_values, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.set_values.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.set_values.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.set_values.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl__array) :: in_values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.set_values)
! Insert-Code-Here {edu.csdms.models.MACROMS.set_values} (set_values method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.set_values)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.set_values)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.set_values)
end subroutine MACROMS_set_values_qd7e9wylb_mi


! 
! Method:  get_status[]
! 

recursive subroutine MACROMS_get_statusckhod3ua7g_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_status.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_status.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_status.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_status)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_status} (get_status method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_status)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_status)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_status)
end subroutine MACROMS_get_statusckhod3ua7g_mi


! 
! Method:  get_component_name[]
! 

recursive subroutine get_component_namemjvvuoaxdn_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_component_name.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_component_name.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_component_name.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_component_name)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_component_name} (get_component_name method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_component_name)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_component_name)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_component_name)
end subroutine get_component_namemjvvuoaxdn_mi


! 
! Method:  get_input_item_list[]
! 

recursive subroutine get_input_item_listk6l_epemf_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_string_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_input_item_list.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_input_item_list.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_input_item_list.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_string_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_input_item_list)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_input_item_list} (get_input_item_list method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_input_item_list)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_input_item_list)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_input_item_list)
end subroutine get_input_item_listk6l_epemf_mi


! 
! Method:  get_output_item_list[]
! 

recursive subroutine get_output_item_li1e9r4_l_kl_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_string_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_output_item_list.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_output_item_list.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_output_item_list.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_string_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_output_item_list)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_output_item_list} (get_output_item_list method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_output_item_list)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_output_item_list)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_output_item_list)
end subroutine get_output_item_li1e9r4_l_kl_mi


! 
! Method:  get_required_ports[]
! 

recursive subroutine get_required_portsp936rh7xg3_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_required_ports.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_required_ports.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_required_ports.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_required_ports)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_required_ports} (get_required_ports method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_required_ports)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_required_ports)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_required_ports)
end subroutine get_required_portsp936rh7xg3_mi


! 
! Method:  release_required_ports[]
! 

recursive subroutine release_required_ped5gg_qhs5_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.release_required_ports.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.release_required_ports.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.release_required_ports.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.release_required_ports)
! Insert-Code-Here {edu.csdms.models.MACROMS.release_required_ports} (release_required_ports method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.release_required_ports)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.release_required_ports)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.release_required_ports)
end subroutine release_required_ped5gg_qhs5_mi


! 
! Method:  get_values_at_indices[]
! 

recursive subroutine get_values_at_indi0utgza0f3r_mi(self, long_var_name,      &
  indices, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use sidl_int_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_values_at_indices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_values_at_indices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_values_at_indices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl_int_1d) :: indices
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_values_at_indices)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_values_at_indices} (get_values_at_indices method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_values_at_indices)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_values_at_indices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_values_at_indices)
end subroutine get_values_at_indi0utgza0f3r_mi


! 
! Method:  set_values_at_indices[]
! 

recursive subroutine set_values_at_indip0bgpgd19s_mi(self, long_var_name,      &
  indices, in_values, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use sidl_int_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.set_values_at_indices.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.set_values_at_indices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.set_values_at_indices.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: long_var_name
  ! in
  type(sidl_int_1d) :: indices
  ! in
  type(sidl__array) :: in_values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.set_values_at_indices)
! Insert-Code-Here {edu.csdms.models.MACROMS.set_values_at_indices} (set_values_at_indices method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.set_values_at_indices)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.set_values_at_indices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.set_values_at_indices)
end subroutine set_values_at_indip0bgpgd19s_mi


! 
! Method:  print_traceback[]
! 

recursive subroutine MA_print_tracebacksfwuxcc4m8_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.print_traceback.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.print_traceback.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.print_traceback.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.print_traceback)
! Insert-Code-Here {edu.csdms.models.MACROMS.print_traceback} (print_traceback method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.print_traceback)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.print_traceback)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.print_traceback)
end subroutine MA_print_tracebacksfwuxcc4m8_mi


! 
! Method:  getRaster_nx[]
! 

recursive subroutine MACRO_getRaster_nx_9mtysjetl_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_nx.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_nx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_nx.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_nx)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_nx} (getRaster_nx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_nx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_nx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_nx)
end subroutine MACRO_getRaster_nx_9mtysjetl_mi


! 
! Method:  getRaster_ny[]
! 

recursive subroutine MACRO_getRaster_nyxf51lucru__mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_ny.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_ny.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_ny.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_ny)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_ny} (getRaster_ny method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_ny)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_ny)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_ny)
end subroutine MACRO_getRaster_nyxf51lucru__mi


! 
! Method:  getRaster_dx[]
! 

recursive subroutine MACRO_getRaster_dxoguhyai_wc_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_dx.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_dx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_dx.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_dx)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_dx} (getRaster_dx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_dx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_dx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_dx)
end subroutine MACRO_getRaster_dxoguhyai_wc_mi


! 
! Method:  getRaster_dy[]
! 

recursive subroutine MACRO_getRaster_dybdoyeamtck_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_dy.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_dy.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_dy.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_dy)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_dy} (getRaster_dy method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_dy)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_dy)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_dy)
end subroutine MACRO_getRaster_dybdoyeamtck_mi


! 
! Method:  getRaster_ulx[]
! 

recursive subroutine MACR_getRaster_ulxl291uo0008_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_ulx.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_ulx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_ulx.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_ulx)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_ulx} (getRaster_ulx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_ulx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_ulx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_ulx)
end subroutine MACR_getRaster_ulxl291uo0008_mi


! 
! Method:  getRaster_uly[]
! 

recursive subroutine MACR_getRaster_uly7zi2_5pyy2_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_uly.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_uly.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_uly.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_uly)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_uly} (getRaster_uly method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_uly)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_uly)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_uly)
end subroutine MACR_getRaster_uly7zi2_5pyy2_mi


! 
! Method:  getRaster_grid[]
! 

recursive subroutine MAC_getRaster_grid5ef0107dd1_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_double_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_grid.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_grid.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_grid.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_2d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.getRaster_grid)
! Insert-Code-Here {edu.csdms.models.MACROMS.getRaster_grid} (getRaster_grid method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.getRaster_grid)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.getRaster_grid)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.getRaster_grid)
end subroutine MAC_getRaster_grid5ef0107dd1_mi


! 
! Method:  get_raster_dimen[]
! 

recursive subroutine M_get_raster_dimenq7bea0l5o__mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_int_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_raster_dimen.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_raster_dimen.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_raster_dimen.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_int_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_raster_dimen)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_raster_dimen} (get_raster_dimen method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_raster_dimen)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_raster_dimen)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_raster_dimen)
end subroutine M_get_raster_dimenq7bea0l5o__mi


! 
! Method:  get_raster_res[]
! 

recursive subroutine MAC_get_raster_resrzpw1qem3n_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_double_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_raster_res.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_raster_res.use} (use statements)

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_raster_res.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_raster_res)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_raster_res} (get_raster_res method)
! 
! This method has not been implemented
! 

! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_raster_res)
end subroutine MAC_get_raster_resrzpw1qem3n_mi


! 
! Method:  get_raster_data[]
! 

recursive subroutine MA_get_raster_data16afczsa9i_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_raster_data.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_raster_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_raster_data.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_raster_data)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_raster_data} (get_raster_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_raster_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_raster_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_raster_data)
end subroutine MA_get_raster_data16afczsa9i_mi


! 
! Method:  get_time_span[]
! 

recursive subroutine MACR_get_time_spanll_jgovc5u_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_double_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_time_span.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_time_span.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_time_span.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_time_span)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_time_span} (get_time_span method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_time_span)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_time_span)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_time_span)
end subroutine MACR_get_time_spanll_jgovc5u_mi


! 
! Method:  get_value_set_data[]
! 

recursive subroutine get_value_set_datayfrwg_v8o2_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_MACROMS
  use sidl_array_array
  use edu_csdms_models_MACROMS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_value_set_data.use)
  ! Insert-Code-Here {edu.csdms.models.MACROMS.get_value_set_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_value_set_data.use)
  implicit none
  type(edu_csdms_models_MACROMS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.get_value_set_data)
! Insert-Code-Here {edu.csdms.models.MACROMS.get_value_set_data} (get_value_set_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.MACROMS.get_value_set_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.MACROMS.get_value_set_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.get_value_set_data)
end subroutine get_value_set_datayfrwg_v8o2_mi


! DO-NOT-DELETE splicer.begin(_miscellaneous_code_end)
! Insert-Code-Here {_miscellaneous_code_end} (extra code)
! DO-NOT-DELETE splicer.end(_miscellaneous_code_end)
