! 
! File:          edu_csdms_models_Marssim_Impl.F90
! Symbol:        edu.csdms.models.Marssim-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side implementation for edu.csdms.models.Marssim
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 


! 
! Symbol "edu.csdms.models.Marssim" (version 0.0)
! 


#include "sidl_NotImplementedException_fAbbrev.h"
#include "edu_csdms_tools_TemplateFiles_fAbbrev.h"
#include "gov_cca_Port_fAbbrev.h"
#include "sidl_ClassInfo_fAbbrev.h"
#include "sidl_BaseClass_fAbbrev.h"
#include "gov_cca_Component_fAbbrev.h"
#include "sidl_BaseInterface_fAbbrev.h"
#include "gov_cca_ports_ParameterPortFactory_fAbbrev.h"
#include "sidl_BaseException_fAbbrev.h"
#include "edu_csdms_openmi_IElementSet_fAbbrev.h"
#include "edu_csdms_openmi_IValueSet_fAbbrev.h"
#include "edu_csdms_tools_ConfigDialog_fAbbrev.h"
#include "gov_cca_CCAException_fAbbrev.h"
#include "sidl_RuntimeException_fAbbrev.h"
#include "edu_csdms_models_Marssim_fAbbrev.h"
#include "gov_cca_Services_fAbbrev.h"
#include "edu_csdms_ports_IRFPort_fAbbrev.h"
#include "gov_cca_ComponentRelease_fAbbrev.h"
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
        logical function bue_edu_csdms_models_Marssim(except, meth, lin) RESULT(bue)
        use sidl
        use sidl_BaseInterface
        use sidl_RuntimeException
        implicit none
        type(sidl_BaseInterface_t) :: except, etmp
        type(sidl_RuntimeException_t) :: rex
!       logical bue
        integer lin
        character (LEN=*) meth, myfilename
        parameter(myfilename='edu_csdms_models_Marssim_Impl.F90')

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
   external bue_edu_csdms_models_Marssim ; \
   logical bue_edu_csdms_models_Marssim

! call BOCCA_SIDL_CLEAR_F90(except)
#define BOCCA_SIDL_CLEAR_F90(except) \
  boccaClearException(self,except)

! BOCCA_SIDL_CHECK_F90(ex,methodandmessagestring) to jump to exit if
! exception ex was thrown. See SIDL_CHECK documentation for C in babel.
#define BOCCA_SIDL_CHECK_F90(except,method) \
  if ( bue_edu_csdms_models_Marssim(except, method) ) goto BOCCAEXIT

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

recursive subroutine Marssim__ctor69ueaxwtlt7qrvw_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._ctor.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim._ctor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._ctor.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._ctor)

! Insert-UserDecl-Here

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.Marssim._ctor)
  ! Access private data
  type(edu_csdms_models_Marssim_wrap) :: dp
  ! Allocate memory and initialize
  allocate(dp%d_private_data) ! crash if out of memory
  call set_null(dp%d_private_data%d_services)
! Insert-UserCode-Here

  call edu_csdms_models_Marssim__set_data_m(self, dp)
#ifdef _BOCCA_STDERR
    write(*, *) 'CTOR edu.csdms.models.Marssim: F90 allocated'
#endif
! bocca-default-code. User may edit or delete.end(edu.csdms.models.Marssim._ctor)


! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._ctor)
end subroutine Marssim__ctor69ueaxwtlt7qrvw_mi


! 
! Method:  _ctor2[]
! Special Class constructor called when the user wants to wrap his own private data.
! 

recursive subroutine Marssim__ctor22qiklwhjsx94ub_mi(self, private_data,       &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._ctor2.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim._ctor2.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._ctor2.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(edu_csdms_models_Marssim_wrap) :: private_data
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._ctor2)
! Insert-Code-Here {edu.csdms.models.Marssim._ctor2} (_ctor2 method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim._ctor2)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim._ctor2)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._ctor2)
end subroutine Marssim__ctor22qiklwhjsx94ub_mi


! 
! Method:  _dtor[]
! Class destructor called when the class is deleted.
! 

