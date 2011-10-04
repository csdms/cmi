! 
! File:          edu_csdms_models_LTRANS_Impl.F90
! Symbol:        edu.csdms.models.LTRANS-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side implementation for edu.csdms.models.LTRANS
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 


! 
! Symbol "edu.csdms.models.LTRANS" (version 0.0)
! 


#include "sidl_NotImplementedException_fAbbrev.h"
#include "edu_csdms_tools_TemplateFiles_fAbbrev.h"
#include "gov_cca_Port_fAbbrev.h"
#include "sidl_ClassInfo_fAbbrev.h"
#include "sidl_BaseClass_fAbbrev.h"
#include "edu_csdms_tools_PrintQueue_fAbbrev.h"
#include "gov_cca_Component_fAbbrev.h"
#include "sidl_BaseInterface_fAbbrev.h"
#include "gov_cca_ports_ParameterPortFactory_fAbbrev.h"
#include "sidl_BaseException_fAbbrev.h"
#include "edu_csdms_models_LTRANS_fAbbrev.h"
#include "edu_csdms_openmi_IValueSet_fAbbrev.h"
#include "edu_csdms_openmi_IElementSet_fAbbrev.h"
#include "edu_csdms_tools_ConfigDialog_fAbbrev.h"
#include "gov_cca_CCAException_fAbbrev.h"
#include "sidl_RuntimeException_fAbbrev.h"
#include "gov_cca_Services_fAbbrev.h"
#include "edu_csdms_tools_Verbose_fAbbrev.h"
#include "edu_csdms_ports_IRFPort_fAbbrev.h"
#include "gov_cca_ComponentRelease_fAbbrev.h"
#include "edu_csdms_openmi_ScalarSet_fAbbrev.h"
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
        logical function bue_edu_csdms_models_LTRANS(except, meth, lin) RESULT(bue)
        use sidl
        use sidl_BaseInterface
        use sidl_RuntimeException
        implicit none
        type(sidl_BaseInterface_t) :: except, etmp
        type(sidl_RuntimeException_t) :: rex
!       logical bue
        integer lin
        character (LEN=*) meth, myfilename
        parameter(myfilename='edu_csdms_models_LTRANS_Impl.F90')

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
   external bue_edu_csdms_models_LTRANS ; \
   logical bue_edu_csdms_models_LTRANS

! call BOCCA_SIDL_CLEAR_F90(except)
#define BOCCA_SIDL_CLEAR_F90(except) \
  boccaClearException(self,except)

! BOCCA_SIDL_CHECK_F90(ex,methodandmessagestring) to jump to exit if
! exception ex was thrown. See SIDL_CHECK documentation for C in babel.
#define BOCCA_SIDL_CHECK_F90(except,method) \
  if ( bue_edu_csdms_models_LTRANS(except, method) ) goto BOCCAEXIT

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

recursive subroutine LTRANS__ctor1504t5v5_r9gbxs0_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._ctor.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS._ctor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._ctor.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._ctor)

! Insert-UserDecl-Here

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.LTRANS._ctor)
  ! Access private data
  type(edu_csdms_models_LTRANS_wrap) :: dp
  ! Allocate memory and initialize
  allocate(dp%d_private_data) ! crash if out of memory
  call set_null(dp%d_private_data%d_services)
! Insert-UserCode-Here

  call edu_csdms_models_LTRANS__set_data_m(self, dp)
#ifdef _BOCCA_STDERR
    write(*, *) 'CTOR edu.csdms.models.LTRANS: F90 allocated'
#endif
! bocca-default-code. User may edit or delete.end(edu.csdms.models.LTRANS._ctor)


! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._ctor)
end subroutine LTRANS__ctor1504t5v5_r9gbxs0_mi


! 
! Method:  _ctor2[]
! Special Class constructor called when the user wants to wrap his own private data.
! 

