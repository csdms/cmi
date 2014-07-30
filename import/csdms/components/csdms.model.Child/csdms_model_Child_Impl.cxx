// 
// File:          csdms_model_Child_Impl.cxx
// Symbol:        csdms.model.Child-v0.0
// Symbol Type:   class
// Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
// Description:   Server-side implementation for csdms.model.Child
// 
// WARNING: Automatically generated; only changes within splicers preserved
// 
// 
#include "csdms_model_Child_Impl.hxx"

// 
// Includes for all method dependencies.
// 
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_ClassInfo_hxx
#include "sidl_ClassInfo.hxx"
#endif
#ifndef included_sidl_NotImplementedException_hxx
#include "sidl_NotImplementedException.hxx"
#endif
// DO-NOT-DELETE splicer.begin(csdms.model.Child._includes)

  // Insert-UserCode-Here {csdms.model.Child._includes:prolog} (additional includes or code)

  // Bocca generated code. bocca.protected.begin(csdms.model.Child._includes)

#define _BOCCA_CTOR_MESSAGES 0
  // If -D_BOCCA_STDERR is given to the compiler, diagnostics print to stderr.
  // In production use, probably want not to use -D_BOCCA_STDERR.
#ifdef _BOCCA_STDERR

#include <iostream>

#ifdef _BOCCA_CTOR_PRINT
#undef _BOCCA_CTOR_MESSAGES
#define _BOCCA_CTOR_MESSAGES 1
#endif // _BOCCA_CTOR_PRINT 
#else  // _BOCCA_STDERR


#endif // _BOCCA_STDERR



  // If -D_BOCCA_BOOST is given to the compiler, exceptions and diagnostics 
  // will include function names for boost-understood compilers.
  // If boost is not available (and therefore ccaffeine is not in use), 
  // -D_BOCCA_BOOST can be omitted and function names will not be included in 
  // messages.
#ifndef _BOCCA_BOOST
#define BOOST_CURRENT_FUNCTION ""
#else
#include <boost/current_function.hpp>
#endif

  // This is intended to simplify exception throwing as SIDL_THROW does for C.
#define BOCCA_THROW_CXX(EX_CLS, MSG) \
{ \
    EX_CLS ex = EX_CLS::_create(); \
    ex.setNote( MSG ); \
    ex.add(__FILE__, __LINE__, BOOST_CURRENT_FUNCTION); \
    throw ex; \
}

  // This simplifies exception extending and rethrowing in c++, like 
  // SIDL_CHECK in C. EX_OBJ must be the caught exception and is extended with 
  // msg and file/line/func added. Continuing the throw is up to the user.
#define BOCCA_EXTEND_THROW_CXX(EX_OBJ, MSG, LINEOFFSET) \
{ \
  std::string msg = std::string(MSG) + std::string(BOOST_CURRENT_FUNCTION); \
  EX_OBJ.add(__FILE__,__LINE__ + LINEOFFSET, msg); \
}


  // Bocca generated code. bocca.protected.end(csdms.model.Child._includes)

  // Insert-UserCode-Here {csdms.model.Child._includes:epilog} (additional includes or code)

// DO-NOT-DELETE splicer.end(csdms.model.Child._includes)

// special constructor, used for data wrapping(required).  Do not put code here unless you really know what you're doing!
csdms::model::Child_impl::Child_impl() : StubBase(reinterpret_cast< void*>(
  ::csdms::model::Child::_wrapObj(reinterpret_cast< void*>(this))),false) , 
  _wrapped(true){ 
  // DO-NOT-DELETE splicer.begin(csdms.model.Child._ctor2)
  // Insert-Code-Here {csdms.model.Child._ctor2} (ctor2)
  // DO-NOT-DELETE splicer.end(csdms.model.Child._ctor2)
}