recursive subroutine Marssim__dtordssc4m2l7kt2xd9_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._dtor.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim._dtor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._dtor.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._dtor)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.Marssim._dtor)
  ! Access private data
  type(edu_csdms_models_Marssim_wrap) :: dp
  ! Insert-UserDecl-Here 

  call edu_csdms_models_Marssim__get_data_m(self,dp)

  ! Insert-UserCode-Here 

#ifdef _BOCCA_STDERR
    write(*, *) 'DTOR edu.csdms.models.Marssim: F90 deallocating'
#endif
  deallocate(dp%d_private_data)
! bocca-default-code. User may edit or delete.end(edu.csdms.models.Marssim._dtor)

  ! Insert-UserCode-Here , alternatively

! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._dtor)
end subroutine Marssim__dtordssc4m2l7kt2xd9_mi


! 
! Method:  _load[]
! Static class initializer called exactly once before any user-defined method is dispatched
! 

recursive subroutine Marssim__loadn624k0rqo431u_f_mi(exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._load.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim._load.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._load.use)
  implicit none
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim._load)
! Insert-Code-Here {edu.csdms.models.Marssim._load} (_load method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim._load)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim._load)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim._load)
end subroutine Marssim__loadn624k0rqo431u_f_mi


! 
! Method:  boccaSetServices[]
! 

recursive subroutine M_boccaSetServices4rslmowprb_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaSetServices.use)
  use gov_cca_ComponentRelease
  use gov_cca_TypeMap
  use gov_cca_Port
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaSetServices.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaSetServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.boccaSetServices)
  
  type(edu_csdms_models_Marssim_wrap) :: dp
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
  call edu_csdms_models_Marssim__get_data_m(self, dp)
  ! Set my reference to the services handle
  dp%d_private_data%d_services = services
  ! Increment reference count for the services subroutine parameter
  call addRef(services, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim failed addref(services)')
  dr_services = .true.


  call createTypeMap(dp%d_private_data%d_services, typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim failed to createTypeMap')

  dr_port = .false.
  call cast(self, port, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim is not Port')
  dr_port = .true.

! Add gov.cca.ports.GoPort:Run provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'Run', 'gov.cca.ports.GoPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim failed addProvidesPort Run ')

! Add edu.csdms.ports.IRFPort:MARSSIM provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'MARSSIM', 'edu.csdms.ports.IRFPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim failed addProvidesPort MARSSIM ')

  dr_port = .false.
  call deleteRef(port,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim failed deleteRef(port)')

! Register gov.cca.ports.ParameterPortFactory:ppf uses port
  call registerUsesPort(dp%d_private_data%d_services, &
      'ppf', 'gov.cca.ports.ParameterPortFactory', &
      typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim failed registerUsesPort ppf')

  dr_typeMap = .false.
  call deleteRef(typeMap,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim.boccaSetServices: failed deleteRef(typeMap)')

! Register component edu.csdms.models.Marssim for release by the framework 
  call cast(self, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim.boccaSetServices: is not ComponentRelease')
  call registerForRelease(dp%d_private_data%d_services, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim.boccaSetServices: failed registerForRelease')
  call deleteRef(cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.Marssim.boccaSetServices: failed deleteRef(cr)')
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
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.boccaSetServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaSetServices)
end subroutine M_boccaSetServices4rslmowprb_mi


! 
! Method:  boccaReleaseServices[]
! 

recursive subroutine boccaReleaseServicl63j8fmksb_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaReleaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.boccaReleaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaReleaseServices.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaReleaseServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.boccaReleaseServices)
  type(edu_csdms_models_Marssim_wrap) :: dp
  type(SIDL_BaseInterface_t) :: excpt, throwaway
! trap and optionally print all port-related exceptions. ignore others.

! Access private data
  BOCCA_EXTERNAL
  call edu_csdms_models_Marssim__get_data_m(self, dp)
  call deleteRef(dp%d_private_data%d_services, throwaway)
  call set_null(dp%d_private_data%d_services)
  call BOCCA_SIDL_CLEAR_F90(throwaway)

! Un-provide gov.cca.ports.GoPort port with port name Run 
  call removeProvidesPort(services, 'Run', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort Run', &
      .false., throwaway &
  )

! Un-provide edu.csdms.ports.IRFPort port with port name MARSSIM 
  call removeProvidesPort(services, 'MARSSIM', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort MARSSIM', &
      .false., throwaway &
  )

! Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  call unregisterUsesPort(services, 'ppf', excpt)
  call checkException(self, excpt,  &
       'Error calling unregisterUsesPort ppf', &
       .false., throwaway &
  )

  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.boccaReleaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaReleaseServices)
end subroutine boccaReleaseServicl63j8fmksb_mi


! 
! Method:  checkException[]
! 

recursive subroutine Mar_checkException80n8c4y6lx_mi(self, excpt, msg, fatal,  &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.checkException.use)
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.checkException.use)
  use sidl_BaseException
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.checkException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.checkException.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: excpt
  ! inout
  character (len=*) :: msg
  ! in
  logical :: fatal
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.checkException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.checkException)

  type(sidl_BaseInterface_t) :: throwaway  ! unused exception
  type(sidl_BaseException_t) :: be
  character (LEN=4096) val

  if (not_null(excpt)) then
#ifdef _BOCCA_STDERR
    write(*, *) 'edu.csdms.models.Marssim: ', msg
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
    if (fatal) stop 'edu.csdms.models.Marssim.checkException called with fatal .true.'
  end if
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.checkException)
    
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.checkException)
end subroutine Mar_checkException80n8c4y6lx_mi


