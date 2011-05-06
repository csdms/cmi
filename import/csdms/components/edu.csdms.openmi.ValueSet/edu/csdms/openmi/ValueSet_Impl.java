/*
 * File:          ValueSet_Impl.java
 * Symbol:        edu.csdms.openmi.ValueSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.ValueSet
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.IValueSet;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet._imports)
// Insert-Code-Here {edu.csdms.openmi.ValueSet._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet._imports)

/**
 * Symbol "edu.csdms.openmi.ValueSet" (version 0.0)
 */
public class ValueSet_Impl extends ValueSet
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ValueSet._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ValueSet._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet._load)
  // Insert-Code-Here {edu.csdms.openmi.ValueSet._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet._load)

  }

  /**
   * User defined constructor
   */
  public ValueSet_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.ValueSet)
    this.data = new nl.alterra.openmi.sdk.backbone.ValueSet ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.ValueSet)

  }

  /**
   * Back door constructor
   */
  public ValueSet_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet._wrap)
    // Insert-Code-Here {edu.csdms.openmi.ValueSet._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet._dtor)
    // Insert-Code-Here {edu.csdms.openmi.ValueSet._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.finalize)
    // Insert-Code-Here {edu.csdms.openmi.ValueSet.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  setData[]
   */
  public void setData_Impl (
    /*in*/ sidl.Double.Array1 values ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.setData)
    int i;
    int len = values.length ();
    double sdk_values[] = new double [len];

    for (i=0; i<len; i++)
      sdk_values[i] = values.get (i);

    this.data.setData (sdk_values);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.setData)

  }

  /**
   * Method:  setValue[]
   */
  public void setValue_Impl (
    /*in*/ int index,
    /*in*/ double value ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.setValue)
    this.data.setValue (index, value);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.setValue)

  }

  /**
   * Method:  getValue[]
   */
  public double getValue_Impl (
    /*in*/ int index ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.getValue)
    // Insert-Code-Here {edu.csdms.openmi.ValueSet.getValue} (getValue)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.ValueSet.getValue)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.ValueSet.getValue)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.getValue)

  }

  /**
   * Method:  setRasterGrid[]
   */
  public void setRasterGrid_Impl (
    /*in*/ sidl.Double.Array2 grid ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.setRasterGrid)
    int len0 = grid.length (0);
    int len1 = grid.length (1);
    double sdk_values[] = new double [len0*len1];

    for (int i=0, n=0; i<len0; i++)
      for (int j=0; j<len1; j++, n++)
        sdk_values[n] = grid.get (i,j);

    this.data.setData (sdk_values);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.setRasterGrid)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ValueSet.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ValueSet.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.boccaForceUsePortInclude)

  }

  /**
   * Method:  getCount[]
   */
  public int getCount_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.getCount)
    return this.data.getCount ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.getCount)

  }

  /**
   * Method:  isValid[]
   */
  public boolean isValid_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet.isValid)
    return this.data.isValid (elementIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet.isValid)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ValueSet._misc)
  // Insert-Code-Here {edu.csdms.openmi.ValueSet._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.ValueSet data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ValueSet._misc)

} // end class ValueSet