recursive subroutine LTRANS__ctor2s3j587w_unpm4i0_mi(self, private_data,       &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._ctor2.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS._ctor2.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._ctor2.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(edu_csdms_models_LTRANS_wrap) :: private_data
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._ctor2)
! Insert-Code-Here {edu.csdms.models.LTRANS._ctor2} (_ctor2 method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS._ctor2)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS._ctor2)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._ctor2)
end subroutine LTRANS__ctor2s3j587w_unpm4i0_mi


! 
! Method:  _dtor[]
! Class destructor called when the class is deleted.
! 

recursive subroutine LTRANS__dtor3mv3uuoo86qmvil2_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._dtor.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS._dtor.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._dtor.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._dtor)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.LTRANS._dtor)
  ! Access private data
  type(edu_csdms_models_LTRANS_wrap) :: dp
  ! Insert-UserDecl-Here 

  call edu_csdms_models_LTRANS__get_data_m(self,dp)

  ! Insert-UserCode-Here 

#ifdef _BOCCA_STDERR
    write(*, *) 'DTOR edu.csdms.models.LTRANS: F90 deallocating'
#endif
  deallocate(dp%d_private_data)
! bocca-default-code. User may edit or delete.end(edu.csdms.models.LTRANS._dtor)

  ! Insert-UserCode-Here , alternatively

! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._dtor)
end subroutine LTRANS__dtor3mv3uuoo86qmvil2_mi


! 
! Method:  _load[]
! Static class initializer called exactly once before any user-defined method is dispatched
! 

recursive subroutine LTRANS__loadh4mddy7zvsumw056_mi(exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._load.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS._load.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._load.use)
  implicit none
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS._load)
! Insert-Code-Here {edu.csdms.models.LTRANS._load} (_load method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS._load)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS._load)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS._load)
end subroutine LTRANS__loadh4mddy7zvsumw056_mi


! 
! Method:  boccaSetServices[]
! 

