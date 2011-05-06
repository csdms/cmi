/*
 * File:          Vertex_Impl.java
 * Symbol:        edu.csdms.openmi.Vertex-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.Vertex
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex._imports)
// Insert-Code-Here {edu.csdms.openmi.Vertex._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex._imports)

/**
 * Symbol "edu.csdms.openmi.Vertex" (version 0.0)
 */
public class Vertex_Impl extends Vertex
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Vertex._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Vertex._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex._load)
  // Insert-Code-Here {edu.csdms.openmi.Vertex._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex._load)

  }

  /**
   * User defined constructor
   */
  public Vertex_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.Vertex)
    // Insert-Code-Here {edu.csdms.openmi.Vertex.Vertex} (constructor)
    this.data = new nl.alterra.openmi.sdk.backbone.Vertex ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.Vertex)

  }

  /**
   * Back door constructor
   */
  public Vertex_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex._wrap)
    // Insert-Code-Here {edu.csdms.openmi.Vertex._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex._dtor)
    // Insert-Code-Here {edu.csdms.openmi.Vertex._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.finalize)
    // Insert-Code-Here {edu.csdms.openmi.Vertex.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  getX[]
   */
  public double getX_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.getX)
    return this.data.getX ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.getX)

  }

  /**
   * Method:  getY[]
   */
  public double getY_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.getY)
    return this.data.getY ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.getY)

  }

  /**
   * Method:  getZ[]
   */
  public double getZ_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.getZ)
    return this.data.getZ ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.getZ)

  }

  /**
   * Method:  setX[]
   */
  public void setX_Impl (
    /*in*/ double x ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.setX)
    this.data.setX (x);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.setX)

  }

  /**
   * Method:  setY[]
   */
  public void setY_Impl (
    /*in*/ double y ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.setY)
    this.data.setY (y);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.setY)

  }

  /**
   * Method:  setZ[]
   */
  public void setZ_Impl (
    /*in*/ double z ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.setZ)
    this.data.setZ (z);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.setZ)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Vertex.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Vertex.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex.boccaForceUsePortInclude)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Vertex._misc)
  // Insert-Code-Here {edu.csdms.openmi.Vertex._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.Vertex data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Vertex._misc)

} // end class Vertex

