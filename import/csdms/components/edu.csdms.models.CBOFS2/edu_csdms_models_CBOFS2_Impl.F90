! 
! File:          edu_csdms_models_CBOFS2_Impl.F90
! Symbol:        edu.csdms.models.CBOFS2-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side implementation for edu.csdms.models.CBOFS2
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 


! 
! Symbol "edu.csdms.models.CBOFS2" (version 0.0)
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
#include "gov_cca_Services_fAbbrev.h"
#include "edu_csdms_ports_IRFPort_fAbbrev.h"
#include "gov_cca_ComponentRelease_fAbbrev.h"
#include "gov_cca_ports_GoPort_fAbbrev.h"
#include "edu_csdms_models_CBOFS2_fAbbrev.h"
#include "sidl_double_fAbbrev.h"
#include "sidl_int_fAbbrev.h"
#include "sidl_string_fAbbrev.h"
! DO-NOT-DELETE splicer.begin(_miscellaneous_code_start)

! Insert-UserDecl-Here 
 
#include "gov_cca_TypeMap_fAbbrev.h"
#include "sidl_SIDLException_fAbbrev.h"

! Bocca generated code. bocca.protected.begin(_miscellaneous_code_start)


! bocca_update_exception. Used only in implementing BOCCA_SIDL_CHECK_F90
        logical function bue_edu_csdms_models_CBOFS2(except, meth, lin) RESULT(bue)
        use sidl
        use sidl_BaseInterface
        use sidl_RuntimeException
        implicit none
        type(sidl_BaseInterface_t) :: except, etmp
        type(sidl_RuntimeException_t) :: rex
!       logical bue
        integer lin
        character (LEN=*) meth, myfilename
        parameter(myfilename='edu_csdms_models_CBOFS2_Impl.F90')

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
   external bue_edu_csdms_models_CBOFS2 ; \
   logical bue_edu_csdms_models_CBOFS2

! call BOCCA_SIDL_CLEAR_F90(except)
#define BOCCA_SIDL_CLEAR_F90(except) \
  boccaClearException(self,except)

! BOCCA_SIDL_CHECK_F90(ex,methodandmessagestring) to jump to exit if
! exception ex was thrown. See SIDL_CHECK documentation for C in babel.
#define BOCCA_SIDL_CHECK_F90(except,method) \
  if ( bue_edu_csdms_models_CBOFS2(except, method) ) goto BOCCAEXIT

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

recursive subroutine CBOFS2__ctorwg4y8bfcwlf3xm96_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._ctor.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS._ctor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._ctor.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._ctor)

! Insert-UserDecl-Here

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.ROMS._ctor)
  ! Access private data
  type(edu_csdms_models_CBOFS2_wrap) :: dp
  ! Allocate memory and initialize
  allocate(dp%d_private_data) ! crash if out of memory
  call set_null(dp%d_private_data%d_services)
! Insert-UserCode-Here

  call edu_csdms_models_CBOFS2__set_data_m(self, dp)
#ifdef _BOCCA_STDERR
    write(*, *) 'CTOR edu.csdms.models.ROMS: F90 allocated'
#endif
! bocca-default-code. User may edit or delete.end(edu.csdms.models.ROMS._ctor)


! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._ctor)
end subroutine CBOFS2__ctorwg4y8bfcwlf3xm96_mi


! 
! Method:  _ctor2[]
! Special Class constructor called when the user wants to wrap his own private data.
! 

recursive subroutine CBOFS2__ctor2g3b0z4s9n4kt2j8_mi(self, private_data,       &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._ctor2.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS._ctor2.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._ctor2.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(edu_csdms_models_CBOFS2_wrap) :: private_data
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._ctor2)
! Insert-Code-Here {edu.csdms.models.ROMS._ctor2} (_ctor2 method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS._ctor2)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS._ctor2)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._ctor2)
end subroutine CBOFS2__ctor2g3b0z4s9n4kt2j8_mi


! 
! Method:  _dtor[]
! Class destructor called when the class is deleted.
! 

recursive subroutine CBOFS2__dtorfaihf98tuzkisk5i_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._dtor.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS._dtor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._dtor.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._dtor)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.ROMS._dtor)
  ! Access private data
  type(edu_csdms_models_CBOFS2_wrap) :: dp
  ! Insert-UserDecl-Here 

  call edu_csdms_models_CBOFS2__get_data_m(self,dp)

  ! Insert-UserCode-Here 