! 
! Method:  boccaClearException[]
! 

recursive subroutine boccaClearExceptio8x9xv9_fno_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaClearException.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.boccaClearException.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaClearException.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaClearException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.boccaClearException)
        type(sidl_BaseInterface_t) :: etmp
        if (not_null(exception)) then
            call deleteRef(exception, etmp)
        endif
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.boccaClearException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaClearException)
end subroutine boccaClearExceptio8x9xv9_fno_mi


! 
! Method:  boccaThrowException[]
! 

recursive subroutine boccaThrowExceptioj4ak02i55s_mi(self, message, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaThrowException.use)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.boccaThrowException.use)
        use sidl_SIDLException
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.boccaThrowException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaThrowException.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: message
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaThrowException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.boccaThrowException)
        type (sidl_BaseInterface_t) :: except
        type (sidl_SIDLException_t) :: einst
        character (LEN=*) myfilename
        parameter(myfilename='edu_csdms_models_Marssim_Impl.F90')
        call new(einst, except)
        ! clear except here?
        call add(einst, myfilename, 0_sidl_int, message, except)
        ! clear except here?
        call cast(einst, exception, except)
        call deleteRef(einst,except)
        ! clear except here?
        return
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.boccaThrowException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaThrowException)
end subroutine boccaThrowExceptioj4ak02i55s_mi


! 
! Method:  boccaForceUsePortInclude[]
!  This function should never be called, but helps babel generate better code. 
! 

recursive subroutine boccaForceUsePortI82lw4r1e3w_mi(self, dummy0, dummy1,     &
  dummy2, exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_ports_ParameterPortFactory
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_tools_ConfigDialog
  use edu_csdms_tools_TemplateFiles
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaForceUsePortInclude.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.boccaForceUsePortInclude.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaForceUsePortInclude.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(gov_cca_ports_ParameterPortFactory_t) :: dummy0
  ! in
  type(edu_csdms_tools_TemplateFiles_t) :: dummy1
  ! in
  type(edu_csdms_tools_ConfigDialog_t) :: dummy2
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.boccaForceUsePortInclude)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.boccaForceUsePortInclude)
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.boccaForceUsePortInclude)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.boccaForceUsePortInclude)
end subroutine boccaForceUsePortI82lw4r1e3w_mi


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

