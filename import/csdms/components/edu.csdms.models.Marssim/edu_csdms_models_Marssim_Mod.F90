! 
! File:          edu_csdms_models_Marssim_Mod.F90
! Symbol:        edu.csdms.models.Marssim-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side private data module for edu.csdms.models.Marssim
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 

#include "sidl_BaseInterface_fAbbrev.h"
#include "edu_csdms_models_Marssim_fAbbrev.h"

! DO-NOT-DELETE splicer.begin(_hincludes)
! Insert-Code-Here {_hincludes} (include files)
! DO-NOT-DELETE splicer.end(_hincludes)

module edu_csdms_models_Marssim_impl

  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.use)

! Insert use statements here...
 use marssim_irf
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.use)
  ! CCA framework services module
  use gov_cca_Services
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.use)

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.use)

  private :: wrapObj_s

  interface wrapObj
  module procedure wrapObj_s
  end interface

  type edu_csdms_models_Marssim_priv
    sequence
    ! DO-NOT-DELETE splicer.begin(edu.csdms.models.Marssim.private_data)

! Insert user's private data here.
 type(gov_cca_TypeMap_t) :: userinput
! Bocca generated code. bocca.protected.begin(edu.csdms.models.Marssim.private_data)
  ! Handle to framework Services object
  type(gov_cca_Services_t) :: d_services
! Bocca generated code. bocca.protected.end(edu.csdms.models.Marssim.private_data)

    ! DO-NOT-DELETE splicer.end(edu.csdms.models.Marssim.private_data)
  end type edu_csdms_models_Marssim_priv

  type edu_csdms_models_Marssim_wrap
    sequence
    type(edu_csdms_models_Marssim_priv), pointer :: d_private_data
  end type edu_csdms_models_Marssim_wrap

  contains

  recursive subroutine wrapObj_s(private_data, retval, exception)
    use edu_csdms_models_Marssim
    use sidl_BaseInterface
    implicit none
    ! out edu_csdms_models_Marssim retval
    type(edu_csdms_models_Marssim_t) , intent(out) :: retval
    ! out sidl_BaseInterface exception
    type(sidl_BaseInterface_t) , intent(out) :: exception
    ! in edu_csdms_models_Marssim_wrap private_data
    type(edu_csdms_models_Marssim_wrap), intent(in) :: private_data
    external edu_csdms_models_Marssim_wrapObj_m
    call edu_csdms_models_Marssim_wrapObj_m(private_data, retval, exception)
   end subroutine wrapObj_s
end module edu_csdms_models_Marssim_impl
