/*
 * File:          SpatialReference_Impl.java
 * Symbol:        edu.csdms.openmi.SpatialReference-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.SpatialReference
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.ISpatialReference;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference._imports)
// Insert-Code-Here {edu.csdms.openmi.SpatialReference._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference._imports)

/**
 * Symbol "edu.csdms.openmi.SpatialReference" (version 0.0)
 */
public class SpatialReference_Impl extends SpatialReference
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.SpatialReference._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.SpatialReference._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference._load)
  // Insert-Code-Here {edu.csdms.openmi.SpatialReference._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference._load)

  }

  /**
   * User defined constructor
   */
  public SpatialReference_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference.SpatialReference)
    // Insert-Code-Here {edu.csdms.openmi.SpatialReference.SpatialReference} (constructor)
    this.data = new nl.alterra.openmi.sdk.backbone.SpatialReference ("");
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference.SpatialReference)

  }

  /**
   * Back door constructor
   */
  public SpatialReference_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference._wrap)
    // Insert-Code-Here {edu.csdms.openmi.SpatialReference._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference._dtor)
    // Insert-Code-Here {edu.csdms.openmi.SpatialReference._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference.finalize)
    // Insert-Code-Here {edu.csdms.openmi.SpatialReference.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  setID[]
   */
  public void setID_Impl (
    /*in*/ java.lang.String id ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference.setID)
    this.data = new nl.alterra.openmi.sdk.backbone.SpatialReference (id);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference.setID)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.SpatialReference.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.SpatialReference.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference.boccaForceUsePortInclude)

  }

  /**
   * Method:  getID[]
   */
  public java.lang.String getID_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference.getID)
    return this.data.getID ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference.getID)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.SpatialReference._misc)
  // Insert-Code-Here {edu.csdms.openmi.SpatialReference._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.SpatialReference data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.SpatialReference._misc)

} // end class SpatialReference