recursive subroutine Marssi_setServicesn6wni21wpy_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.setServices.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.setServices.use} (use statements)
  use gov_cca_ports_ParameterPortFactory
  use gov_cca_ports_ParameterPort
  use edu_csdms_tools_ConfigDialog
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.setServices.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.setServices)
! bocca-default-code. User may edit or delete.begin(edu.csdms.models.Marssim.setServices)
    BOCCA_EXTERNAL

    ! Insert-UserCode-Here
    type(gov_cca_Port_t) :: generalPort
    !type(gov_cca_ports_ParameterPortFactory_t) :: paramPortFactory
    type(gov_cca_ports_ParameterPortFactory_t) :: ppf
    type(gov_cca_TypeMap_t) :: userinput
    type(sidl_BaseInterface_t) :: throwawayException
    type(edu_csdms_tools_ConfigDialog_t) :: dialog
    type(edu_csdms_models_Marssim_wrap) :: dp
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
                           "Marssim Parameters", throwawayException)

        call new (dialog, throwawayException)
        call edu_csdms_tools_ConfigDialog_read_m(dialog, "Marssim.xml", &
              throwawayException)
        call edu_csdms_tools_ConfigDialog_construct_m (dialog, ppf, &
              userinput, throwawayException)

        call addParameterPort(ppf, userinput, services, &
                              throwawayException)
      end if
    end if
    call releasePort(services, "ppf", throwawayException)

    call edu_csdms_models_Marssim__get_data_m(self, dp)
    dp%d_private_data%userinput = userinput
    return

! Exit route when there are exceptions
BOCCAEXIT      continue
    ! Insert cleanup code here if needed.
    return
! bocca-default-code. User may edit or delete.end(edu.csdms.models.Marssim.setServices)

! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.setServices)
end subroutine Marssi_setServicesn6wni21wpy_mi


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

recursive subroutine Ma_releaseServicesuem9y_up1o_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.releaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.releaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.releaseServices.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.releaseServices)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.Marssim.releaseServices)
    BOCCA_EXTERNAL

! Insert-UserCode-Here {edu.csdms.models.Marssim.releaseServices} (releaseServices method)

    call boccaReleaseServices(self, services, exception)
    BOCCA_SIDL_CHECK_F90(exception , 'releaseServices')
    return
    
! Exit route when there are exceptions
BOCCAEXIT      continue

    ! Insert cleanup code here if needed.

    return

! bocca-default-code. User may edit or delete.end(edu.csdms.models.Marssim.releaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.releaseServices)
end subroutine Ma_releaseServicesuem9y_up1o_mi


! 
! Method:  go[]
!  
! Execute some encapsulated functionality on the component. 
! Return 0 if ok, -1 if internal error but component may be 
! used further, and -2 if error so severe that component cannot
! be further used safely.
! 

recursive subroutine edu_csdms_models_Marssim_go_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.go.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.go.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  use gov_cca_TypeMap
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.go.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  integer (kind=sidl_int) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.go)
! Insert-Code-Here {edu.csdms.models.Marssim.go} (go method)
! 
  type(sidl_string_1d) :: properties
  real (kind=sidl_double) :: time
  call Marssim_initializeqi8uk85vgp_mi(self, properties, exception)
  call edu_csdms_models_Marssim_run_mi(self, time, exception)
  call Marssim_finalize2w9ulqmt8gnx_mi(self, exception)  
  
  print *, "DONE!"
  return
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.go)
end subroutine edu_csdms_models_Marssim_go_mi


! 
! Method:  initialize[]
! 

recursive subroutine Marssim_initializeqi8uk85vgp_mi(self, properties,         &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_string_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.initialize.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.initialize.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  use gov_cca_TypeMap
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.initialize.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_string_1d) :: properties
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.initialize)
! Insert-Code-Here {edu.csdms.models.Marssim.initialize} (initialize method)
! 
  type(edu_csdms_tools_TemplateFiles_t) :: templates
  type(edu_csdms_models_Marssim_wrap) :: dp
  character (len=2048) :: input_dir
  character (len=2048) :: current_working_directory
  character (len=2048) :: dir
  character (len=2048) :: jobid
  integer :: stat

  call new (templates, exception)
  call add_file (templates, "MARSSIM.PRM.in", "MARSSIM.PRM", exception)
  call edu_csdms_models_Marssim__get_data_m(self, dp)

  call getString (dp%d_private_data%userinput, "/MARSSIM/Input/Dir", ".", &
                  input_dir, exception);
 ! call getcwd(dir)  
 ! print *, input_dir
  if (input_dir=="GUI") then
    print *, "Input from GUI"
    call new (templates, exception)
    print *, "Create new file"
    call add_file (templates, "MARSSIM.PRM.in", "MARSSIM.PRM", &
                   exception)
    print *, "Substitute"
    call substitute (templates, dp%d_private_data%userinput, & 
          "/MARSSIM/Input/Var/", ".", exception);
    call deleteRef (templates, exception)
    print *, "done."
    !CALL GET_ENVIRONMENT_VARIABLE(NAME="PBS_O_WORKDIR",VALUE=current_working_directory,STATUS=Stat)
    !input_dir=TRIM(current_working_directory) // '/'
    
    CALL GET_ENVIRONMENT_VARIABLE(NAME="PBS_O_JOBID",VALUE=jobid,STATUS=Stat)
    if(jobid=="") then
      print *, "Running on headnode as Interactive job"
      call getcwd(current_working_directory)
    else
      print *, "Running on node with id: ", jobid
      CALL GET_ENVIRONMENT_VARIABLE(NAME="PBS_O_WORKDIR",VALUE=current_working_directory,STATUS=Stat)
    endif
    
    input_dir=TRIM(current_working_directory) // '/'
    print *, "Working directory set to: ", input_dir
    
    call marssim_initialize(trim(input_dir), "MARSSIM.PRM")
    !input_dir=""
  else
    print *, "Input from File"
    call marssim_initialize(trim(input_dir), trim(input_dir) // "MARSSIM.PRM")
  endif
  
  
  print *, "INITIALIZING!"

! This method has not been implemented
! 

! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.initialize)
end subroutine Marssim_initializeqi8uk85vgp_mi