// user defined constructor
void csdms::model::Child_impl::_ctor() {
  // DO-NOT-DELETE splicer.begin(csdms.model.Child._ctor)
    
  // Insert-UserCode-Here {csdms.model.Child._ctor:prolog} (constructor method) 

  // bocca-default-code. User may edit or delete.begin(csdms.model.Child._ctor)
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "CTOR csdms.model.Child: " << BOOST_CURRENT_FUNCTION 
               << " constructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES
  // bocca-default-code. User may edit or delete.end(csdms.model.Child._ctor)

  // Insert-UserCode-Here {csdms.model.Child._ctor:epilog} (constructor method)

  // DO-NOT-DELETE splicer.end(csdms.model.Child._ctor)
}

// user defined destructor
void csdms::model::Child_impl::_dtor() {
  // DO-NOT-DELETE splicer.begin(csdms.model.Child._dtor)
  // Insert-UserCode-Here {csdms.model.Child._dtor} (destructor method) 
    
  // bocca-default-code. User may edit or delete.begin(csdms.model.Child._dtor) 
   #if _BOCCA_CTOR_MESSAGES

     std::cerr << "DTOR csdms.model.Child: " << BOOST_CURRENT_FUNCTION 
               << " destructing " << this << std::endl;

   #endif // _BOCCA_CTOR_MESSAGES 
  // bocca-default-code. User may edit or delete.end(csdms.model.Child._dtor) 

  // DO-NOT-DELETE splicer.end(csdms.model.Child._dtor)
}

// static class initializer
void csdms::model::Child_impl::_load() {
  // DO-NOT-DELETE splicer.begin(csdms.model.Child._load)
  // Insert-Code-Here {csdms.model.Child._load} (class initialization)
  // DO-NOT-DELETE splicer.end(csdms.model.Child._load)
}

// user defined static methods: (none)

// user defined non-static methods:
/**
 *  This function should never be called, but helps babel generate better code. 
 */
void
csdms::model::Child_impl::boccaForceUsePortInclude_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(csdms.model.Child.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(csdms.model.Child.boccaForceUsePortInclude)
  // DO-NOT-DELETE splicer.end(csdms.model.Child.boccaForceUsePortInclude)
}

/**
 * Method:  initialize[]
 */
bool
csdms::model::Child_impl::initialize_impl (
  /* in */const ::std::string& config_file ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.initialize)
  CALL_BMI_VOID(Initialize, config_file.c_str());
  return 0;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.initialize)
}

/**
 * Method:  update[]
 */
bool
csdms::model::Child_impl::update_impl (
  /* in */double time_interval ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.update)
  CALL_BMI_VOID(UpdateUntil, time_interval);
  return 0;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.update)
}

/**
 * Method:  finalize[]
 */
bool
csdms::model::Child_impl::finalize_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.finalize)
  CALL_BMI_VOID(Finalize);
  return 0;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.finalize)
}

/**
 * Method:  get_start_time[]
 */
double
csdms::model::Child_impl::get_start_time_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_start_time)
  double time;
  CALL_BMI(time, GetStartTime);
  return time;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_start_time)
}

/**
 * Method:  get_current_time[]
 */
double
csdms::model::Child_impl::get_current_time_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_current_time)
  double time;
  CALL_BMI(time, GetCurrentTime);
  return time;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_current_time)
}

/**
 * Method:  get_end_time[]
 */
double
csdms::model::Child_impl::get_end_time_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_end_time)
  double time;
  CALL_BMI(time, GetEndTime);
  return time;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_end_time)
}

/**
 * Method:  get_values[]
 */
::sidl::basearray
csdms::model::Child_impl::get_values_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_values)
  // Insert-Code-Here {csdms.model.Child.get_values} (get_values method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Child.get_values)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_values");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Child.get_values)
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_values)
}

/**
 * Method:  set_values[]
 */
void
csdms::model::Child_impl::set_values_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.set_values)
  // Insert-Code-Here {csdms.model.Child.set_values} (set_values method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Child.set_values)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_values");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Child.set_values)
  // DO-NOT-DELETE splicer.end(csdms.model.Child.set_values)
}

