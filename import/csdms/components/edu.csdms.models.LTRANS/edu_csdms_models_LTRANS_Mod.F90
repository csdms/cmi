! 
! File:          edu_csdms_models_LTRANS_Mod.F90
! Symbol:        edu.csdms.models.LTRANS-v0.0
! Symbol Type:   class
! Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
! Description:   Server-side private data module for edu.csdms.models.LTRANS
! 
! WARNING: Automatically generated; only changes within splicers preserved
! 
! 

#include "sidl_BaseInterface_fAbbrev.h"
#include "edu_csdms_models_LTRANS_fAbbrev.h"

! DO-NOT-DELETE splicer.begin(_hincludes)
! Insert-Code-Here {_hincludes} (include files)
! DO-NOT-DELETE splicer.end(_hincludes)

module edu_csdms_models_LTRANS_impl

  ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.use)

! Insert use statements here...
  use mod_bmi
  use param_mod, only : days,dt
  use mod_ltrans, only : run_LTRANS, p
  use edu_csdms_tools_IRFPortQueue

! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.use)
  ! CCA framework services module
  use gov_cca_Services
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.use)

  ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.use)

  private :: wrapObj_s

  interface wrapObj
  module procedure wrapObj_s
  end interface

  type edu_csdms_models_LTRANS_priv
    sequence
    ! DO-NOT-DELETE splicer.begin(edu.csdms.models.LTRANS.private_data)

! Insert user's private data here.
  type(gov_cca_TypeMap_t) :: userinput
  type(edu_csdms_tools_IRFPortQueue_t) :: irf_port_queue
  
  ! This variable checks whether the component is a Driver
  logical isDriver

  character (len=2048) :: cmi_status
  character (len=2048) :: CMI_PORT_NAMES = "Ocean"

  ! variable name array
  character(len=100), dimension(11) :: long_var_names

! Bocca generated code. bocca.protected.begin(edu.csdms.models.LTRANS.private_data)
  ! Handle to framework Services object
  type(gov_cca_Services_t) :: d_services
! Bocca generated code. bocca.protected.end(edu.csdms.models.LTRANS.private_data)

    ! DO-NOT-DELETE splicer.end(edu.csdms.models.LTRANS.private_data)
  end type edu_csdms_models_LTRANS_priv

  type edu_csdms_models_LTRANS_wrap
    sequence
    type(edu_csdms_models_LTRANS_priv), pointer :: d_private_data
  end type edu_csdms_models_LTRANS_wrap

  contains

  recursive subroutine wrapObj_s(private_data, retval, exception)
    use edu_csdms_models_LTRANS
    use sidl_BaseInterface
    implicit none
    ! out edu_csdms_models_LTRANS retval
    type(edu_csdms_models_LTRANS_t) , intent(out) :: retval
    ! out sidl_BaseInterface exception
    type(sidl_BaseInterface_t) , intent(out) :: exception
    ! in edu_csdms_models_LTRANS_wrap private_data
    type(edu_csdms_models_LTRANS_wrap), intent(in) :: private_data
    external edu_csdms_models_LTRANS_wrapObj_m
    call edu_csdms_models_LTRANS_wrapObj_m(private_data, retval, exception)
   end subroutine wrapObj_s
end module edu_csdms_models_LTRANS_impl