! 
! Method:  run[]
! 

recursive subroutine edu_csdms_models_Marssim_run_mi(self, time, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.run.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.run.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.run.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  real (kind=sidl_double) :: time
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.run)
! Insert-Code-Here {edu.csdms.models.Marssim.run} (run method)
! 
  call marssim_run()
! This method has not been implemented
! 

! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.run)
end subroutine edu_csdms_models_Marssim_run_mi


! 
! Method:  finalize[]
! 

recursive subroutine Marssim_finalize2w9ulqmt8gnx_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.finalize.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.finalize.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.finalize.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.finalize)
! Insert-Code-Here {edu.csdms.models.Marssim.finalize} (finalize method)
  call marssim_finalize()
! 
! This method has not been implemented
! 

! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.finalize)
end subroutine Marssim_finalize2w9ulqmt8gnx_mi


! 
! Method:  getRaster_nx[]
! 

recursive subroutine Marss_getRaster_nxfvuf8f04hs_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_nx.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_nx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_nx.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_nx)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_nx} (getRaster_nx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_nx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_nx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_nx)
end subroutine Marss_getRaster_nxfvuf8f04hs_mi


! 
! Method:  getRaster_ny[]
! 

recursive subroutine Marss_getRaster_nyueolg2be_v_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_ny.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_ny.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_ny.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_ny)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_ny} (getRaster_ny method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_ny)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_ny)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_ny)
end subroutine Marss_getRaster_nyueolg2be_v_mi


! 
! Method:  getRaster_dx[]
! 

recursive subroutine Marss_getRaster_dxvl7mji31dy_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_dx.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_dx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_dx.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_dx)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_dx} (getRaster_dx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_dx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_dx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_dx)
end subroutine Marss_getRaster_dxvl7mji31dy_mi


! 
! Method:  getRaster_dy[]
! 

recursive subroutine Marss_getRaster_dyaljwi0me_t_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_dy.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_dy.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_dy.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_dy)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_dy} (getRaster_dy method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_dy)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_dy)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_dy)
end subroutine Marss_getRaster_dyaljwi0me_t_mi


! 
! Method:  getRaster_ulx[]
! 

recursive subroutine Mars_getRaster_ulxz_crigtyxv_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_ulx.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_ulx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_ulx.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_ulx)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_ulx} (getRaster_ulx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_ulx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_ulx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_ulx)
end subroutine Mars_getRaster_ulxz_crigtyxv_mi


! 
! Method:  getRaster_uly[]
! 

recursive subroutine Mars_getRaster_ulytxtz3jcy_j_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_uly.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_uly.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_uly.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_uly)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_uly} (getRaster_uly method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_uly)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_uly)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_uly)
end subroutine Mars_getRaster_ulytxtz3jcy_j_mi


! 
! Method:  getRaster_grid[]
! 