recursive subroutine L_boccaSetServices7getohcfou_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaSetServices.use)
  use gov_cca_ComponentRelease
  use gov_cca_TypeMap
  use gov_cca_Port
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaSetServices.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaSetServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.boccaSetServices)
  
  type(edu_csdms_models_LTRANS_wrap) :: dp
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
  call edu_csdms_models_LTRANS__get_data_m(self, dp)
  ! Set my reference to the services handle
  dp%d_private_data%d_services = services
  ! Increment reference count for the services subroutine parameter
  call addRef(services, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed addref(services)')
  dr_services = .true.


  call createTypeMap(dp%d_private_data%d_services, typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed to createTypeMap')

  dr_port = .false.
  call cast(self, port, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS is not Port')
  dr_port = .true.

! Add gov.cca.ports.GoPort:Run provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'Run', 'gov.cca.ports.GoPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed addProvidesPort Run ')

! Add edu.csdms.ports.IRFPort:xyz provides port
  call addProvidesPort(dp%d_private_data%d_services, port, &
       'xyz', 'edu.csdms.ports.IRFPort', &
       typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed addProvidesPort xyz ')

  dr_port = .false.
  call deleteRef(port,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed deleteRef(port)')

! Register gov.cca.ports.ParameterPortFactory:ppf uses port
  call registerUsesPort(dp%d_private_data%d_services, &
      'ppf', 'gov.cca.ports.ParameterPortFactory', &
      typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed registerUsesPort ppf')

! Register edu.csdms.ports.IRFPort:Ocean uses port
  call registerUsesPort(dp%d_private_data%d_services, &
      'Ocean', 'edu.csdms.ports.IRFPort', &
      typeMap, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS failed registerUsesPort Ocean')

  dr_typeMap = .false.
  call deleteRef(typeMap,exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS.boccaSetServices: failed deleteRef(typeMap)')

! Register component edu.csdms.models.LTRANS for release by the framework 
  call cast(self, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS.boccaSetServices: is not ComponentRelease')
  call registerForRelease(dp%d_private_data%d_services, cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS.boccaSetServices: failed registerForRelease')
  call deleteRef(cr, exception)
  BOCCA_SIDL_CHECK_F90(exception,'edu.csdms.models.LTRANS.boccaSetServices: failed deleteRef(cr)')
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
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.boccaSetServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaSetServices)
end subroutine L_boccaSetServices7getohcfou_mi


! 
! Method:  boccaReleaseServices[]
! 

recursive subroutine boccaReleaseServic79h8ipbnz1_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaReleaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.boccaReleaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaReleaseServices.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaReleaseServices)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.boccaReleaseServices)
  type(edu_csdms_models_LTRANS_wrap) :: dp
  type(SIDL_BaseInterface_t) :: excpt, throwaway
! trap and optionally print all port-related exceptions. ignore others.

! Access private data
  BOCCA_EXTERNAL
  call edu_csdms_models_LTRANS__get_data_m(self, dp)
  call deleteRef(dp%d_private_data%d_services, throwaway)
  call set_null(dp%d_private_data%d_services)
  call BOCCA_SIDL_CLEAR_F90(throwaway)

! Un-provide gov.cca.ports.GoPort port with port name Run 
  call removeProvidesPort(services, 'Run', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort Run', &
      .false., throwaway &
  )

! Un-provide edu.csdms.ports.IRFPort port with port name xyz 
  call removeProvidesPort(services, 'xyz', excpt)
  call checkException(self, excpt, &
      'Error: Could not removeProvidesPort xyz', &
      .false., throwaway &
  )

! Release gov.cca.ports.ParameterPortFactory port with port name ppf 
  call unregisterUsesPort(services, 'ppf', excpt)
  call checkException(self, excpt,  &
       'Error calling unregisterUsesPort ppf', &
       .false., throwaway &
  )

! Release edu.csdms.ports.IRFPort port with port name Ocean 
  call unregisterUsesPort(services, 'Ocean', excpt)
  call checkException(self, excpt,  &
       'Error calling unregisterUsesPort Ocean', &
       .false., throwaway &
  )

  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.boccaReleaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaReleaseServices)
end subroutine boccaReleaseServic79h8ipbnz1_mi


! 
! Method:  checkException[]
! 

recursive subroutine LTR_checkExceptiona3k93058kd_mi(self, excpt, msg, fatal,  &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.checkException.use)
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.checkException.use)
  use sidl_BaseException
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.checkException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.checkException.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: excpt
  ! inout
  character (len=*) :: msg
  ! in
  logical :: fatal
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.checkException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.checkException)

  type(sidl_BaseInterface_t) :: throwaway  ! unused exception
  type(sidl_BaseException_t) :: be
  character (LEN=4096) val

  if (not_null(excpt)) then
#ifdef _BOCCA_STDERR
    write(*, *) 'edu.csdms.models.LTRANS: ', msg
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
    if (fatal) stop 'edu.csdms.models.LTRANS.checkException called with fatal .true.'
  end if
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.checkException)
    
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.checkException)
end subroutine LTR_checkExceptiona3k93058kd_mi


! 
! Method:  boccaClearException[]
! 

recursive subroutine boccaClearExceptio7cim5sj56n_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaClearException.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.boccaClearException.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaClearException.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaClearException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.boccaClearException)
        type(sidl_BaseInterface_t) :: etmp
        if (not_null(exception)) then
            call deleteRef(exception, etmp)
        endif
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.boccaClearException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaClearException)
end subroutine boccaClearExceptio7cim5sj56n_mi


! 
! Method:  boccaThrowException[]
! 