/**
 * Method:  get_component_name[]
 */
::std::string
csdms::model::Child_impl::get_component_name_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_component_name)
  char name[2048];
  CALL_BMI_VOID(GetComponentName, name);
  return std::string(name);
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_component_name)
}

/**
 * Method:  get_input_item_count[]
 */
int32_t
csdms::model::Child_impl::get_input_item_count_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_input_item_count)
  int number_of_names = 0;
  CALL_BMI(number_of_names, GetInputVarNameCount)
  return number_of_names;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_input_item_count)
}

/**
 * Method:  get_input_item_list[]
 */
::sidl::array< ::std::string>
csdms::model::Child_impl::get_input_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_input_item_list)
  ::sidl::array< ::std::string> input_item_array = NULL;

  {
    const int MAX_NAME_LENGTH = 512;
    int number_of_names = 0;
    char **input_item_names = NULL;

    CALL_BMI(number_of_names, GetInputVarNameCount);

    input_item_names = (char**)malloc(sizeof(char*) * number_of_names);
    input_item_names[0] = (char*)calloc(number_of_names * MAX_NAME_LENGTH,
        sizeof(char));
    for (int i = 1; i < number_of_names; i ++) {
      input_item_names[i] = input_item_names[i - 1] + MAX_NAME_LENGTH;
    }

    CALL_BMI_VOID(GetInputVarNames, input_item_names);

    input_item_array = sidl::array< ::std::string>::create1d(number_of_names);
    for (int i = 0; i < number_of_names; i ++) {
      input_item_array.set(i, ::std::string(input_item_names[i]));
    }
    free(input_item_names[0]);
    free(input_item_names);
  }

  return input_item_array;

  EXIT: return NULL;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_input_item_list)
}

/**
 * Method:  get_output_item_count[]
 */
int32_t
csdms::model::Child_impl::get_output_item_count_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_output_item_count)
  int number_of_names = 0;
  CALL_BMI(number_of_names, GetOutputVarNameCount)
  return number_of_names;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_output_item_count)
}

/**
 * Method:  get_output_item_list[]
 */
::sidl::array< ::std::string>
csdms::model::Child_impl::get_output_item_list_impl () 

{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_output_item_list)
  ::sidl::array< ::std::string> output_item_array = NULL;

  {
    const int MAX_NAME_LENGTH = 512;
    int number_of_names = 0;
    char **output_item_names = NULL;

    CALL_BMI(number_of_names, GetOutputVarNameCount);

    output_item_names = (char**)malloc(sizeof(char*) * number_of_names);
    output_item_names[0] = (char*)calloc(number_of_names * MAX_NAME_LENGTH,
        sizeof(char));
    for (int i = 1; i < number_of_names; i ++) {
      output_item_names[i] = output_item_names[i - 1] + MAX_NAME_LENGTH;
    }

    CALL_BMI_VOID(GetOutputVarNames, output_item_names);

    output_item_array = sidl::array< ::std::string>::create1d(number_of_names);
    for (int i = 0; i < number_of_names; i ++) {
      output_item_array.set(i, ::std::string(output_item_names[i]));
    }
    free(output_item_names[0]);
    free(output_item_names);
  }

  return output_item_array;

  EXIT: return NULL;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_output_item_list)
}

/**
 * Method:  get_values_at_indices[]
 */
::sidl::basearray
csdms::model::Child_impl::get_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_values_at_indices)
  // Insert-Code-Here {csdms.model.Child.get_values_at_indices} (get_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Child.get_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Child.get_values_at_indices)
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_values_at_indices)
}

/**
 * Method:  set_values_at_indices[]
 */