#ifdef _BOCCA_STDERR
    write(*, *) 'DTOR edu.csdms.models.CBOFS2: F90 deallocating'
#endif
  deallocate(dp%d_private_data)
! bocca-default-code. User may edit or delete.end(edu.csdms.models.CBOFS2._dtor)

  ! Insert-UserCode-Here , alternatively

! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._dtor)
end subroutine CBOFS2__dtorfaihf98tuzkisk5i_mi


! 
! Method:  _load[]
! Static class initializer called exactly once before any user-defined method is dispatched
! 

recursive subroutine CBOFS2__load_nephoo76ws0na85_mi(exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._load.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS._load.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._load.use)
  implicit none
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2._load)
! Insert-Code-Here {edu.csdms.models.ROMS._load} (_load method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS._load)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS._load)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2._load)
end subroutine CBOFS2__load_nephoo76ws0na85_mi


! 
! Method:  boccaSetServices[]
! 

recursive subroutine C_boccaSetServicesybk7x9qu52_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaSetServices.use)
  use gov_cca_ComponentRelease
  use gov_cca_TypeMap
  use gov_cca_Port
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaSetServices.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaSetServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.boccaSetServices)
  
  type(edu_csdms_models_CBOFS2_wrap) :: dp
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
  call edu_csdms_models_CBOFS2__get_data_m(self, dp)
  ! Set my reference to the services handle
  dp%d_private_data%d_services = services
  ! Increment reference count for the services subroutine parameter
  call addRef(services, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 failed addref(services)')
  dr_services = .true.


  call createTypeMap(dp%d_private_data%d_services, typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 failed to createTypeMap')

  dr_port = .false.
  call cast(self, port, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 is not Port')
  dr_port = .true.

! Add gov.cca.ports.GoPort:Run provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'Run', 'gov.cca.ports.GoPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 failed addProvidesPort Run ')

! Add edu.csdms.ports.IRFPort:ROMS provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'CBOFS2', 'edu.csdms.ports.IRFPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 failed addProvidesPort CBOFS2 ')

  dr_port = .false.
  call deleteRef(port,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 failed deleteRef(port)')

! Register gov.cca.ports.ParameterPortFactory:ppf uses port
  call registerUsesPort(dp%d_private_data%d_services, &
      'ppf', 'gov.cca.ports.ParameterPortFactory', &
      typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2 failed registerUsesPort ppf')

  dr_typeMap = .false.
  call deleteRef(typeMap,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2.boccaSetServices: failed deleteRef(typeMap)')

! Register component edu.csdms.models.CBOFS2 for release by the framework 
  call cast(self, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2.boccaSetServices: is not ComponentRelease')
  call registerForRelease(dp%d_private_data%d_services, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2.boccaSetServices: failed registerForRelease')
  call deleteRef(cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.CBOFS2.boccaSetServices: failed deleteRef(cr)')
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
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.boccaSetServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaSetServices)
end subroutine C_boccaSetServicesybk7x9qu52_mi


! 
! Method:  boccaReleaseServices[]
! 

recursive subroutine boccaReleaseServicwfg8ec9ttt_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaReleaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.CBOFS2.boccaReleaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaReleaseServices.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaReleaseServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.boccaReleaseServices)
  type(edu_csdms_models_CBOFS2_wrap) :: dp
  type(SIDL_BaseInterface_t) :: excpt, throwaway
! trap and optionally print all port-related exceptions. ignore others.

! Access private data
  BOCCA_EXTERNAL
  call edu_csdms_models_CBOFS2__get_data_m(self, dp)
  call deleteRef(dp%d_private_data%d_services, throwaway)
  call set_null(dp%d_private_data%d_services)
  call BOCCA_SIDL_CLEAR_F90(throwaway)

! Un-provide gov.cca.ports.GoPort port with port name Run 
  call removeProvidesPort(services, 'Run', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort Run', &
      .false., throwaway &
  )

! Un-provide edu.csdms.ports.IRFPort port with port name ROMS 
  call removeProvidesPort(services, 'CBOFS2', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort CBOFS2', &
      .false., throwaway &
  )

! Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  call unregisterUsesPort(services, 'ppf', excpt)
  call checkException(self, excpt,  &
       'Error calling unregisterUsesPort ppf', &
       .false., throwaway &
  )

  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.boccaReleaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaReleaseServices)
end subroutine boccaReleaseServicwfg8ec9ttt_mi


! 
! Method:  checkException[]
! 

recursive subroutine CBO_checkExceptionvik443fu_x_mi(self, excpt, msg, fatal,  &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.checkException.use)
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.checkException.use)
  use sidl_BaseException
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.checkException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.checkException.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: excpt
  ! inout
  character (len=*) :: msg
  ! in
  logical :: fatal
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.checkException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.checkException)

  type(sidl_BaseInterface_t) :: throwaway  ! unused exception
  type(sidl_BaseException_t) :: be
  character (LEN=4096) val

  if (not_null(excpt)) then
#ifdef _BOCCA_STDERR
    write(*, *) 'edu.csdms.models.CBOFS2: ', msg
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
    if (fatal) stop 'edu.csdms.models.CBOFS2.checkException called with fatal .true.'
  end if
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.checkException)
    
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.checkException)
end subroutine CBO_checkExceptionvik443fu_x_mi


