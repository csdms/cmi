/*
 * File:          TimeStamp_Impl.java
 * Symbol:        edu.csdms.openmi.TimeStamp-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.TimeStamp
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.ITimeStamp;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp._imports)
// Insert-Code-Here {edu.csdms.openmi.TimeStamp._imports} (additional imports)
import org.openmi.standard.*;
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp._imports)

/**
 * Symbol "edu.csdms.openmi.TimeStamp" (version 0.0)
 */
public class TimeStamp_Impl extends TimeStamp
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.TimeStamp._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.TimeStamp._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp._load)
  // Insert-Code-Here {edu.csdms.openmi.TimeStamp._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp._load)

  }

  /**
   * User defined constructor
   */
  public TimeStamp_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp.TimeStamp)
    // Insert-Code-Here {edu.csdms.openmi.TimeStamp.TimeStamp} (constructor)
    this.data = new nl.alterra.openmi.sdk.backbone.TimeStamp ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp.TimeStamp)

  }

  /**
   * Back door constructor
   */
  public TimeStamp_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp._wrap)
    // Insert-Code-Here {edu.csdms.openmi.TimeStamp._wrap} (_wrap)
    this.data = new nl.alterra.openmi.sdk.backbone.TimeStamp ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp._dtor)
    // Insert-Code-Here {edu.csdms.openmi.TimeStamp._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp.finalize)
    // Insert-Code-Here {edu.csdms.openmi.TimeStamp.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  setModifiedJulianDay[]
   */
  public void setModifiedJulianDay_Impl (
    /*in*/ double value ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp.setModifiedJulianDay)
    this.data.setModifiedJulianDay (value);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp.setModifiedJulianDay)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.TimeStamp.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.TimeStamp.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp.boccaForceUsePortInclude)

  }

  /**
   * Method:  getModifiedJulianDay[]
   */
  public double getModifiedJulianDay_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp.getModifiedJulianDay)
    // Insert-Code-Here {edu.csdms.openmi.TimeStamp.getModifiedJulianDay} ( getModifiedJulianDay)
    return this.data.getModifiedJulianDay ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp.getModifiedJulianDay)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.TimeStamp._misc)
  // Insert-Code-Here {edu.csdms.openmi.TimeStamp._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.TimeStamp data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.TimeStamp._misc)

} // end class TimeStamp