recursive subroutine boccaThrowExceptiom7ubgu80_4_mi(self, message, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaThrowException.use)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.boccaThrowException.use)
        use sidl_SIDLException
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.boccaThrowException.use)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaThrowException.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: message
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaThrowException)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.boccaThrowException)
        type (sidl_BaseInterface_t) :: except
        type (sidl_SIDLException_t) :: einst
        character (LEN=*) myfilename
        parameter(myfilename='edu_csdms_models_LTRANS_Impl.F90')
        call new(einst, except)
        ! clear except here?
        call add(einst, myfilename, 0_sidl_int, message, except)
        ! clear except here?
        call cast(einst, exception, except)
        call deleteRef(einst,except)
        ! clear except here?
        return
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.boccaThrowException)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaThrowException)
end subroutine boccaThrowExceptiom7ubgu80_4_mi


! 
! Method:  boccaForceUsePortInclude[]
!  This function should never be called, but helps babel generate better code. 
! 

recursive subroutine boccaForceUsePortI70q2v74knq_mi(self, dummy0, dummy1,     &
  dummy2, dummy3, dummy4, dummy5, dummy6, exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_ports_IRFPort
  use gov_cca_ports_ParameterPortFactory
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_openmi_ScalarSet
  use edu_csdms_tools_ConfigDialog
  use edu_csdms_tools_PrintQueue
  use edu_csdms_tools_TemplateFiles
  use edu_csdms_tools_Verbose
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaForceUsePortInclude.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.boccaForceUsePortInclude.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaForceUsePortInclude.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(gov_cca_ports_ParameterPortFactory_t) :: dummy0
  ! in
  type(edu_csdms_ports_IRFPort_t) :: dummy1
  ! in
  type(edu_csdms_tools_Verbose_t) :: dummy2
  ! in
  type(edu_csdms_tools_TemplateFiles_t) :: dummy3
  ! in
  type(edu_csdms_openmi_ScalarSet_t) :: dummy4
  ! in
  type(edu_csdms_tools_ConfigDialog_t) :: dummy5
  ! in
  type(edu_csdms_tools_PrintQueue_t) :: dummy6
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.boccaForceUsePortInclude)
! DO-NOT-EDIT-BOCCA
! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.boccaForceUsePortInclude)
  return
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.boccaForceUsePortInclude)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.boccaForceUsePortInclude)
end subroutine boccaForceUsePortI70q2v74knq_mi


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

recursive subroutine LTRANS_setServices60jea3djj3_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.setServices.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.setServices.use} (use statements)
  use gov_cca_ports_ParameterPortFactory
  use gov_cca_ports_ParameterPort
  use edu_csdms_tools_ConfigDialog

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.setServices.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.setServices)
! bocca-default-code. User may edit or delete.begin(edu.csdms.models.LTRANS.setServices)
    BOCCA_EXTERNAL

    ! Insert-UserCode-Here
    type(gov_cca_Port_t) :: general_port
    type(gov_cca_ports_ParameterPortFactory_t) :: ppf
    type(gov_cca_TypeMap_t) :: userinput
    type(sidl_BaseInterface_t) :: throwaway_exception
    type(edu_csdms_tools_ConfigDialog_t) :: dialog
    type(edu_csdms_models_LTRANS_wrap) :: dp

    call boccaSetServices(self, services, exception) 
    BOCCA_SIDL_CHECK_F90(exception , 'setServices')

    ! Insert-UserCode-Here
    call createTypeMap(services, userinput, exception)
    call getPort(services, "ppf", general_port, exception)
    if (is_null(exception)) then
      call cast(general_port, ppf, throwaway_exception)
      if (not_null(ppf)) then
        call initParameterData(ppf, userinput, &
                               "Configure", throwaway_exception)
        call setBatchTitle(ppf, userinput, &
                           "LTRANS Parameters", throwaway_exception)

        call new (dialog, throwaway_exception)
        call edu_csdms_tools_ConfigDialog_read_m(dialog, "LTRANS.xml", &
              throwaway_exception)
        call edu_csdms_tools_ConfigDialog_construct_m (dialog, ppf, &
              userinput, throwaway_exception)

        call addParameterPort(ppf, userinput, services, &
                              throwaway_exception)
      end if
    end if
    call releasePort(services, "ppf", throwaway_exception)

    call edu_csdms_models_LTRANS__get_data_m(self, dp)
    dp%d_private_data%userinput = userinput

    return

