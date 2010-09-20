/*
 * File:          ElementSet_Impl.java
 * Symbol:        edu.csdms.openmi.ElementSet-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Server-side implementation for edu.csdms.openmi.ElementSet
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

package edu.csdms.openmi;

import edu.csdms.openmi.Element;
import edu.csdms.openmi.ElementType;
import edu.csdms.openmi.IElementSet;
import edu.csdms.openmi.ISpatialReference;
import edu.csdms.openmi.SpatialReference;
import sidl.BaseClass;
import sidl.BaseInterface;
import sidl.ClassInfo;
import sidl.RuntimeException;

// DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet._imports)
// Insert-Code-Here {edu.csdms.openmi.ElementSet._imports} (additional imports)
import org.openmi.standard.*;
import nl.alterra.openmi.sdk.backbone.*;
// DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet._imports)

/**
 * Symbol "edu.csdms.openmi.ElementSet" (version 0.0)
 */
public class ElementSet_Impl extends ElementSet
{

  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet._data)

    // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ElementSet._data)
    gov.cca.Services    d_services;
    public boolean bocca_print_errs = true;
    // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ElementSet._data)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet._data)


  static { 
  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet._load)
  // Insert-Code-Here {edu.csdms.openmi.ElementSet._load} (class initialization)
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet._load)

  }

  /**
   * User defined constructor
   */
  public ElementSet_Impl(long IORpointer){
    super(IORpointer);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.ElementSet)
    this.data = new  nl.alterra.openmi.sdk.backbone.ElementSet ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.ElementSet)

  }

  /**
   * Back door constructor
   */
  public ElementSet_Impl(){
    d_ior = _wrap(this);
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet._wrap)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet._wrap} (_wrap)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet._wrap)

  }

  /**
   * User defined destructing method
   */
  public void dtor() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet._dtor)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet._dtor} (destructor)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet._dtor)

  }

  /**
   * finalize method (Only use this if you're sure you need it!)
   */
  public void finalize() throws Throwable{
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.finalize)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.finalize} (finalize)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.finalize)

  }

  // user defined static methods: (none)

  // user defined non-static methods:
  /**
   * Method:  setID[]
   */
  public void setID_Impl (
    /*in*/ java.lang.String ID ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.setID)
    this.data.setID (ID);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.setID)

  }

  /**
   * Method:  setElements[]
   */
  public void setElements_Impl (
    /*in*/ edu.csdms.openmi.Element.Array1 values ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.setElements)
    int i;
    int len = values.length ();
    nl.alterra.openmi.sdk.backbone.Element sdk_elements[] =
      new nl.alterra.openmi.sdk.backbone.Element [len];
    edu.csdms.openmi.Element_Impl element = new edu.csdms.openmi.Element_Impl ();

    //for (i=0; i<len; i++)
    //  sdk_elements[i] = this.dupElement (values.get (i));

    for (i=0; i<len; i++)
      sdk_elements[i] = element.dup (values.get (i));

    this.data.setElements (sdk_elements);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.setElements)

  }

  /**
   * Method:  addElement[]
   */
  public void addElement_Impl (
    /*in*/ edu.csdms.openmi.Element element ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.addElement)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.addElement} (addElement)
    edu.csdms.openmi.Element_Impl element_Impl = new edu.csdms.openmi.Element_Impl ();
    this.data.addElement (element_Impl.dup (element));
    //this.data.addElement (this.dupElement (element));
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.addElement)

  }

  /**
   * Method:  setElementType[]
   */
  public void setElementType_Impl (
    /*in*/ long elementType ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.setElementType)
    org.openmi.standard.IElementSet.ElementType sdk_elementType;

    //sdk_elementType = this.getSDKElementType (elementType);

    switch ((int)elementType)
    {
      case 0: sdk_elementType = org.openmi.standard.IElementSet.ElementType.IDBased; break;
      case 1: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYPoint; break;
      case 2: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYLine; break;
      case 3: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYPolyLine; break;
      case 4: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYPolygon; break;
      case 5: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYZPoint; break;
      case 6: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYZLine; break;
      case 7: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYZPolyLine; break;
      case 8: sdk_elementType = org.openmi.standard.IElementSet.ElementType.XYZPolygon; break;
      default:
        sidl.SIDLException ex = new sidl.SIDLException ();
        ex.setNote("Unknown ElementType.");
        sidl.RuntimeException.Wrapper msg = (sidl.RuntimeException.Wrapper)sidl.RuntimeException.Wrapper._cast (ex);
        throw msg;
    }

    this.data.setElementType (sdk_elementType);
    // DO-DELETE-WHEN-IMPLEMENTING exception.begin(edu.csdms.openmi.ElementSet.setElementType)
    //sidl.NotImplementedException noImpl = new sidl.NotImplementedException();
    //noImpl.setNote("This method has not been implmented.");
    //sidl.RuntimeException.Wrapper rex = (sidl.RuntimeException.Wrapper) sidl.RuntimeException.Wrapper._cast(noImpl);
    //throw rex;
    // DO-DELETE-WHEN-IMPLEMENTING exception.end(edu.csdms.openmi.ElementSet.setElementType)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.setElementType)

  }

  /**
   * Method:  setSpatialReference[]
   */
  public void setSpatialReference_Impl (
    /*in*/ edu.csdms.openmi.ISpatialReference spatialReference ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.setSpatialReference)
    nl.alterra.openmi.sdk.backbone.SpatialReference sdk_spatialReference;
    java.lang.String id = spatialReference.getID ();
    sdk_spatialReference = new nl.alterra.openmi.sdk.backbone.SpatialReference (id);

    this.data.setSpatialReference (sdk_spatialReference);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.setSpatialReference)

  }

  /**
   * Method:  setRasterGrid[]
   */
  public void setRasterGrid_Impl (
    /*in*/ int nx,
    /*in*/ int ny,
    /*in*/ double dx,
    /*in*/ double dy,
    /*in*/ double x0,
    /*in*/ double y0 ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.setRasterGrid)
    this.data = new nl.alterra.openmi.sdk.backbone.ElementSet (
                      "", "",
                      org.openmi.standard.IElementSet.ElementType.XYPolygon,
                      new nl.alterra.openmi.sdk.backbone.SpatialReference(""));

    {
      int i, j, k;
      double x, y;

      for (i=0, x=x0; i<nx; i++, x+=dx)
      {
        double[] corner_x = {x, x+dx, x+dx, x};
        for (j=0, y=y0; j<ny; j++, y+=dy)
        {
          //System.err.printf ("(%d,%d)\n",i,j);
          double[] corner_y = {y, y, y+dy, y+dy};
          nl.alterra.openmi.sdk.backbone.Element element =
            new nl.alterra.openmi.sdk.backbone.Element ();

          for (k=0; k<4; k++)
          {
            nl.alterra.openmi.sdk.backbone.Vertex vertex =
              new nl.alterra.openmi.sdk.backbone.Vertex (corner_x[k], corner_y[k], 0);
            element.addVertex (vertex);
          }

          this.data.addElement (element);
        }
      }
    }
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.setRasterGrid)

  }

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public void boccaForceUsePortInclude_Impl (
    /*in*/ edu.csdms.openmi.SpatialReference dummy0,
    /*in*/ edu.csdms.openmi.Element dummy1,
    /*in*/ edu.csdms.openmi.ISpatialReference dummy2 ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.boccaForceUsePortInclude)
  // DO-NOT-EDIT-BOCCA
  // Bocca generated code. bocca.protected.begin(edu.csdms.openmi.ElementSet.boccaForceUsePortInclude)
    Object o;
    o = dummy0;
    o = dummy1;
    o = dummy2;

  // Bocca generated code. bocca.protected.end(edu.csdms.openmi.ElementSet.boccaForceUsePortInclude)
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.boccaForceUsePortInclude)

  }

  /**
   * Method:  getID[]
   */
  public java.lang.String getID_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getID)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getID} (getID)
    return this.data.getID ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getID)

  }

  /**
   * Method:  getDescription[]
   */
  public java.lang.String getDescription_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getDescription)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getDescription} (getDescription)
    return this.data.getDescription ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getDescription)

  }

  /**
   * Method:  getSpatialReference[]
   */
  public edu.csdms.openmi.ISpatialReference getSpatialReference_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getSpatialReference)
    edu.csdms.openmi.SpatialReference spatialReference = new edu.csdms.openmi.SpatialReference ();
    spatialReference.setID (this.data.getSpatialReference ().getID ());
    return spatialReference;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getSpatialReference)

  }

  /**
   * Method:  getElementType[]
   */
  public long getElementType_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getElementType)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getElementType} (getElementType)
    return this.data.getElementType ().ordinal ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getElementType)

  }

  /**
   * Method:  getElementCount[]
   */
  public int getElementCount_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getElementCount)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getElementCount} (getElementCount)
    return this.data.getElementCount ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getElementCount)

  }

  /**
   * Method:  getVersion[]
   */
  public int getVersion_Impl () 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getVersion)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getVersion} (getVersion)
    return this.data.getVersion ();
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getVersion)

  }

  /**
   * Method:  getElementIndex[]
   */
  public int getElementIndex_Impl (
    /*in*/ java.lang.String elementID ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getElementIndex)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getElementIndex} (getElementIndex)
    return this.data.getElementIndex (elementID);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getElementIndex)

  }

  /**
   * Method:  getElementID[]
   */
  public java.lang.String getElementID_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getElementID)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getElementID} (getElementID)
    return this.data.getElementID (elementIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getElementID)

  }

  /**
   * Method:  getVertexCount[]
   */
  public int getVertexCount_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getVertexCount)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getVertexCount} (getVertexCount)
    return this.data.getVertexCount (elementIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getVertexCount)

  }

  /**
   * Method:  getFaceCount[]
   */
  public int getFaceCount_Impl (
    /*in*/ int elementIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getFaceCount)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getFaceCount} (getFaceCount)
    return this.data.getFaceCount (elementIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getFaceCount)

  }

  /**
   * Method:  getFaceVertexIndices[]
   */
  public sidl.Integer.Array1 getFaceVertexIndices_Impl (
    /*in*/ int elementIndex,
    /*in*/ int faceIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getFaceVertexIndices)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getFaceVertexIndices} (getFaceVertexIndices)
    int[] sdk_vertices = this.data.getFaceVertexIndices (elementIndex, faceIndex);
    sidl.Integer.Array1 vertices = new sidl.Integer.Array1 (sdk_vertices.length,true);
    int i;

    for (i=0; i<sdk_vertices.length; i++)
      vertices.set (i, sdk_vertices[i]);
    return vertices;
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getFaceVertexIndices)

  }

  /**
   * Method:  getXCoordinate[]
   */
  public double getXCoordinate_Impl (
    /*in*/ int elementIndex,
    /*in*/ int vertexIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getXCoordinate)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getXCoordinate} (getXCoordinate)
    return this.data.getXCoordinate (elementIndex, vertexIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getXCoordinate)

  }

  /**
   * Method:  getYCoordinate[]
   */
  public double getYCoordinate_Impl (
    /*in*/ int elementIndex,
    /*in*/ int vertexIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getYCoordinate)
    return this.data.getYCoordinate (elementIndex, vertexIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getYCoordinate)

  }

  /**
   * Method:  getZCoordinate[]
   */
  public double getZCoordinate_Impl (
    /*in*/ int elementIndex,
    /*in*/ int vertexIndex ) 
    throws sidl.RuntimeException.Wrapper
  {
    // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet.getZCoordinate)
    // Insert-Code-Here {edu.csdms.openmi.ElementSet.getZCoordinate} (getZCoordinate)
    return this.data.getZCoordinate (elementIndex, vertexIndex);
    // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet.getZCoordinate)

  }


  // DO-NOT-DELETE splicer.begin(edu.csdms.openmi.ElementSet._misc)
  // Insert-Code-Here {edu.csdms.openmi.ElementSet._misc} (miscellaneous)
  //public nl.alterra.openmi.sdk.backbone.IElementSet.ElementType getSDKElementType (
  public org.openmi.standard.IElementSet.ElementType getSDKElementType (
    edu.csdms.openmi.IElementSet source)
  {
    int ord = (int)source.getElementType ();

    switch (ord)
    {
      case 0: return org.openmi.standard.IElementSet.ElementType.IDBased;
      case 1: return org.openmi.standard.IElementSet.ElementType.XYPoint;
      case 2: return org.openmi.standard.IElementSet.ElementType.XYLine;
      case 3: return org.openmi.standard.IElementSet.ElementType.XYPolyLine;
      case 4: return org.openmi.standard.IElementSet.ElementType.XYPolygon;
      case 5: return org.openmi.standard.IElementSet.ElementType.XYZPoint;
      case 6: return org.openmi.standard.IElementSet.ElementType.XYZLine;
      case 7: return org.openmi.standard.IElementSet.ElementType.XYZPolyLine;
      case 8: return org.openmi.standard.IElementSet.ElementType.XYZPolygon;
      //case 9: return org.openmi.standard.IElementSet.ElementType.XYZPolyhedron;
    }
    return org.openmi.standard.IElementSet.ElementType.IDBased;
  }

  public nl.alterra.openmi.sdk.backbone.ElementSet dup (
    edu.csdms.openmi.IElementSet source)
  {
    nl.alterra.openmi.sdk.backbone.ElementSet elementSet;
    nl.alterra.openmi.sdk.backbone.SpatialReference spatialReference;
    org.openmi.standard.IElementSet.ElementType elementType;

    spatialReference = new nl.alterra.openmi.sdk.backbone.SpatialReference (
                             source.getSpatialReference ().getID ());

    elementType = this.getSDKElementType (source);

    elementSet = new nl.alterra.openmi.sdk.backbone.ElementSet (
                       source.getDescription(),
                       source.getID(),
                       elementType,
                       spatialReference);

    { /* Copy the elements */
      int n_elements = source.getElementCount ();
      int n_vertices;
      nl.alterra.openmi.sdk.backbone.Element element;
      for (int i=0; i<n_elements; i++)
      {
        element = new nl.alterra.openmi.sdk.backbone.Element (source.getElementID (i));
        n_vertices = source.getVertexCount (i);
        for (int j = 0; j < source.getVertexCount(i); j++)
        {
          double x = source.getXCoordinate (i, j);
          double y = source.getYCoordinate (i, j);
          double z = source.getZCoordinate (i, j);

          element.addVertex (new nl.alterra.openmi.sdk.backbone.Vertex(x, y, z));
        }
        elementSet.addElement (element);
      }
    }

    return elementSet;
  }
/*
  public nl.alterra.openmi.sdk.backbone.Element dupElement (
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
*/

  nl.alterra.openmi.sdk.backbone.ElementSet data;
  // DO-NOT-DELETE splicer.end(edu.csdms.openmi.ElementSet._misc)

} // end class ElementSet

