/*
 * File:          OpenMIGridMapper_Impl.java
 * Symbol:        edu.csdms.tools.OpenMIGridMapper-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.tools.OpenMIGridMapper
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.tools;

import edu.csdms.cmi.IGrid;
import edu.csdms.cmi.IGridMapper;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper._imports)
// Insert-Code-Here {edu.csdms.tools.OpenMIGridMapper._imports} (additional imports)
//import org.openmi.standard.*;
import nl.alterra.openmi.sdk.backbone.*;  

import java.util.ArrayList;
import nl.alterra.openmi.sdk.spatial.MappingStrategy;
import nl.alterra.openmi.sdk.spatial.XYGeometryTools;
import nl.alterra.openmi.sdk.spatial.ElementMappingMethod;
import nl.alterra.openmi.sdk.spatial.*;
import org.openmi.standard.IElementSet.ElementType;
// DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper._imports)

/**
 * Symbol "edu.csdms.tools.OpenMIGridMapper" (version 0.0)
 */
public class OpenMIGridMapper_Impl extends OpenMIGridMapper
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.tools.OpenMIGridMapper._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.tools.OpenMIGridMapper._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper._load)
  // Insert-Code-Here {edu.csdms.tools.OpenMIGridMapper._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper._load)

  }

  /**
   * User defined constructor
   */
  public OpenMIGridMapper_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper.OpenMIGridMapper)
    this.mapper = new nl.alterra.openmi.sdk.spatial.ElementMapper ();
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper.OpenMIGridMapper)

  }

  /**
   * Back door constructor
   */
  public OpenMIGridMapper_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper._wrap)
    // Insert-Code-Here {edu.csdms.tools.OpenMIGridMapper._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper._dtor)
    // Insert-Code-Here {edu.csdms.tools.OpenMIGridMapper._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper.finalize)
    // Insert-Code-Here {edu.csdms.tools.OpenMIGridMapper.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl (
    /*in*/ edu.csdms.cmi.IGrid dummy0 ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.tools.OpenMIGridMapper.boccaForceUsePortInclude)
    Object o;
    o = dummy0;

  // Bocca generated code. bocca.protected.end(edu.csdms.tools.OpenMIGridMapper.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper.boccaForceUsePortInclude)

  }

  /**
   * Method:  initialize[]
   */
  public void initialize_Impl (
    /*in*/ edu.csdms.cmi.IGrid dest_grid,
    /*in*/ edu.csdms.cmi.IGrid source_grid ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper.initialize)
    java.lang.String methodDescription = "Value";
    nl.alterra.openmi.sdk.backbone.ElementSet srcElementSet;
    nl.alterra.openmi.sdk.backbone.ElementSet dstElementSet;

    srcElementSet = this.grid_to_element_set (source_grid);
    dstElementSet = this.grid_to_element_set (dest_grid);

    {
      ArrayList<String> descriptions =
        ElementMappingMethod.getAvailableMethodDescriptions (
          srcElementSet.getElementType (),
          dstElementSet.getElementType ());

      if (descriptions.contains (methodDescription))
        System.out.println ("OpenMIGridMapper: Using method " + methodDescription);
      else
      {
        System.out.println ("OpenMIGridMapper: " + methodDescription + ": Invalid method");
        System.out.println ("OpenMIGridMapper: Valid methods are:");
        for (int i=0; i<descriptions.size (); i++)
          System.out.println (descriptions.get (i));

        methodDescription = descriptions.get (0);
        System.out.println ("OpenMIGridMapper: Trying to use:" + methodDescription);
      }
    }

    try
    {
      this.mapper.initialise (methodDescription, srcElementSet,
          dstElementSet);
    }
    catch (Exception e)
    {
      ArrayList<String> descriptions =
        ElementMappingMethod.getAvailableMethodDescriptions (
          srcElementSet.getElementType (),
          dstElementSet.getElementType ());

      System.out.println (descriptions.get (0));
      for (int i=0; i<descriptions.size (); i++)
        System.out.println (descriptions.get (i));

      System.out.println ("OpenMIGridMapper: Unable to initialise mapper.  " + e );
    }
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper.initialize)

  }

  /**
   * Method:  run_inplace[]
   */
  public void run_inplace_Impl (
    /*in*/ gov.llnl.sidl.BaseArray source_vals,
    /*inout*/ gov.llnl.sidl.BaseArray.Holder dest_vals ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper.run_inplace)
    // Insert-Code-Here {edu.csdms.tools.OpenMIGridMapper.run_inplace} (run_inplace)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.tools.OpenMIGridMapper.run_inplace)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.tools.OpenMIGridMapper.run_inplace)
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper.run_inplace)

  }

  /**
   * Method:  run[]
   */
  public gov.llnl.sidl.BaseArray run_Impl (
    /*in*/ gov.llnl.sidl.BaseArray source_vals ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper.run)
    //nl.alterra.openmi.sdk.backbone.ValueSet dstValueSet;
    org.openmi.standard.IValueSet dstValueSet;
    sidl.Double.Array1 dstDoubleArray;

    System.out.println ("OpenMIGridMapper: Creating values.");

    {
      System.out.println ("OpenMIGridMapper: Duplicating values.");
      nl.alterra.openmi.sdk.backbone.ScalarSet srcScalarSet =
        this.array_to_scalar_set ((sidl.Double.Array1) source_vals);

      try
      {
        System.out.println ("OpenMIGridMapper: Trying to map values.");
        dstValueSet = this.mapper.mapValues (srcScalarSet);
            //(nl.alterra.openmi.sdk.backbone.ValueSet)srcScalarset);
            
            //(org.openmi.standard.IValueSet)srcScalarSet);
            //(nl.alterra.openmi.sdk.backbone.ValueSet
      }
      catch (Exception e)
      {
        System.out.println ("OpenMIGridMapper: Warning: Unable to map values.  " + e );
        dstDoubleArray = new sidl.Double.Array1 (0, true);
        return (gov.llnl.sidl.BaseArray) dstDoubleArray;
      }
    }

    {
      if (dstValueSet instanceof nl.alterra.openmi.sdk.backbone.ScalarSet)
      {
        System.out.println ("OpenMIGridMapper: Setting values.");
        dstDoubleArray = this.scalar_set_to_array (
            (nl.alterra.openmi.sdk.backbone.ScalarSet)dstValueSet);
      }
      else
      {
        dstDoubleArray = new sidl.Double.Array1 (0, true);
        System.out.println ("OpenMIGridMapper: ERROR: valueSet is NOT a ScalarSet");
      }


      System.out.println ("OpenMIGridMapper: Done.");
    }

    return (gov.llnl.sidl.BaseArray) dstDoubleArray;
    // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper.run)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.tools.OpenMIGridMapper._misc)
  public nl.alterra.openmi.sdk.backbone.ScalarSet array_to_scalar_set (
    sidl.Double.Array1 array)
  {
    nl.alterra.openmi.sdk.backbone.ScalarSet scalarSet;

    {
      int len = array.length ();
      double values[] = new double[len];

      for (int i=0; i<len; i++)
        values[i] = array.get (i);

      scalarSet = new nl.alterra.openmi.sdk.backbone.ScalarSet (values);
    }

    return scalarSet;
  }

  public sidl.Double.Array1 scalar_set_to_array (
    nl.alterra.openmi.sdk.backbone.ScalarSet scalarSet)
  {
    sidl.Double.Array1 array;

    {
      int len = scalarSet.getCount ();

      array = new sidl.Double.Array1 (len, true);

      for (int i=0; i<len; i++)
        array.set (i, scalarSet.getScalar (i));
    }

    return array;
  }

  public nl.alterra.openmi.sdk.backbone.ElementSet grid_to_element_set (
    edu.csdms.cmi.IGrid grid)
  {
    nl.alterra.openmi.sdk.backbone.ElementSet elementSet;

    elementSet = new nl.alterra.openmi.sdk.backbone.ElementSet ("", "",
        org.openmi.standard.IElementSet.ElementType.XYPolygon,
        new nl.alterra.openmi.sdk.backbone.SpatialReference(""));

    {
      sidl.Integer.Array1 offsets = grid.get_offset ();
      sidl.Integer.Array1 c = grid.get_connectivity ();
      sidl.Double.Array1 x = grid.get_x ();
      sidl.Double.Array1 y = grid.get_y ();
      int n_elements = offsets.length ();

      for (int i=0, offset=0; i<n_elements; i++, offset=offsets.get (i)) {
        nl.alterra.openmi.sdk.backbone.Element element =
          new nl.alterra.openmi.sdk.backbone.Element ();
        int n_vertices = offsets.get (i) - offset;

        for (int j=0, id=c.get (offset); j<n_vertices; j++, id=c.get (offset+j)) {
          double x_val = x.get (id);
          double y_val = y.get (id);
          nl.alterra.openmi.sdk.backbone.Vertex vertex =
            new nl.alterra.openmi.sdk.backbone.Vertex (x_val, y_val, 0);

          element.addVertex (vertex);
        }

        elementSet.addElement (element);
      }
    }

    return elementSet;
  }

  nl.alterra.openmi.sdk.spatial.ElementMapper mapper;
  // DO-NOT-DELETE splicer.end(edu.csdms.tools.OpenMIGridMapper._misc)

} // end class OpenMIGridMapper