! Exit route when there are exceptions
BOCCAEXIT      continue
    ! Insert cleanup code here if needed.
    return
! bocca-default-code. User may edit or delete.end(edu.csdms.models.LTRANS.setServices)

! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.setServices)
end subroutine LTRANS_setServices60jea3djj3_mi


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

recursive subroutine LT_releaseServicesw0ytqjb3y3_mi(self, services,           &
  exception)
  use sidl
  use sidl_NotImplementedException
  use gov_cca_CCAException
  use gov_cca_Services
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.releaseServices.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.releaseServices.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.releaseServices.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(gov_cca_Services_t) :: services
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.releaseServices)

! bocca-default-code. User may edit or delete.begin(edu.csdms.models.LTRANS.releaseServices)
    BOCCA_EXTERNAL

! Insert-UserCode-Here {edu.csdms.models.LTRANS.releaseServices} (releaseServices method)

    call boccaReleaseServices(self, services, exception)
    BOCCA_SIDL_CHECK_F90(exception , 'releaseServices')
    return
    
! Exit route when there are exceptions
BOCCAEXIT      continue

    ! Insert cleanup code here if needed.

    return

! bocca-default-code. User may edit or delete.end(edu.csdms.models.LTRANS.releaseServices)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.releaseServices)
end subroutine LT_releaseServicesw0ytqjb3y3_mi


! 
! Method:  go[]
!  
! Execute some encapsulated functionality on the component. 
! Return 0 if ok, -1 if internal error but component may be 
! used further, and -2 if error so severe that component cannot
! be further used safely.
! 

recursive subroutine edu_csdms_models_LTRANS_go_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.go.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.go.use} (use statements)
  use edu_csdms_tools_TemplateFiles
  use gov_cca_TypeMap
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.go.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  integer (kind=sidl_int) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.go)
  type(edu_csdms_tools_TemplateFiles_t) :: template
  type(edu_csdms_models_LTRANS_wrap) :: dp
  character (len=2048) :: input_dir
  character (len=2048) :: site_prefix
  character (len=2048) :: case_prefix
  integer :: ng

  call edu_csdms_models_LTRANS__get_data_m(self, dp)

  call getString (dp%d_private_data%userinput, "/LTRANS/Input/Dir", ".", &
                  input_dir, exception);
  call getString (dp%d_private_data%userinput, "/LTRANS/SitePrefix", "", &
                  site_prefix, exception);
  call getString (dp%d_private_data%userinput, "/LTRANS/CasePrefix", "", &
                  case_prefix, exception);

  if (input_dir=="GUI") then
    print *, "Input from GUI"
    call new (template, exception)
    print *, "Create new file"
    call add_file (template, "LTRANS.data.in", "LTRANS.data", exception)
    call add_file (template, "LTRANS_grid.data.in", "GRID.data", exception)
    print *, "Substitute"
    call substitute (template, dp%d_private_data%userinput, &
          "/LTRANS/Input/Var/", ".", exception);
    print *, "done."
  else
    print *, "Input from File"
  endif

! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.go)
end subroutine edu_csdms_models_LTRANS_go_mi


! 
! Method:  initialize[]
! 

recursive subroutine LTRANS_initialize5vqzv9cttyn_mi(self, properties,         &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_string_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.initialize.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.initialize.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.initialize.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_string_1d) :: properties
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.initialize)
! Insert-Code-Here {edu.csdms.models.LTRANS.initialize} (initialize method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.initialize)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.initialize)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.initialize)
end subroutine LTRANS_initialize5vqzv9cttyn_mi


! 
! Method:  run[]
! 