! 
! Method:  boccaClearException[]
! 

recursive subroutine boccaClearExceptiooe2ayosnkr_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaClearException.use)
  ! Insert-Code-Here {edu.csdms.models.CBOFS2.boccaClearException.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaClearException.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaClearException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.boccaClearException)
        type(sidl_BaseInterface_t) :: etmp
        if (not_null(exception)) then
            call deleteRef(exception, etmp)
        endif
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.boccaClearException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaClearException)
end subroutine boccaClearExceptiooe2ayosnkr_mi


! 
! Method:  boccaThrowException[]
! 

recursive subroutine boccaThrowExceptiohnnux6q8w4_mi(self, message, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaThrowException.use)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.boccaThrowException.use)
        use sidl_SIDLException
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.boccaThrowException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaThrowException.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: message
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaThrowException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.boccaThrowException)
        type (sidl_BaseInterface_t) :: except
        type (sidl_SIDLException_t) :: einst
        character (LEN=*) myfilename
        parameter(myfilename='edu_csdms_models_CBOFS2_Impl.F90')
        call new(einst, except)
        ! clear except here?
        call add(einst, myfilename, 0_sidl_int, message, except)
        ! clear except here?
        call cast(einst, exception, except)
        call deleteRef(einst,except)
        ! clear except here?
        return
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.boccaThrowException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaThrowException)
end subroutine boccaThrowExceptiohnnux6q8w4_mi


! 
! Method:  boccaForceUsePortInclude[]
!  This function should never be called, but helps babel generate better code. 
! 

recursive subroutine boccaForceUsePortIlkj_rm0lkn_mi(self, dummy0, dummy1,     &
  dummy2, exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_ports_ParameterPortFactory
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_tools_ConfigDialog
  use edu_csdms_tools_TemplateFiles
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaForceUsePortInclude.use)
  ! Insert-Code-Here {edu.csdms.models.CBOFS2.boccaForceUsePortInclude.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaForceUsePortInclude.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(gov_cca_ports_ParameterPortFactory_t) :: dummy0
  ! in
  type(edu_csdms_tools_TemplateFiles_t) :: dummy1
  ! in
  type(edu_csdms_tools_ConfigDialog_t) :: dummy2
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.boccaForceUsePortInclude)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.CBOFS2.boccaForceUsePortInclude)
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.CBOFS2.boccaForceUsePortInclude)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.boccaForceUsePortInclude)
end subroutine boccaForceUsePortIlkj_rm0lkn_mi


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

