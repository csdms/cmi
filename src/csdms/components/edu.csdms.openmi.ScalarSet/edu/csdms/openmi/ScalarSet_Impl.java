/*
 * File:          ScalarSet_Impl.java
 * Symbol:        edu.csdms.openmi.ScalarSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.ScalarSet
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.IScalarSet;
import edu.csdms.openmi.IValueSet;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet._imports)
// Insert-Code-Here {edu.csdms.openmi.ScalarSet._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet._imports)

/**
 * Symbol "edu.csdms.openmi.ScalarSet" (version 0.0)
 */
public class ScalarSet_Impl extends ScalarSet
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ScalarSet._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ScalarSet._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet._load)
  // Insert-Code-Here {edu.csdms.openmi.ScalarSet._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet._load)

  }

  /**
   * User defined constructor
   */
  public ScalarSet_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.ScalarSet)
    // Insert-Code-Here {edu.csdms.openmi.ScalarSet.ScalarSet} (constructor)
    this.data = new nl.alterra.openmi.sdk.backbone.ScalarSet ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.ScalarSet)

  }

  /**
   * Back door constructor
   */
  public ScalarSet_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet._wrap)
    // Insert-Code-Here {edu.csdms.openmi.ScalarSet._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet._dtor)
    // Insert-Code-Here {edu.csdms.openmi.ScalarSet._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.finalize)
    // Insert-Code-Here {edu.csdms.openmi.ScalarSet.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  init[]
   */
  public void init_Impl (
    /*in*/ sidl.Double.Array1 values ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.init)
    int i;
    int len = values.length ();
    double sdk_values[] = new double[len];

    for (i=0; i<len; i++)
      sdk_values[i] = values.get (i);

    this.data = new nl.alterra.openmi.sdk.backbone.ScalarSet (sdk_values);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.init)

  }

  /**
   * Method:  setRasterGrid[]
   */
  public void setRasterGrid_Impl (
    /*in*/ sidl.Double.Array2 grid ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.setRasterGrid)
    int len0 = grid.length (0);
    int len1 = grid.length (1);
    double sdk_values[] = new double [len0*len1];

    for (int i=0, n=0; i<len1; i++)
    {
      for (int j=0; j<len0; j++, n++)
      {
        sdk_values[n] = grid.get (j,i);
        //System.out.format ("val[%d][%d] = %f\n", j, i, sdk_values[n]);
      }
      //System.out.format ("*************\n");
      //System.out.flush ();
    }

    this.data = new nl.alterra.openmi.sdk.backbone.ScalarSet (sdk_values);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.setRasterGrid)

  }

  /**
   * Method:  toArray[]
   */
  public sidl.Double.Array1 toArray_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.toArray)
    int len = this.data.getCount ();
    sidl.Double.Array1 values = new sidl.Double.Array1 (len,true);

    for (int i=0; i<len; i++)
      values.set (i, this.data.getScalar (i));
    return values;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.toArray)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ScalarSet.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ScalarSet.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.boccaForceUsePortInclude)

  }

  /**
   * Method:  getScalar[]
   */
  public double getScalar_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.getScalar)
    return this.data.getScalar (elementIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.getScalar)

  }

  /**
   * Method:  getCount[]
   */
  public int getCount_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.getCount)
    return this.data.getCount ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.getCount)

  }

  /**
   * Method:  isValid[]
   */
  public boolean isValid_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet.isValid)
    return this.data.isValid (elementIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet.isValid)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ScalarSet._misc)
  // Insert-Code-Here {edu.csdms.openmi.ScalarSet._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.ScalarSet data;

  public nl.alterra.openmi.sdk.backbone.ScalarSet dup (
    edu.csdms.openmi.IScalarSet scalarSet )
  {
    int len = scalarSet.getCount ();
    double values[] = new double[len];
    for (int i=0; i<len ; i++)
      values[i] = scalarSet.getScalar (i);
    return new nl.alterra.openmi.sdk.backbone.ScalarSet (values);
  }

  public edu.csdms.openmi.ScalarSet setData (
    nl.alterra.openmi.sdk.backbone.ScalarSet scalarSet)
  {
    int len = scalarSet.getCount ();
    double values[] = new double[len];
    for (int i=0; i<len ; i++)
      values[i] = scalarSet.getScalar (i);
    this.data = new nl.alterra.openmi.sdk.backbone.ScalarSet (values);
    return this;
  }

  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ScalarSet._misc)

} // end class ScalarSet