recursive subroutine edu_csdms_models_LTRANS_run_mi(self, time, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.run.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.run.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.run.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  real (kind=sidl_double) :: time
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.run)
! Insert-Code-Here {edu.csdms.models.LTRANS.run} (run method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.run)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.run)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.run)
end subroutine edu_csdms_models_LTRANS_run_mi


! 
! Method:  finalize[]
! 

recursive subroutine LTRANS_finalize7oxifzzo_1i9l_mi(self, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.finalize.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.finalize.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.finalize.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.finalize)
! Insert-Code-Here {edu.csdms.models.LTRANS.finalize} (finalize method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.finalize)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.finalize)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.finalize)
end subroutine LTRANS_finalize7oxifzzo_1i9l_mi


! 
! Method:  getRaster_nx[]
! 

recursive subroutine LTRAN_getRaster_nxl66_l5bes1_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_nx.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_nx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_nx.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_nx)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_nx} (getRaster_nx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_nx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_nx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_nx)
end subroutine LTRAN_getRaster_nxl66_l5bes1_mi


! 
! Method:  getRaster_ny[]
! 

recursive subroutine LTRAN_getRaster_ny5pq29mmzkg_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_ny.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_ny.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_ny.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  integer (kind=sidl_long) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_ny)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_ny} (getRaster_ny method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_ny)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_ny)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_ny)
end subroutine LTRAN_getRaster_ny5pq29mmzkg_mi


! 
! Method:  getRaster_dx[]
! 

recursive subroutine LTRAN_getRaster_dxijhs1vm45o_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_dx.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_dx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_dx.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_dx)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_dx} (getRaster_dx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_dx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_dx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_dx)
end subroutine LTRAN_getRaster_dxijhs1vm45o_mi


! 
! Method:  getRaster_dy[]
! 

recursive subroutine LTRAN_getRaster_dyepplk2od0o_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_dy.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_dy.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_dy.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_dy)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_dy} (getRaster_dy method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_dy)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_dy)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_dy)
end subroutine LTRAN_getRaster_dyepplk2od0o_mi


! 
! Method:  getRaster_ulx[]
! 

recursive subroutine LTRA_getRaster_ulxkhdok72dlq_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_ulx.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_ulx.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_ulx.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_ulx)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_ulx} (getRaster_ulx method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_ulx)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_ulx)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_ulx)
end subroutine LTRA_getRaster_ulxkhdok72dlq_mi


! 
! Method:  getRaster_uly[]
! 

recursive subroutine LTRA_getRaster_ulyg9rh9jn11e_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_uly.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_uly.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_uly.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  real (kind=sidl_double) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_uly)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_uly} (getRaster_uly method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_uly)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_uly)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_uly)
end subroutine LTRA_getRaster_ulyg9rh9jn11e_mi


! 
! Method:  getRaster_grid[]
! 

recursive subroutine LTR_getRaster_gridkbzv8phzhc_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_double_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_grid.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_grid.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_grid.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_2d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.getRaster_grid)
! Insert-Code-Here {edu.csdms.models.LTRANS.getRaster_grid} (getRaster_grid method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.getRaster_grid)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.getRaster_grid)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.getRaster_grid)
end subroutine LTR_getRaster_gridkbzv8phzhc_mi


! 
! Method:  get_raster_dimen[]
! 

recursive subroutine L_get_raster_dimen2q5vqo5nkn_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_int_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_raster_dimen.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_raster_dimen.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_raster_dimen.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_int_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_raster_dimen)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_raster_dimen} (get_raster_dimen method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_raster_dimen)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_raster_dimen)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_raster_dimen)
end subroutine L_get_raster_dimen2q5vqo5nkn_mi


! 
! Method:  get_raster_res[]
! 