recursive subroutine CBOFS2_setServices3n5e2whjfh_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.setServices.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.setServices.use} (use statements)
  use gov_cca_ports_ParameterPortFactory
  use gov_cca_ports_ParameterPort
  use edu_csdms_tools_ConfigDialog

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.setServices.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.setServices)
! bocca-default-code. User may edit or delete.begin(edu.csdms.models.ROMS.setServices)
    BOCCA_EXTERNAL

    ! Insert-UserCode-Here
  type(gov_cca_Port_t) :: generalPort
  !type(gov_cca_ports_ParameterPortFactory_t) :: paramPortFactory
  type(gov_cca_ports_ParameterPortFactory_t) :: ppf
  type(gov_cca_TypeMap_t) :: userinput
  type(sidl_BaseInterface_t) :: throwawayException
  type(edu_csdms_tools_ConfigDialog_t) :: dialog
  type(edu_csdms_models_CBOFS2_wrap) :: dp


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
                           "CBOFS2 Parameters", throwawayException)

        call new (dialog, throwawayException)
        call edu_csdms_tools_ConfigDialog_read_m(dialog, "CBOFS2.xml", &
              throwawayException)
        call edu_csdms_tools_ConfigDialog_construct_m (dialog, ppf, &
              userinput, throwawayException)

        call addParameterPort(ppf, userinput, services, &
                              throwawayException)
      end if
    end if
    call releasePort(services, "ppf", throwawayException)

    call edu_csdms_models_CBOFS2__get_data_m(self, dp)
    dp%d_private_data%userinput = userinput

    return

! Exit route when there are exceptions
BOCCAEXIT      continue
    ! Insert cleanup code here if needed.
    return
! bocca-default-code. User may edit or delete.end(edu.csdms.models.CBOFS2.setServices)

! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.setServices)
end subroutine CBOFS2_setServices3n5e2whjfh_mi


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

recursive subroutine CB_releaseServices3npovj7cm1_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.releaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.releaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.releaseServices.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.releaseServices)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.ROMS.releaseServices)
    BOCCA_EXTERNAL

! Insert-UserCode-Here {edu.csdms.models.ROMS.releaseServices} (releaseServices method)

    call boccaReleaseServices(self, services, exception)
    BOCCA_SIDL_CHECK_F90(exception , 'releaseServices')
    return
    
! Exit route when there are exceptions
BOCCAEXIT      continue

    ! Insert cleanup code here if needed.

    return

! bocca-default-code. User may edit or delete.end(edu.csdms.models.ROMS.releaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.releaseServices)
end subroutine CB_releaseServices3npovj7cm1_mi


! 
! Method:  go[]
!  
! Execute some encapsulated functionality on the component. 
! Return 0 if ok, -1 if internal error but component may be 
! used further, and -2 if error so severe that component cannot
! be further used safely.
! 

recursive subroutine edu_csdms_models_CBOFS2_go_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.go.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.go.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  use gov_cca_TypeMap
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.go.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  integer (kind=sidl_int) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.go)
  type(edu_csdms_tools_TemplateFiles_t) :: template
  type(edu_csdms_models_CBOFS2_wrap) :: dp
  character (len=2048) :: input_dir
  character (len=2048) :: input_file
  character (len=2048) :: site_prefix
  character (len=2048) :: case_prefix
  integer :: ng
  real(r8) :: RunInterval            ! seconds
  integer :: ntimes ! Number of timesteps
  double precision :: dt

  call edu_csdms_models_CBOFS2__get_data_m(self, dp)
  call getString (dp%d_private_data%userinput, "/ROMS/Input/Dir", ".", &
                  input_dir, exception)
  call getString (dp%d_private_data%userinput, "/ROMS/Input/File", ".", &
                  input_file, exception)
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

  print *, 'Input dir: ', input_dir
  print *, 'Input File: ', input_file

  if (input_dir=="GUI") then
    input_dir = "."
    print *, "Input from GUI"
    call new (template, exception)
    print *, "Creating new file: ", input_file
    call add_file (template, "ROMS_ser_upwelling.in.in", input_file, &
                   exception)
    call add_file (template, "ROMS_ser_varinfo.dat.in", "varinfo.dat", &
                   exception)
    print *, "Substitute"
    call substitute (template, dp%d_private_data%userinput, & 
          "/ROMS/Input/Var/", ".", exception);
    RunInterval = ntimes * dt    
  else
    print *, 'Copying varinfo.dat to working directory... '
    call system("cp " // trim(input_dir) // "/varinfo.dat" // " .") 
    input_file = trim(input_dir) // "/" // trim(input_file)
    print *, "Input from File: ", input_file
  endif

  print *, "Reading ", input_file
  open (stdinp, FILE=input_file, ACTION='read')

  print *, "Initialize ROMS"
  if (exit_flag.eq.NoError) then
    dp%d_private_data%first=.TRUE.
    call ROMS_initialize (dp%d_private_data%first)
  end if

  if (exit_flag.eq.NoError) then
    print *, "Run ROMS for time steps:", RunInterval
    call ROMS_run (RunInterval)
  end if
  
  if (exit_flag.eq.NoError) then
     print *, 'Finalize ROMS...'
     call ROMS_finalize()
  end if
  
  print *, "DONE!"
  return
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.go)
end subroutine edu_csdms_models_CBOFS2_go_mi


