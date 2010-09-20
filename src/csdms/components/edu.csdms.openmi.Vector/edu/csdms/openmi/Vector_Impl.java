/*
 * File:          Vector_Impl.java
 * Symbol:        edu.csdms.openmi.Vector-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.Vector
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.IVector;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector._imports)
// Insert-Code-Here {edu.csdms.openmi.Vector._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector._imports)

/**
 * Symbol "edu.csdms.openmi.Vector" (version 0.0)
 */
public class Vector_Impl extends Vector
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Vector._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Vector._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector._load)
  // Insert-Code-Here {edu.csdms.openmi.Vector._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector._load)

  }

  /**
   * User defined constructor
   */
  public Vector_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.Vector)
    this.data = new nl.alterra.openmi.sdk.backbone.Vector ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.Vector)

  }

  /**
   * Back door constructor
   */
  public Vector_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector._wrap)
    // Insert-Code-Here {edu.csdms.openmi.Vector._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector._dtor)
    // Insert-Code-Here {edu.csdms.openmi.Vector._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.finalize)
    // Insert-Code-Here {edu.csdms.openmi.Vector.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  set[]
   */
  public void set_Impl (
    /*in*/ double x,
    /*in*/ double y,
    /*in*/ double z ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.set)
    this.data.set (x,y,z);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.set)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Vector.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Vector.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.boccaForceUsePortInclude)

  }

  /**
   * Method:  getXComponent[]
   */
  public double getXComponent_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.getXComponent)
    return this.data.getXComponent ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.getXComponent)

  }

  /**
   * Method:  getYComponent[]
   */
  public double getYComponent_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.getYComponent)
    return this.data.getYComponent ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.getYComponent)

  }

  /**
   * Method:  getZComponent[]
   */
  public double getZComponent_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector.getZComponent)
    return this.data.getZComponent ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector.getZComponent)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vector._misc)
  // Insert-Code-Here {edu.csdms.openmi.Vector._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.Vector data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vector._misc)

} // end class Vector