recursive subroutine Mar_getRaster_gride31g668dq6_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_double_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_grid.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_grid.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_grid.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_2d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.getRaster_grid)
! Insert-Code-Here {edu.csdms.models.Marssim.getRaster_grid} (getRaster_grid method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.getRaster_grid)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.getRaster_grid)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.getRaster_grid)
end subroutine Mar_getRaster_gride31g668dq6_mi


! 
! Method:  get_raster_dimen[]
! 

recursive subroutine M_get_raster_dimen3b5zs9ewkk_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_int_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_raster_dimen.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_raster_dimen.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_raster_dimen.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_int_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_raster_dimen)
! Insert-Code-Here {edu.csdms.models.Marssim.get_raster_dimen} (get_raster_dimen method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_raster_dimen)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_raster_dimen)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_raster_dimen)
end subroutine M_get_raster_dimen3b5zs9ewkk_mi


! 
! Method:  get_raster_res[]
! 

recursive subroutine Mar_get_raster_res2vjk8lgzhx_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_double_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_raster_res.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_raster_res.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_raster_res.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_raster_res)
! Insert-Code-Here {edu.csdms.models.Marssim.get_raster_res} (get_raster_res method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_raster_res)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_raster_res)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_raster_res)
end subroutine Mar_get_raster_res2vjk8lgzhx_mi


! 
! Method:  get_raster_data[]
! 

recursive subroutine Ma_get_raster_datad9ip28q70w_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_array_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_raster_data.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_raster_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_raster_data.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_raster_data)
! Insert-Code-Here {edu.csdms.models.Marssim.get_raster_data} (get_raster_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_raster_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_raster_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_raster_data)
end subroutine Ma_get_raster_datad9ip28q70w_mi


! 
! Method:  get_time_span[]
! 

recursive subroutine Mars_get_time_spanzd_1fbpzqa_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_double_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_time_span.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_time_span.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_time_span.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_time_span)
! Insert-Code-Here {edu.csdms.models.Marssim.get_time_span} (get_time_span method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_time_span)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_time_span)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_time_span)
end subroutine Mars_get_time_spanzd_1fbpzqa_mi


! 
! Method:  get_element_set[]
! 

recursive subroutine Ma_get_element_setrnpp0ecd6g_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IElementSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_element_set.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_element_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_element_set.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IElementSet_t) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_element_set)
! Insert-Code-Here {edu.csdms.models.Marssim.get_element_set} (get_element_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_element_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_element_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_element_set)
end subroutine Ma_get_element_setrnpp0ecd6g_mi


! 
! Method:  get_value_set[]
! 

recursive subroutine Mars_get_value_seth4myh10vvl_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IValueSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_value_set.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_value_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_value_set.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IValueSet_t) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_value_set)
! Insert-Code-Here {edu.csdms.models.Marssim.get_value_set} (get_value_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_value_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_value_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_value_set)
end subroutine Mars_get_value_seth4myh10vvl_mi


! 
! Method:  get_value_set_data[]
! 

recursive subroutine get_value_set_dataod14q45gcb_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use sidl_array_array
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_value_set_data.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.get_value_set_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_value_set_data.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.get_value_set_data)
! Insert-Code-Here {edu.csdms.models.Marssim.get_value_set_data} (get_value_set_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.get_value_set_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.get_value_set_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.get_value_set_data)
end subroutine get_value_set_dataod14q45gcb_mi


! 
! Method:  set_value_set[]
! 

recursive subroutine Mars_set_value_sett0c6720p6z_mi(self, val_string, values, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IValueSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_Marssim
  use edu_csdms_models_Marssim_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.set_value_set.use)
  ! Insert-Code-Here {edu.csdms.models.Marssim.set_value_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.set_value_set.use)
  implicit none
  type(edu_csdms_models_Marssim_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IValueSet_t) :: values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.set_value_set)
! Insert-Code-Here {edu.csdms.models.Marssim.set_value_set} (set_value_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.Marssim.set_value_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.Marssim.set_value_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.set_value_set)
end subroutine Mars_set_value_sett0c6720p6z_mi


! DO-NOT-DELETE splicer.begin(_miscellaneous_code_end)
! Insert-Code-Here {_miscellaneous_code_end} (extra code)
! DO-NOT-DELETE splicer.end(_miscellaneous_code_end)
