/*
 * File:          VectorSet_Impl.java
 * Symbol:        edu.csdms.openmi.VectorSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.VectorSet
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.IValueSet;
import edu.csdms.openmi.IVector;
import edu.csdms.openmi.IVectorSet;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet._imports)
// Insert-Code-Here {edu.csdms.openmi.VectorSet._imports} (additional imports)
import org.openmi.standard.*;
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet._imports)

/**
 * Symbol "edu.csdms.openmi.VectorSet" (version 0.0)
 */
public class VectorSet_Impl extends VectorSet
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.VectorSet._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.VectorSet._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet._load)
  // Insert-Code-Here {edu.csdms.openmi.VectorSet._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet._load)

  }

  /**
   * User defined constructor
   */
  public VectorSet_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.VectorSet)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.VectorSet} (constructor)
    this.data = new nl.alterra.openmi.sdk.backbone.VectorSet ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.VectorSet)

  }

  /**
   * Back door constructor
   */
  public VectorSet_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet._wrap)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet._dtor)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.finalize)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  init[]
   */
  public void init_Impl (
    /*in*/ edu.csdms.openmi.IVector.Array1 values ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.init)
    int i;
    int len = values.length ();
    nl.alterra.openmi.sdk.backbone.Vector sdk_values[] = new nl.alterra.openmi.sdk.backbone.Vector[len];
    nl.alterra.openmi.sdk.backbone.Vector sdk_value;
    edu.csdms.openmi.IVector v;

    for (i=0; i<len; i++)
    {
      v = values.get (i);
      sdk_value = new nl.alterra.openmi.sdk.backbone.Vector (v.getXComponent (), v.getYComponent (), v.getZComponent ());
      sdk_values[i] = sdk_value;
    }

    this.data = new nl.alterra.openmi.sdk.backbone.VectorSet (sdk_values);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.init)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.VectorSet.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.VectorSet.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.boccaForceUsePortInclude)

  }

  /**
   * Method:  getVector[]
   */
  public edu.csdms.openmi.IVector getVector_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.getVector)
    edu.csdms.openmi.Vector vector = new edu.csdms.openmi.Vector ();
    //nl.alterra.openmi.sdk.backbone.Vector v = this.data.getVector (elementIndex);
    org.openmi.standard.IVector v = this.data.getVector (elementIndex);
    double x = v.getXComponent ();
    double y = v.getYComponent ();
    double z = v.getZComponent ();

    vector.set (x,y,z);
    return vector;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.getVector)

  }

  /**
   * Method:  getCount[]
   */
  public int getCount_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.getCount)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.getCount} (getCount)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.VectorSet.getCount)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.VectorSet.getCount)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.getCount)

  }

  /**
   * Method:  isValid[]
   */
  public boolean isValid_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.isValid)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.isValid} (isValid)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.VectorSet.isValid)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.VectorSet.isValid)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.isValid)

  }

  /**
   * Method:  getXComponent[]
   */
  public double getXComponent_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.getXComponent)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.getXComponent} (getXComponent)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.VectorSet.getXComponent)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.VectorSet.getXComponent)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.getXComponent)

  }

  /**
   * Method:  getYComponent[]
   */
  public double getYComponent_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.getYComponent)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.getYComponent} (getYComponent)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.VectorSet.getYComponent)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.VectorSet.getYComponent)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.getYComponent)

  }

  /**
   * Method:  getZComponent[]
   */
  public double getZComponent_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet.getZComponent)
    // Insert-Code-Here {edu.csdms.openmi.VectorSet.getZComponent} (getZComponent)
    /*
     * This method has not been implemented
     */

    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.VectorSet.getZComponent)
    sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    noImpl.setNote("This method has not been implmented.");
    sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.VectorSet.getZComponent)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet.getZComponent)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.VectorSet._misc)
  // Insert-Code-Here {edu.csdms.openmi.VectorSet._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.VectorSet data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.VectorSet._misc)

} // end class VectorSet