! 
! Method:  initialize[]
! 

recursive subroutine CBOFS2_initializeqbw0w804px5_mi(self, properties,         &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_string_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.initialize.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.initialize.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.initialize.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_string_1d) :: properties
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.initialize)
! Insert-Code-Here {edu.csdms.models.ROMS.initialize} (initialize method)
  type(edu_csdms_tools_TemplateFiles_t) :: template

  call new (template, exception)
!  call add_file (template, "ROMS_upwelling.in.in", "ocean.in", exception)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.initialize)
!  type(sidl_BaseInterface_t) :: throwaway
!  type(sidl_NotImplementedException_t) :: notImpl
!  call new(notImpl, exception)
!  call setNote(notImpl, 'Not Implemented', exception)
!  call cast(notImpl, exception,throwaway)
!  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.initialize)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.initialize)
end subroutine CBOFS2_initializeqbw0w804px5_mi


! 
! Method:  run[]
! 

recursive subroutine edu_csdms_models_CBOFS2_run_mi(self, time, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.run.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.run.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.run.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  real (kind=sidl_double) :: time
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.run)
! Insert-Code-Here {edu.csdms.models.ROMS.run} (run method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.run)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.run)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.run)
end subroutine edu_csdms_models_CBOFS2_run_mi


! 
! Method:  finalize[]
! 

recursive subroutine CBOFS2_finalizeh9up_cbhsb_wt_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.finalize.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.finalize.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.finalize.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.finalize)
! Insert-Code-Here {edu.csdms.models.ROMS.finalize} (finalize method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.finalize)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.finalize)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.finalize)
end subroutine CBOFS2_finalizeh9up_cbhsb_wt_mi


! 
! Method:  getRaster_nx[]
! 

recursive subroutine CBOFS_getRaster_nxqb8n2bfs4s_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_nx.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_nx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_nx.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_nx)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_nx} (getRaster_nx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_nx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_nx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_nx)
end subroutine CBOFS_getRaster_nxqb8n2bfs4s_mi


! 
! Method:  getRaster_ny[]
! 

recursive subroutine CBOFS_getRaster_ny27rzy8udsu_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_ny.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_ny.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_ny.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_ny)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_ny} (getRaster_ny method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_ny)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_ny)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_ny)
end subroutine CBOFS_getRaster_ny27rzy8udsu_mi


! 
! Method:  getRaster_dx[]
! 

recursive subroutine CBOFS_getRaster_dxlczqmjymjw_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_dx.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_dx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_dx.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_dx)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_dx} (getRaster_dx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_dx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_dx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_dx)
end subroutine CBOFS_getRaster_dxlczqmjymjw_mi


! 
! Method:  getRaster_dy[]
! 

recursive subroutine CBOFS_getRaster_dyyt47z6krxg_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_dy.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_dy.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_dy.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_dy)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_dy} (getRaster_dy method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_dy)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_dy)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_dy)
end subroutine CBOFS_getRaster_dyyt47z6krxg_mi


! 
! Method:  getRaster_ulx[]
! 

recursive subroutine CBOF_getRaster_ulxfzdh0i4xgk_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_ulx.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_ulx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_ulx.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_ulx)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_ulx} (getRaster_ulx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_ulx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_ulx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_ulx)
end subroutine CBOF_getRaster_ulxfzdh0i4xgk_mi


! 
! Method:  getRaster_uly[]
! 

recursive subroutine CBOF_getRaster_ulyqabv1dtn07_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_uly.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_uly.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_uly.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_uly)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_uly} (getRaster_uly method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_uly)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_uly)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_uly)
end subroutine CBOF_getRaster_ulyqabv1dtn07_mi


! 
! Method:  getRaster_grid[]
! 

