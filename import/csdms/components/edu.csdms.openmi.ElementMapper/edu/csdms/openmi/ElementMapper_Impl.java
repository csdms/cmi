/*
 * File:          ElementMapper_Impl.java
 * Symbol:        edu.csdms.openmi.ElementMapper-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.ElementMapper
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.Element;
import edu.csdms.openmi.ElementSet;
import edu.csdms.openmi.IScalarSet;
import edu.csdms.openmi.IValueSet;
import edu.csdms.openmi.ScalarSet;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper._imports)
// Insert-Code-Here {edu.csdms.openmi.ElementMapper._imports} (additional imports)
import java.util.ArrayList;
import nl.alterra.openmi.sdk.spatial.MappingStrategy;
import nl.alterra.openmi.sdk.spatial.XYGeometryTools;
import nl.alterra.openmi.sdk.spatial.ElementMappingMethod;
import nl.alterra.openmi.sdk.spatial.*;
//import nl.alterra.openmi.sdk.backbone.*;
import org.openmi.standard.IElementSet.ElementType;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper._imports)

/**
 * Symbol "edu.csdms.openmi.ElementMapper" (version 0.0)
 */
public class ElementMapper_Impl extends ElementMapper
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ElementMapper._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ElementMapper._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper._load)
  // Insert-Code-Here {edu.csdms.openmi.ElementMapper._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper._load)

  }

  /**
   * User defined constructor
   */
  public ElementMapper_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper.ElementMapper)
    // Insert-Code-Here {edu.csdms.openmi.ElementMapper.ElementMapper} (constructor)
    this.data = new nl.alterra.openmi.sdk.spatial.ElementMapper ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper.ElementMapper)

  }

  /**
   * Back door constructor
   */
  public ElementMapper_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper._wrap)
    // Insert-Code-Here {edu.csdms.openmi.ElementMapper._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper._dtor)
    // Insert-Code-Here {edu.csdms.openmi.ElementMapper._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper.finalize)
    // Insert-Code-Here {edu.csdms.openmi.ElementMapper.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  initialise[]
   */
  public void initialise_Impl (
    /*in*/ java.lang.String methodDescription,
    /*in*/ edu.csdms.openmi.ElementSet fromElements,
    /*in*/ edu.csdms.openmi.ElementSet toElements ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper.initialise)
