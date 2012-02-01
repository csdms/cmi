! 
! File:          edu_csdms_models_MACROMS_Mod.F90
! Symbol:        edu.csdms.models.MACROMS-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side private data module for edu.csdms.models.MACROMS
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 

#include "sidl_BaseInterface_fAbbrev.h"
#include "edu_csdms_models_MACROMS_fAbbrev.h"

! DO-NOT-DELETE splicer.begin(_hincludes)
! Insert-Code-Here {_hincludes} (include files)
! DO-NOT-DELETE splicer.end(_hincludes)

module edu_csdms_models_MACROMS_impl

  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.use)

! Insert use statements here...
USE mod_param, only : Ngrids
USE mod_kinds, only : r8
USE mod_iounits, only : stdinp
USE mod_scalars, only : ntstart, ntend, exit_flag, NoError
use roms_mod_bmi_vars
use roms_mod_bmi
use edu_csdms_tools_IRFPortQueue

!USE ocean_control_mod, only : ROMS_initialize
!USE ocean_control_mod, only : ROMS_run
!USE ocean_control_mod, only : ROMS_finalize

! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.use)
  ! CCA framework services module
  use gov_cca_Services
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.use)

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.use)

  private :: wrapObj_s

  interface wrapObj
  module procedure wrapObj_s
  end interface

  type edu_csdms_models_MACROMS_priv
    sequence
    ! DO-NOT-DELETE splicer.begin(edu.csdms.models.MACROMS.private_data)

! Insert user's private data here.
   type(gov_cca_TypeMap_t) :: userinput
   logical :: first

   character (len=2048) :: cmi_status

!  integer, dimension(Ngrids) :: Tstr
!  integer, dimension(Ngrids) :: Tend

! Bocca generated code. bocca.protected.begin(edu.csdms.models.MACROMS.private_data)
  ! Handle to framework Services object
  type(gov_cca_Services_t) :: d_services
! Bocca generated code. bocca.protected.end(edu.csdms.models.MACROMS.private_data)

    ! DO-NOT-DELETE splicer.end(edu.csdms.models.MACROMS.private_data)
  end type edu_csdms_models_MACROMS_priv

  type edu_csdms_models_MACROMS_wrap
    sequence
    type(edu_csdms_models_MACROMS_priv), pointer :: d_private_data
  end type edu_csdms_models_MACROMS_wrap

  contains

  recursive subroutine wrapObj_s(private_data, retval, exception)
    use edu_csdms_models_MACROMS
    use sidl_BaseInterface
    implicit none
    ! out edu_csdms_models_MACROMS retval
    type(edu_csdms_models_MACROMS_t) , intent(out) :: retval
    ! out sidl_BaseInterface exception
    type(sidl_BaseInterface_t) , intent(out) :: exception
    ! in edu_csdms_models_MACROMS_wrap private_data
    type(edu_csdms_models_MACROMS_wrap), intent(in) :: private_data
    external edu_csdms_models_MACROMS_wrapObj_m
    call edu_csdms_models_MACROMS_wrapObj_m(private_data, retval, exception)
   end subroutine wrapObj_s
end module edu_csdms_models_MACROMS_impl