recursive subroutine CBO_getRaster_gridbcxmk6r21k_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_double_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_grid.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_grid.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_grid.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_2d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.getRaster_grid)
! Insert-Code-Here {edu.csdms.models.ROMS.getRaster_grid} (getRaster_grid method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.getRaster_grid)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.getRaster_grid)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.getRaster_grid)
end subroutine CBO_getRaster_gridbcxmk6r21k_mi


! 
! Method:  get_raster_dimen[]
! 

recursive subroutine C_get_raster_dimenqhl8fndkh4_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_int_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_raster_dimen.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_raster_dimen.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_raster_dimen.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_int_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_raster_dimen)
! Insert-Code-Here {edu.csdms.models.ROMS.get_raster_dimen} (get_raster_dimen method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_raster_dimen)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_raster_dimen)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_raster_dimen)
end subroutine C_get_raster_dimenqhl8fndkh4_mi


! 
! Method:  get_raster_res[]
! 

recursive subroutine CBO_get_raster_res78pw4fao2n_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_double_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_raster_res.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_raster_res.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_raster_res.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_raster_res)
! Insert-Code-Here {edu.csdms.models.ROMS.get_raster_res} (get_raster_res method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_raster_res)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_raster_res)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_raster_res)
end subroutine CBO_get_raster_res78pw4fao2n_mi


! 
! Method:  get_raster_data[]
! 

recursive subroutine CB_get_raster_datah2d2607uef_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_array_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_raster_data.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_raster_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_raster_data.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_raster_data)
! Insert-Code-Here {edu.csdms.models.ROMS.get_raster_data} (get_raster_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_raster_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_raster_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_raster_data)
end subroutine CB_get_raster_datah2d2607uef_mi


! 
! Method:  get_time_span[]
! 

recursive subroutine CBOF_get_time_span4527sbvqe3_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_double_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_time_span.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_time_span.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_time_span.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_time_span)
! Insert-Code-Here {edu.csdms.models.ROMS.get_time_span} (get_time_span method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_time_span)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_time_span)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_time_span)
end subroutine CBOF_get_time_span4527sbvqe3_mi


! 
! Method:  get_element_set[]
! 

recursive subroutine CB_get_element_set5rz89s5vs0_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IElementSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_element_set.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_element_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_element_set.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IElementSet_t) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_element_set)
! Insert-Code-Here {edu.csdms.models.ROMS.get_element_set} (get_element_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_element_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_element_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_element_set)
end subroutine CB_get_element_set5rz89s5vs0_mi


! 
! Method:  get_value_set[]
! 

recursive subroutine CBOF_get_value_setr888uth7ft_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IValueSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_value_set.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_value_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_value_set.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IValueSet_t) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_value_set)
! Insert-Code-Here {edu.csdms.models.ROMS.get_value_set} (get_value_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_value_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_value_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_value_set)
end subroutine CBOF_get_value_setr888uth7ft_mi


! 
! Method:  get_value_set_data[]
! 

recursive subroutine get_value_set_datasoqbq1orfu_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use sidl_array_array
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_value_set_data.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.get_value_set_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_value_set_data.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.get_value_set_data)
! Insert-Code-Here {edu.csdms.models.ROMS.get_value_set_data} (get_value_set_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.get_value_set_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.get_value_set_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.get_value_set_data)
end subroutine get_value_set_datasoqbq1orfu_mi


! 
! Method:  set_value_set[]
! 

recursive subroutine CBOF_set_value_set9s3thnyov1_mi(self, val_string, values, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IValueSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_CBOFS2
  use edu_csdms_models_CBOFS2_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.set_value_set.use)
  ! Insert-Code-Here {edu.csdms.models.ROMS.set_value_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.set_value_set.use)
  implicit none
  type(edu_csdms_models_CBOFS2_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IValueSet_t) :: values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.CBOFS2.set_value_set)
! Insert-Code-Here {edu.csdms.models.ROMS.set_value_set} (set_value_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.ROMS.set_value_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.ROMS.set_value_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.CBOFS2.set_value_set)
end subroutine CBOF_set_value_set9s3thnyov1_mi


! DO-NOT-DELETE splicer.begin(_miscellaneous_code_end)
! Insert-Code-Here {_miscellaneous_code_end} (extra code)
! DO-NOT-DELETE splicer.end(_miscellaneous_code_end)