/*
    ElementSet sdk_fromElements = new ElementSet ();
    ElementSet sdk_toElements = new ElementSet ();
    edu.csdms.openmi.ElementSet_Impl elements =
      new edu.csdms.openmi.ElementSet_Impl ();
*/
    nl.alterra.openmi.sdk.backbone.ElementSet sdk_fromElements =
      new nl.alterra.openmi.sdk.backbone.ElementSet ();
    nl.alterra.openmi.sdk.backbone.ElementSet sdk_toElements =
      new nl.alterra.openmi.sdk.backbone.ElementSet ();
    edu.csdms.openmi.ElementSet_Impl elements =
      new edu.csdms.openmi.ElementSet_Impl ();

    sdk_fromElements = elements.dup (fromElements);
    sdk_toElements = elements.dup (toElements);

    {
      ArrayList<String> descriptions =
        ElementMappingMethod.getAvailableMethodDescriptions (
          sdk_fromElements.getElementType (),
          sdk_toElements.getElementType ());

      if (descriptions.contains (methodDescription))
        System.out.println ("Using method " + methodDescription);
      else
      {
        System.out.println (methodDescription + ": Invalid method");
        System.out.println ("Valid methods are:");
        for (int i=0; i<descriptions.size (); i++)
          System.out.println (descriptions.get (i));

        methodDescription = descriptions.get (0);
        System.out.println ("Trying to use:" + methodDescription);
      }
    }

    try
    {
      this.data.initialise (methodDescription, sdk_fromElements, sdk_toElements);
    }
    catch (Exception e)
    {
      ArrayList<String> descriptions =
        ElementMappingMethod.getAvailableMethodDescriptions (
          sdk_fromElements.getElementType (),
          sdk_toElements.getElementType ());

      System.out.println (descriptions.get (0));
      for (int i=0; i<descriptions.size (); i++)
        System.out.println (descriptions.get (i));

      System.out.println ("Unable to initialise mapper.  " + e );
    }
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper.initialise)

  }

  /**
   * Method:  mapValues[]
   */
  public edu.csdms.openmi.IValueSet mapValues_Impl (
    /*in*/ edu.csdms.openmi.IValueSet inputValues ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper.mapValues)
    org.openmi.standard.IValueSet valueSet;
    edu.csdms.openmi.ScalarSet_Impl values =
      new edu.csdms.openmi.ScalarSet_Impl ();

    {
      nl.alterra.openmi.sdk.backbone.ScalarSet sdk_inputValues;

      //if (inputValues instanceof edu.csdms.openmi.ScalarSet)
      try
      {
        sdk_inputValues = values.dup ((edu.csdms.openmi.IScalarSet)inputValues);
      }
      catch (Exception e)
      {
        System.out.println ("Unable convert inputValues. " + e );
        return values;
      }
/*
      else
      {
        System.out.println ("inputValues is not IScalarSet.  ");
        return values;
      }
*/

      try
      {
        valueSet = this.data.mapValues (sdk_inputValues);
      }
      catch (Exception e)
      {
        System.out.println ("Unable to map values.  " + e );
        return values;
      }
    }

    {
      if (valueSet instanceof nl.alterra.openmi.sdk.backbone.ScalarSet)
      {
        nl.alterra.openmi.sdk.backbone.ScalarSet sdk_outputValues =
          (nl.alterra.openmi.sdk.backbone.ScalarSet)valueSet;
        values.setData (sdk_outputValues);
      }
      else
        System.out.printf ("valueSet is NOT a ScalarSet\n");
    }

    return values;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper.mapValues)

  }

  /**
   * Method:  mapScalarValues[]
   */
  public edu.csdms.openmi.IScalarSet mapScalarValues_Impl (
    /*in*/ edu.csdms.openmi.ScalarSet inputValues ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper.mapScalarValues)
    System.out.println ("Creating values.");
    org.openmi.standard.IValueSet valueSet;
    edu.csdms.openmi.ScalarSet_Impl values =
      new edu.csdms.openmi.ScalarSet_Impl ();

    {
      System.out.println ("Duplicating values.");
      nl.alterra.openmi.sdk.backbone.ScalarSet sdk_inputValues =
        values.dup (inputValues);

      try
      {
        System.out.println ("Trying to map values.");
        valueSet = this.data.mapValues (sdk_inputValues);
      }
      catch (Exception e)
      {
        System.out.println ("Unable to map values.  " + e );
        return values;
      }
    }

    {
      if (valueSet instanceof nl.alterra.openmi.sdk.backbone.ScalarSet)
      {
        System.out.println ("Setting values.");
        nl.alterra.openmi.sdk.backbone.ScalarSet sdk_outputValues =
          (nl.alterra.openmi.sdk.backbone.ScalarSet)valueSet;
        values.setData (sdk_outputValues);
      }
      else
        System.out.printf ("valueSet is NOT a ScalarSet\n");
      System.out.println ("Done.");
    }

    return values;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper.mapScalarValues)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl (
    /*in*/ edu.csdms.openmi.IValueSet dummy0,
    /*in*/ edu.csdms.openmi.ScalarSet dummy1,
    /*in*/ edu.csdms.openmi.ElementSet dummy2,
    /*in*/ edu.csdms.openmi.Element dummy3,
    /*in*/ edu.csdms.openmi.IScalarSet dummy4 ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ElementMapper.boccaForceUsePortInclude)
    Object o;
    o = dummy0;
    o = dummy1;
    o = dummy2;
    o = dummy3;
    o = dummy4;

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ElementMapper.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper.boccaForceUsePortInclude)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementMapper._misc)
  // Insert-Code-Here {edu.csdms.openmi.ElementMapper._misc} (miscellaneous)
  nl.alterra.openmi.sdk.spatial.ElementMapper data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementMapper._misc)

} // end class ElementMapper