void
csdms::model::Child_impl::set_values_at_indices_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<int> */::sidl::array<int32_t>& indices,
  /* in array<> */::sidl::basearray& in_values ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.set_values_at_indices)
  // Insert-Code-Here {csdms.model.Child.set_values_at_indices} (set_values_at_indices method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Child.set_values_at_indices)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "set_values_at_indices");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Child.set_values_at_indices)
  // DO-NOT-DELETE splicer.end(csdms.model.Child.set_values_at_indices)
}

/**
 * Method:  get_grid_rank[]
 */
int32_t
csdms::model::Child_impl::get_grid_rank_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_rank)
  // Insert-Code-Here {csdms.model.Child.get_grid_rank} (get_grid_rank method)
  // 
  // This method has not been implemented
  // 
  // DO-DELETE-WHEN-IMPLEMENTING exception.begin(csdms.model.Child.get_grid_rank)
  ::sidl::NotImplementedException ex = ::sidl::NotImplementedException::_create();
  ex.setNote("This method has not been implemented");
  ex.add(__FILE__, __LINE__, "get_grid_rank");
  throw ex;
  // DO-DELETE-WHEN-IMPLEMENTING exception.end(csdms.model.Child.get_grid_rank)
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_rank)
}

/**
 * Method:  get_grid_spacing[]
 */
::sidl::array<double>
csdms::model::Child_impl::get_grid_spacing_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_spacing)
  ::sidl::array<double> spacing = NULL;
  bmi::GridType grid_type;

  CALL_BMI(grid_type, GetGridType, long_var_name.c_str());
  if (grid_type <= bmi::GRID_TYPE_UNIFORM) {
    int rank;
    CALL_BMI(rank, GetVarRank, long_var_name.c_str());
    if (rank == 0)
      rank = 1;

    spacing = sidl::array<double>::create1d(rank);
    CALL_BMI_VOID(GetGridSpacing, long_var_name.c_str(),
        spacing.first());
  }
  return spacing;

  EXIT: return NULL;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_spacing)
}

/**
 * Method:  get_grid_origin[]
 */
::sidl::array<double>
csdms::model::Child_impl::get_grid_origin_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_origin)
  ::sidl::array<double> origin = NULL;
  bmi::GridType grid_type;

  CALL_BMI(grid_type, GetGridType, long_var_name.c_str());
  if (grid_type <= bmi::GRID_TYPE_UNIFORM) {
    int rank;
    CALL_BMI(rank, GetVarRank, long_var_name.c_str());
    if (rank == 0)
      rank = 1;

    origin = sidl::array<double>::create1d(rank);
    CALL_BMI_VOID(GetGridOrigin, long_var_name.c_str(),
        origin.first());
  }
  return origin;

  EXIT: return NULL;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_origin)
}

/**
 * Method:  get_grid_shape[]
 */
::sidl::array<int32_t>
csdms::model::Child_impl::get_grid_shape_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_shape)
  ::sidl::array<int> shape = NULL;
  bmi::GridType grid_type;

  CALL_BMI(grid_type, GetGridType, long_var_name.c_str());
  if (grid_type <= bmi::GRID_TYPE_STRUCTURED) {
    int rank;
    CALL_BMI(rank, GetVarRank, long_var_name.c_str());
    if (rank == 0)
      rank = 1;

    shape = sidl::array<int>::create1d(rank);
    CALL_BMI_VOID(GetGridShape, long_var_name.c_str(),
        shape.first());
  }
  return shape;

  EXIT: return NULL;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_shape)
}

/**
 * Method:  get_grid_x[]
 */
::sidl::array<double>
csdms::model::Child_impl::get_grid_x_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_x)
  ::sidl::array<double> coord = NULL;
  int number_of_points = 0;

  CALL_BMI(number_of_points, GetVarPointCount, long_var_name.c_str());

  coord = sidl::array<double>::create1d(number_of_points);

  CALL_BMI_VOID(GetGridX, long_var_name.c_str(), coord.first());
  
  return coord;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_x)
}