recursive subroutine LTR_get_raster_reslcyxgmpd2a_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_double_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_raster_res.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_raster_res.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_raster_res.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_raster_res)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_raster_res} (get_raster_res method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_raster_res)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_raster_res)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_raster_res)
end subroutine LTR_get_raster_reslcyxgmpd2a_mi


! 
! Method:  get_raster_data[]
! 

recursive subroutine LT_get_raster_datatj4putf69t_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_array_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_raster_data.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_raster_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_raster_data.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_raster_data)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_raster_data} (get_raster_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_raster_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_raster_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_raster_data)
end subroutine LT_get_raster_datatj4putf69t_mi


! 
! Method:  get_time_span[]
! 

recursive subroutine LTRA_get_time_span2iflge6mx2_mi(self, retval, exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_double_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_time_span.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_time_span.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_time_span.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  type(sidl_double_1d) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_time_span)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_time_span} (get_time_span method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_time_span)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_time_span)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_time_span)
end subroutine LTRA_get_time_span2iflge6mx2_mi


! 
! Method:  get_element_set[]
! 

recursive subroutine LT_get_element_set5vat2txrd8_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IElementSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_element_set.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_element_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_element_set.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IElementSet_t) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_element_set)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_element_set} (get_element_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_element_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_element_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_element_set)
end subroutine LT_get_element_set5vat2txrd8_mi


! 
! Method:  get_value_set[]
! 

recursive subroutine LTRA_get_value_setdx81gpi8sr_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IValueSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_value_set.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_value_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_value_set.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IValueSet_t) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_value_set)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_value_set} (get_value_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_value_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_value_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_value_set)
end subroutine LTRA_get_value_setdx81gpi8sr_mi


! 
! Method:  get_value_set_data[]
! 

recursive subroutine get_value_set_databrzyup6i10_mi(self, val_string, retval, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use sidl_array_array
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_value_set_data.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.get_value_set_data.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_value_set_data.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(sidl__array) :: retval
  ! out
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.get_value_set_data)
! Insert-Code-Here {edu.csdms.models.LTRANS.get_value_set_data} (get_value_set_data method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.get_value_set_data)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.get_value_set_data)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.get_value_set_data)
end subroutine get_value_set_databrzyup6i10_mi


! 
! Method:  set_value_set[]
! 

recursive subroutine LTRA_set_value_set32a24o95ut_mi(self, val_string, values, &
  exception)
  use sidl
  use sidl_NotImplementedException
  use edu_csdms_openmi_IValueSet
  use sidl_BaseInterface
  use sidl_RuntimeException
  use edu_csdms_models_LTRANS
  use edu_csdms_models_LTRANS_impl
  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.set_value_set.use)
  ! Insert-Code-Here {edu.csdms.models.LTRANS.set_value_set.use} (use statements)
  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.set_value_set.use)
  implicit none
  type(edu_csdms_models_LTRANS_t) :: self
  ! in
  character (len=*) :: val_string
  ! in
  type(edu_csdms_openmi_IValueSet_t) :: values
  ! in
  type(sidl_BaseInterface_t) :: exception
  ! out



! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.set_value_set)
! Insert-Code-Here {edu.csdms.models.LTRANS.set_value_set} (set_value_set method)
! 
! This method has not been implemented
! 

  ! DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.models.LTRANS.set_value_set)
  type(sidl_BaseInterface_t) :: throwaway
  type(sidl_NotImplementedException_t) :: notImpl
  call new(notImpl, exception)
  call setNote(notImpl, 'Not Implemented', exception)
  call cast(notImpl, exception,throwaway)
  call deleteRef(notImpl,throwaway)
  return
  ! DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.models.LTRANS.set_value_set)
! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.set_value_set)
end subroutine LTRA_set_value_set32a24o95ut_mi


! DO-NOT-DELETE splicer.begin(_miscellaneous_code_end)
! Insert-Code-Here {_miscellaneous_code_end} (extra code)
! DO-NOT-DELETE splicer.end(_miscellaneous_code_end)
