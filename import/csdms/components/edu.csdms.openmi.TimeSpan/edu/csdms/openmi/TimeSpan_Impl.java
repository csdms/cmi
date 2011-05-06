/*
 * File:          TimeSpan_Impl.java
 * Symbol:        edu.csdms.openmi.TimeSpan-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.TimeSpan
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.ITimeSpan;
import edu.csdms.openmi.ITimeStamp;
import edu.csdms.openmi.TimeStamp;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan._imports)
// Insert-Code-Here {edu.csdms.openmi.TimeSpan._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan._imports)

/**
 * Symbol "edu.csdms.openmi.TimeSpan" (version 0.0)
 */
public class TimeSpan_Impl extends TimeSpan
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.TimeSpan._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.TimeSpan._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan._load)
  // Insert-Code-Here {edu.csdms.openmi.TimeSpan._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan._load)

  }

  /**
   * User defined constructor
   */
  public TimeSpan_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.TimeSpan)
    // Insert-Code-Here {edu.csdms.openmi.TimeSpan.TimeSpan} (constructor)
    nl.alterra.openmi.sdk.backbone.TimeStamp s = new nl.alterra.openmi.sdk.backbone.TimeStamp (0.);
    nl.alterra.openmi.sdk.backbone.TimeStamp e = new nl.alterra.openmi.sdk.backbone.TimeStamp (0.);
    this.data = new nl.alterra.openmi.sdk.backbone.TimeSpan (s,e);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.TimeSpan)

  }

  /**
   * Back door constructor
   */
  public TimeSpan_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan._wrap)
    // Insert-Code-Here {edu.csdms.openmi.TimeSpan._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan._dtor)
    // Insert-Code-Here {edu.csdms.openmi.TimeSpan._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.finalize)
    // Insert-Code-Here {edu.csdms.openmi.TimeSpan.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  setStart[]
   */
  public void setStart_Impl (
    /*in*/ edu.csdms.openmi.ITimeStamp start ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.setStart)
    nl.alterra.openmi.sdk.backbone.TimeStamp sdk_start;
    sdk_start = new nl.alterra.openmi.sdk.backbone.TimeStamp (start.getModifiedJulianDay ());
    this.data.setStart (sdk_start);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.setStart)

  }

  /**
   * Method:  setEnd[]
   */
  public void setEnd_Impl (
    /*in*/ edu.csdms.openmi.ITimeStamp end ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.setEnd)
    nl.alterra.openmi.sdk.backbone.TimeStamp sdk_end;
    sdk_end = new nl.alterra.openmi.sdk.backbone.TimeStamp (end.getModifiedJulianDay ());
    this.data.setEnd (sdk_end);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.setEnd)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl (
    /*in*/ edu.csdms.openmi.TimeStamp dummy0 ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.TimeSpan.boccaForceUsePortInclude)
    Object o;
    o = dummy0;

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.TimeSpan.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.boccaForceUsePortInclude)

  }

  /**
   * Method:  getStart[]
   */
  public edu.csdms.openmi.ITimeStamp getStart_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.getStart)
    // Insert-Code-Here {edu.csdms.openmi.TimeSpan.getStart} (getStart)
    edu.csdms.openmi.TimeStamp start = new edu.csdms.openmi.TimeStamp ();
    start.setModifiedJulianDay (this.data.getStart ().getModifiedJulianDay ());
    return start;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.getStart)

  }

  /**
   * Method:  getEnd[]
   */
  public edu.csdms.openmi.ITimeStamp getEnd_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan.getEnd)
    edu.csdms.openmi.TimeStamp end = new edu.csdms.openmi.TimeStamp ();
    //edu.csdms.openmi.TimeStamp end = new edu.csdms.openmi.TimeStamp (this.data.getEnd ());
    //end.setData (this.data.getEnd ());
    end.setModifiedJulianDay (this.data.getEnd ().getModifiedJulianDay ());
    return end;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan.getEnd)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeSpan._misc)
  // Insert-Code-Here {edu.csdms.openmi.TimeSpan._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.TimeSpan data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeSpan._misc)

} // end class TimeSpan