/**
 * Method:  get_grid_y[]
 */
::sidl::array<double>
csdms::model::Child_impl::get_grid_y_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_y)
  sidl::array<double> coord = NULL;
  int number_of_points = 0;

  CALL_BMI(number_of_points, GetVarPointCount, long_var_name.c_str());

  coord = sidl::array<double>::create1d(number_of_points);

  CALL_BMI_VOID(GetGridY, long_var_name.c_str(), coord.first());

  return coord;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_y)
}

/**
 * Method:  get_grid_z[]
 */
::sidl::array<double>
csdms::model::Child_impl::get_grid_z_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_z)
  ::sidl::array<double> coord = NULL;
  int number_of_points = 0;

  CALL_BMI(number_of_points, GetVarPointCount, long_var_name.c_str());

  coord = sidl::array<double>::create1d(number_of_points);

  CALL_BMI_VOID(GetGridZ, long_var_name.c_str(), coord.first());
  
  return coord;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_z)
}

/**
 * Method:  get_grid_connectivity[]
 */
::sidl::array<int32_t>
csdms::model::Child_impl::get_grid_connectivity_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_connectivity)
  ::sidl::array<int> connectivity = NULL;
  int number_of_vertices = 0;

  CALL_BMI(number_of_vertices, GetVarVertexCount, long_var_name.c_str());

  connectivity = sidl::array<int>::create1d(number_of_vertices);
  CALL_BMI_VOID(GetGridConnectivity, long_var_name.c_str(),
      connectivity.first());

  return connectivity;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_connectivity)
}

/**
 * Method:  get_grid_offset[]
 */
::sidl::array<int32_t>
csdms::model::Child_impl::get_grid_offset_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_offset)
  ::sidl::array<int> offset = NULL;
  int number_of_cells = 0;

  CALL_BMI(number_of_cells, GetVarCellCount, long_var_name.c_str());

  offset = sidl::array<int>::create1d(number_of_cells);
  CALL_BMI_VOID(GetGridOffset, long_var_name.c_str(), offset.first());

  return offset;
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_offset)
}

/**
 * Method:  get_grid_values[]
 */
::sidl::array<double>
csdms::model::Child_impl::get_grid_values_impl (
  /* in */const ::std::string& long_var_name ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.get_grid_values)
  sidl::array<double> vals;

  {
    int point_count;
    double *data = NULL;

    CALL_BMI(point_count, GetVarPointCount, long_var_name.c_str());
    if (point_count <= 0)
      BOCCA_THROW_CXX(::sidl::SIDLException,
          "Invalid point count");

    //CALL_BMI(data, GetDoublePtr, long_var_name.c_str());
    if (data) {
      const int lower[1] = {0};
      const int upper[1] = {point_count - 1};
      const int stride[1] = {1};

      vals.borrow(data, 1, lower, upper, stride);
    } else {
      vals = sidl::array<double>::create1d(point_count);
      CALL_BMI_VOID(GetDouble, long_var_name.c_str(), vals.first());
    }
  }

  return vals;

  EXIT: return NULL;
  
  // DO-NOT-DELETE splicer.end(csdms.model.Child.get_grid_values)
}

/**
 * Method:  set_grid_values[]
 */
void
csdms::model::Child_impl::set_grid_values_impl (
  /* in */const ::std::string& long_var_name,
  /* in array<double> */::sidl::array<double>& vals ) 
{
  // DO-NOT-DELETE splicer.begin(csdms.model.Child.set_grid_values)
  CALL_BMI_VOID(SetDouble, long_var_name.c_str(), vals.first());
  // DO-NOT-DELETE splicer.end(csdms.model.Child.set_grid_values)
}


// DO-NOT-DELETE splicer.begin(csdms.model.Child._misc)
// Insert-Code-Here {csdms.model.Child._misc} (miscellaneous code)
// DO-NOT-DELETE splicer.end(csdms.model.Child._misc)

