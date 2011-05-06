/*
 * File:          Time_Impl.java
 * Symbol:        edu.csdms.openmi.Time-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.Time
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.ITime;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time._imports)
// Insert-Code-Here {edu.csdms.openmi.Time._imports} (additional imports)
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time._imports)

/**
 * Symbol "edu.csdms.openmi.Time" (version 0.0)
 */
public class Time_Impl extends Time
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Time._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Time._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time._load)
  // Insert-Code-Here {edu.csdms.openmi.Time._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time._load)

  }

  /**
   * User defined constructor
   */
  public Time_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time.Time)
    // Insert-Code-Here {edu.csdms.openmi.Time.Time} (constructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time.Time)

  }

  /**
   * Back door constructor
   */
  public Time_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time._wrap)
    // Insert-Code-Here {edu.csdms.openmi.Time._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time._dtor)
    // Insert-Code-Here {edu.csdms.openmi.Time._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time.finalize)
    // Insert-Code-Here {edu.csdms.openmi.Time.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Time.boccaForceUsePortInclude)

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Time.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time.boccaForceUsePortInclude)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Time._misc)
  // Insert-Code-Here {edu.csdms.openmi.Time._misc} (miscellaneous)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Time._misc)

} // end class Time

