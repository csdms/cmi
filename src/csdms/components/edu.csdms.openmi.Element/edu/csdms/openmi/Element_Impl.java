/*
 * File:          Element_Impl.java
 * Symbol:        edu.csdms.openmi.Element-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.Element
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.Vertex;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element._imports)
// Insert-Code-Here {edu.csdms.openmi.Element._imports} (additional imports)
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element._imports)

/**
 * Symbol "edu.csdms.openmi.Element" (version 0.0)
 */
public class Element_Impl extends Element
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Element._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Element._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element._load)
  // Insert-Code-Here {edu.csdms.openmi.Element._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element._load)

  }

  /**
   * User defined constructor
   */
  public Element_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.Element)
    this.data = new nl.alterra.openmi.sdk.backbone.Element ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.Element)

  }

  /**
   * Back door constructor
   */
  public Element_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element._wrap)
    // Insert-Code-Here {edu.csdms.openmi.Element._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element._dtor)
    // Insert-Code-Here {edu.csdms.openmi.Element._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.finalize)
    // Insert-Code-Here {edu.csdms.openmi.Element.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  setVertices[]
   */
  public void setVertices_Impl (
    /*in*/ edu.csdms.openmi.Vertex.Array1 vertices ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.setVertices)
    int len = vertices.length ();
    int i;
    nl.alterra.openmi.sdk.backbone.Vertices sdk_vertices = new nl.alterra.openmi.sdk.backbone.Vertices ();
    nl.alterra.openmi.sdk.backbone.Vertex sdk_vertex;
    edu.csdms.openmi.Vertex vertex;

    for (i=0; i<len; i++)
    {
      vertex = vertices.get (i);
      sdk_vertex = new nl.alterra.openmi.sdk.backbone.Vertex (vertex.getX (),vertex.getY (), vertex.getZ ());
      sdk_vertices.add (sdk_vertex);
    }

    this.data.setVertices (sdk_vertices);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.setVertices)

  }

  /**
   * Method:  getID[]
   */
  public java.lang.String getID_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.getID)
    return this.data.getID ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.getID)

  }

  /**
   * Method:  setID[]
   */
  public void setID_Impl (
    /*in*/ java.lang.String ID ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.setID)
    this.data.setID (ID);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.setID)

  }

  /**
   * Method:  getVertex[]
   */
  public edu.csdms.openmi.Vertex getVertex_Impl (
    /*in*/ int index ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.getVertex)
    edu.csdms.openmi.Vertex vertex = new edu.csdms.openmi.Vertex ();
    nl.alterra.openmi.sdk.backbone.Vertex sdk_vertex = this.data.getVertex (index);

    vertex.setX (sdk_vertex.getX ());
    vertex.setY (sdk_vertex.getY ());
    vertex.setZ (sdk_vertex.getZ ());

    return vertex;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.getVertex)

  }

  /**
   * Method:  getVertexCount[]
   */
  public int getVertexCount_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.getVertexCount)
    return this.data.getVertexCount ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.getVertexCount)

  }

  /**
   * Method:  addVertex[]
   */
  public void addVertex_Impl (
    /*in*/ edu.csdms.openmi.Vertex vertex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.addVertex)
    nl.alterra.openmi.sdk.backbone.Vertex sdk_vertex;

    sdk_vertex = new nl.alterra.openmi.sdk.backbone.Vertex (vertex.getX (),vertex.getY (),vertex.getZ ());
    this.data.addVertex (sdk_vertex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.addVertex)

  }

  /**
   * Method:  getFaceCount[]
   */
  public int getFaceCount_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.getFaceCount)
    return this.data.getFaceCount ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.getFaceCount)

  }

  /**
   * Method:  addFace[]
   */
  public void addFace_Impl (
    /*in*/ sidl.Integer.Array1 vertexIndices ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.addFace)
    int len = vertexIndices.length ();
    int sdk_vertexIndices[] = new int[len];
    int i;

    for (i=0; i<len; i++)
      sdk_vertexIndices[i] = vertexIndices.get (i);

    this.data.addFace (sdk_vertexIndices);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.addFace)

  }

  /**
   * Method:  getFaceVertexIndices[]
   */
  public sidl.Integer.Array1 getFaceVertexIndices_Impl (
    /*in*/ int faceIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.getFaceVertexIndices)
    int sdk_indices[] = this.data.getFaceVertexIndices (faceIndex);
    sidl.Integer.Array1 indices;
    int i;

    indices = new sidl.Integer.Array1 (sdk_indices.length, true);
    for (i=0; i<sdk_indices.length; i++)
      indices.set (i, sdk_indices[i]);

    return indices;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.getFaceVertexIndices)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl (
    /*in*/ edu.csdms.openmi.Vertex dummy0 ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.Element.boccaForceUsePortInclude)
    Object o;
    o = dummy0;

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.Element.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element.boccaForceUsePortInclude)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.Element._misc)
  // Insert-Code-Here {edu.csdms.openmi.Element._misc} (miscellaneous)
  nl.alterra.openmi.sdk.backbone.Element data;

  public nl.alterra.openmi.sdk.backbone.Element dup (
    edu.csdms.openmi.Element element)
  {
    nl.alterra.openmi.sdk.backbone.Element sdk_element =
      new nl.alterra.openmi.sdk.backbone.Element (element.getID ());

    sdk_element.setVertices (this.dupVertices (element));

    {
      int i;
      int n_faces = element.getFaceCount ();

      for (i=0; i<n_faces; i++)
        sdk_element.addFace (this.dupFaceVertexIndices (element, i));
    }
    return sdk_element;
  }

  public int[] dupFaceVertexIndices (edu.csdms.openmi.Element element,
                                     int faceIndex)
  {
    sidl.Integer.Array1 indices;
    int sdk_indices[];

    indices = element.getFaceVertexIndices (faceIndex);

    {
      int i;
      int len = indices.length ();
      sdk_indices = new int[len];

      for (i=0; i<len; i++)
        sdk_indices[i] = indices.get (i);
    }
    return sdk_indices;
  }

  public nl.alterra.openmi.sdk.backbone.Vertices dupVertices(
    edu.csdms.openmi.Element element)
  {
    int i;
    int len = element.getVertexCount ();
    edu.csdms.openmi.Vertex vertex;
    nl.alterra.openmi.sdk.backbone.Vertex sdk_vertex;
    nl.alterra.openmi.sdk.backbone.Vertices sdk_vertices =
      new nl.alterra.openmi.sdk.backbone.Vertices ();

    for (i=0; i<len; i++)
    {
      vertex = element.getVertex (i);
      sdk_vertex = new nl.alterra.openmi.sdk.backbone.Vertex (
                         vertex.getX (),vertex.getY (),vertex.getZ ());
      sdk_vertices.add (sdk_vertex);
    }
    return sdk_vertices;
  }

  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.Element._misc)

} // end class Element

