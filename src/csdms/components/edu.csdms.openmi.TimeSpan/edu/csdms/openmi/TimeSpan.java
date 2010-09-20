/*
 * File:          TimeSpan.java
 * Symbol:        edu.csdms.openmi.TimeSpan-v0.0
 * Symbol Type:   class
 * Babel Version: 1.4.0 (Revision: 6607 release-1-4-0-branch)
 * Description:   Client-side glue code for edu.csdms.openmi.TimeSpan
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

package edu.csdms.openmi;

/**
 * Symbol "edu.csdms.openmi.TimeSpan" (version 0.0)
 */
public class TimeSpan extends
  sidl.BaseClass implements
  edu.csdms.openmi.ITimeSpan,
  sidl.BaseInterface
{
  /*
   * Register the JNI native routines.
   */

  static {
    gov.llnl.sidl.BaseClass._registerNatives("edu.csdms.openmi.TimeSpan");
  }

  /**
   * Default constructor for the class.
   */
  public TimeSpan() {
    super(_create_ior());
  }

  /**
   * Private method to create IOR reference.
   */
  private static native long _create_ior();

  /**
   * Private method to create IOR reference.
   */
  private static native long _create_remote_ior(java.lang.String url);

  /**
   * Protected method to create and IOR, and set the ddata.
   */
  protected static native long _wrap(TimeSpan ddata);

  /**
   * Remote constructor for the class.
   */
  public TimeSpan(java.lang.String url) {
    super(_create_remote_ior(url));
  }

  /**
   * Class connector.
   */
  public static gov.llnl.sidl.BaseClass _connect(java.lang.String url) {
    return (gov.llnl.sidl.BaseClass) new TimeSpan(_connect_remote_ior(url));
  }

  /**
   * Private method to connect IOR reference.
   */
  private static native long _connect_remote_ior(java.lang.String url);

  /**
   * Public constructor for an existing IOR.
   */
  public TimeSpan(long ior) {
    super(ior);
  }

  /**
   * Method:  setStart[]
   */
  public native void setStart(
    edu.csdms.openmi.ITimeStamp start);

  /**
   * Method:  setEnd[]
   */
  public native void setEnd(
    edu.csdms.openmi.ITimeStamp end);

  /**
   *  This function should never be called, but helps babel generate better code. 
   */
  public native void boccaForceUsePortInclude(
    edu.csdms.openmi.TimeStamp dummy0);

  /**
   * Method:  getStart[]
   */
  public native edu.csdms.openmi.ITimeStamp getStart();

  /**
   * Method:  getEnd[]
   */
  public native edu.csdms.openmi.ITimeStamp getEnd();

  /**
   * Select and execute a method by name
   */
  public native void _exec(
    java.lang.String methodName,
    sidl.rmi.Call inArgs,
    sidl.rmi.Return outArgs) throws
    sidl.RuntimeException.Wrapper;

  /**
   * Method to enable/disable method hooks invocation.
   */
  public native void _set_hooks(
    boolean enable) throws
    sidl.RuntimeException.Wrapper;

  /**
   * 
   * Cast this object to the specified sidl name.  If the cast is invalid,
   * then return null.  If the cast is successful, then the returned object
   * can be cast to the proper Java type using a standard Java cast.
   * 
   */
  public static sidl.BaseInterface _cast(gov.llnl.sidl.BaseClass obj) {
    sidl.BaseInterface cast = null;
    /*
     * 
     * Cast this object to the specified type.  If the cast is valid, then
     * search for the matching Java type.
     * 
     */

    long ior = obj._cast_ior("edu.csdms.openmi.TimeSpan");
    if (ior != 0) {
      Class java_class = null;
      try {
        java_class = Class.forName("edu.csdms.openmi.TimeSpan");
      } catch (Exception ex) {
        ex.printStackTrace(System.err);     
      }

      /*
       * If we found the class, then create a new instance using the sidl IOR.
       */

      if (java_class != null) {
        Class[]  sigs = new Class[]  { java.lang.Long.TYPE     };
        Object[] args = new Object[] { new java.lang.Long(ior) };
        try {
          java.lang.reflect.Constructor ctor = java_class.getConstructor(sigs);
          cast = (sidl.BaseInterface) ctor.newInstance(args);
        } catch (Exception ex) {
          ex.printStackTrace(System.err);
        }
      }
    }
    return (sidl.BaseInterface) cast;
  }


  /**
   * Holder class for inout and out arguments.
   */
  public static class Holder {
    private edu.csdms.openmi.TimeSpan d_obj;

    /**
     * Create a holder with a null holdee object.
     */
    public Holder() {
      d_obj = null;
    }

    /**
     * Create a holder with the specified object.
     */
    public Holder(edu.csdms.openmi.TimeSpan obj) {
      d_obj = obj;
    }

    /**
     * Set the value of the holdee object.
     */
    public void set(edu.csdms.openmi.TimeSpan obj) {
      d_obj = obj;
    }

    /**
     * Get the value of the holdee object.
     */
    public edu.csdms.openmi.TimeSpan get() {
      return d_obj;
    }
  }
  /**
   * Array Class for implementation of Object arrays
   */
  public static class Array extends gov.llnl.sidl.BaseArray {
  private sidl.BaseInterface.Array a;

    /**
     * Construct an empty basic array object.
     */
    public Array() {
      super();
      a = new sidl.BaseInterface.Array();
    }


    /**
     * Create an array using an IOR pointer
     */
    protected Array(long array, boolean owner) {
      super(array, owner);
      a = new sidl.BaseInterface.Array(array, owner);
    }


    /**
     * Create an array with the specified dimension, upper and lower bounds
     */
    public Array(int dim, int[] lower, int[] upper, boolean isRow) {
      a = new sidl.BaseInterface.Array(dim,lower,upper, isRow);
      d_array = a.get_ior_pointer();
      d_owner = true;
    }


    /**
     * Create an array using an BaseInterface Array
     */
    protected Array(sidl.BaseInterface.Array core) {
      a = core;
      d_array = a.get_ior_pointer();
      d_owner = true;
      }
    /**
     * Return this array's internal BaseInterface Array
     */
    protected sidl.BaseInterface.Array getBaseInterfaceArray() {
      return a;
    }


    /**
     * Call to base interface routine to get the dimension of this array
     */
    public int _dim() {
      return a._dim();
    }


    /**
     * Routine to get lower bound at the specified dimension
     */
    public int _lower(int dim) {
      return a._lower(dim);
    }


    /**
     * ~Native~ routine to get upper bound at the specified dimension
     */
    public int _upper(int dim) {
      return a._upper(dim);
    }


    /**
     * Native routine to get stride at the specified dimension
     */
    public int _stride(int dim) { 
      return a._stride(dim);
    }


    /**
     * Routine gets the length of the array at the specified dimension
     */
    public int _length(int dim) {
      return a._length(dim);
      }


    /**
     * Native routine returns true is array is columnorder
     */
    public boolean _isColumnOrder() {
      return a._isColumnOrder();
    }


    /**
     * Native routine returns true is array is row order
     */
    public boolean _isRowOrder() {
      return a._isRowOrder();
    }


    /**
     * Routine to get the value at the specified indices
     */
    public edu.csdms.openmi.TimeSpan _get(int i, int j, int k, int l, int m, 
      int n, int o) {
      edu.csdms.openmi.TimeSpan ret = null;
      sidl.BaseInterface.Wrapper preCast = null;
      preCast = a._get(i,j,k,l,m,n,o);
      if(preCast != null) {
        ret = (edu.csdms.openmi.TimeSpan) preCast._cast2(
          "edu.csdms.openmi.TimeSpan");
      } else {
        return null;
      }
      return (edu.csdms.openmi.TimeSpan) ret;
    }


    /**
     * Routine to set the value at the specified indices
     */
    public void _set(int i, int j, int k, int l, int m, int n, int o, 
      edu.csdms.openmi.TimeSpan value) {
      a._set(i,j,k,l,m,n,o,value);
    }


    /**
     * Routine to deallocate the array.
     */
    public void _destroy() {
      if(d_owner) {
        d_array = 0;
      }
      a._destroy();
    }


    /**
     * addRef adds a reference to the IOR representation of the
     * array, it does nothing for the Java object.
     */
    public void _addRef() {
      a._addRef();
    }


    /**
     * Routine to call deleteRef on the array.
     */
    public void _deallocate() {
      a._deallocate();
    }


    /**
     * Routine to return an array based on this one, but slice according to your instructions
     */
    public edu.csdms.openmi.TimeSpan.Array _slice(int dimen, int[] numElem, 
      int[] srcStart, int[] srcStride, int[] newStart) {
      sidl.BaseInterface.Array preCast = null;
      preCast = (sidl.BaseInterface.Array) a._slice(dimen,numElem,srcStart,
        srcStride,newStart);
      return new edu.csdms.openmi.TimeSpan.Array(preCast);
    }


    /**
     * Copies borrowed arrays, addRefs otherwise.
     */
    public gov.llnl.sidl.BaseArray _smartCopy() {
      sidl.BaseInterface.Array preCast = null;
      preCast = (sidl.BaseInterface.Array) a._smartCopy();
      return (gov.llnl.sidl.BaseArray) new edu.csdms.openmi.TimeSpan.Array(
        preCast);
    }


    /**
     * Copies borrowed arrays, addRefs otherwise.
     */
    public void _copy(edu.csdms.openmi.TimeSpan.Array dest) {
      a._copy(dest.getBaseInterfaceArray());
    }


    /**
     * Native routine to reallocate the array data. Bad things happen if bad bounds are passed
     */
    public void _reallocate(int dim, int[] lower, int[] upper, boolean isRow) {
      a._reallocate(dim,lower,upper, isRow);
      d_array = a.get_ior_pointer();
      d_owner = true;
    }


    public Array _dcast() {
      try{ 
        int dimen = _dim();
        edu.csdms.openmi.TimeSpan.Array ret = null;
        switch (dimen) {
        case 1:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array1(
            getBaseInterfaceArray());
          return ret;
        case 2:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array2(
            getBaseInterfaceArray());
          return ret;
        case 3:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array3(
            getBaseInterfaceArray());
          return ret;
        case 4:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array4(
            getBaseInterfaceArray());
          return ret;
        case 5:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array5(
            getBaseInterfaceArray());
          return ret;
        case 6:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array6(
            getBaseInterfaceArray());
          return ret;
        case 7:
          ret = (Array) new edu.csdms.openmi.TimeSpan.Array7(
            getBaseInterfaceArray());
          return ret;
        default:
          return null;
        }
      } catch (Exception ex) {
        return null;	
      }

    }


    /**
     * Native routine to reallocate the array, and copy a java array of objects into it.
     */
    protected void _fromArray(Object[] orray, int dim, int[] lower, boolean 
      isRow) {
      a._fromArray(orray, dim, lower, isRow);
      d_array = a.get_ior_pointer();
      d_owner = true;
    }


    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }

  /**
   * The implementation of edu.csdms.openmi.TimeSpan 1 arrays.
   */
  public static class Array1 extends Array {

    /**
     * Construct an empty 1 dimensional array object.
     */
    public Array1() {
      super();
    }

    /**
     * 
     * Create a 1 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array1(edu.csdms.openmi.TimeSpan[] array, boolean isRow) {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array1(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 1 dimensional array with the specified, upper and lower bounds
     */
    public Array1( int l0, int u0, boolean isRow) {
      super(1, new int[] {  l0}, new int[] {  u0}, isRow);
    }

    /**
     * Create a 1 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array1( int s0, boolean isRow)  {
      super(1, new int[] { 0}, new int[] { s0-1}, isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array1(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    public edu.csdms.openmi.TimeSpan _get( int j0) {
      return (edu.csdms.openmi.TimeSpan)_get(  j0, 0, 0, 0, 0, 0, 0);
    }

    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0) {
      checkBounds(  j0);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0, 0, 0, 0, 0, 0, 0);
      return ret;

    }

    /**
     * Get the length of the array
     */
    public int length() {
      return super._length(0);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array1 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array1 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array1(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array1 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 1 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int u0, boolean isRow)  {
      reallocate(1, new int[] {  l0}, new int[] {  u0}, isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0,edu.csdms.openmi.TimeSpan value) {
      _set(  j0, 0, 0, 0, 0, 0, 0, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0,edu.csdms.openmi.TimeSpan value) {
      checkBounds(  j0);
      _set(  j0, 0, 0, 0, 0, 0, 0, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[] orray , boolean inRow) {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      _fromArray(orray, 1, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[] toArray() {
      edu.csdms.openmi.TimeSpan[] array = null;
      if (!isNull()) {
        checkDimension(1);
        int l0 = _lower(0);
        int u0 = _upper(0);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1];
        for (int i = l0; i <= u0; i++) {
          array[i-l0] = _get(i);
          }
        }
      return array;
      }


    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array1 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array1 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array1 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array1 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
  /**
   * The implementation of edu.csdms.openmi.TimeSpan 2 arrays.
   */
  public static class Array2 extends Array {

    /**
     * Construct an empty 2 dimensional array object.
     */
    public Array2() {
      super();
    }

    /**
     * 
     * Create a 2 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array2(edu.csdms.openmi.TimeSpan[][] array, boolean isRow) {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array2(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 2 dimensional array with the specified, upper and lower bounds
     */
    public Array2( int l0, int l1, int u0, int u1, boolean isRow) {
      super(2, new int[] {  l0,  l1}, new int[] {  u0,  u1}, isRow);
    }

    /**
     * Create a 2 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array2( int s0, int s1, boolean isRow)  {
      super(2, new int[] { 0, 0}, new int[] { s0-1, s1-1}, isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array2(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    public edu.csdms.openmi.TimeSpan _get( int j0, int j1) {
      return (edu.csdms.openmi.TimeSpan)_get(  j0,  j1, 0, 0, 0, 0, 0);
    }

    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0, int j1) {
      checkBounds(  j0,  j1);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0,  j1, 0, 0, 0, 0, 0);
      return ret;

    }

    /**
     * Get the length of the array in the specified dimension
     */
    public int length(int dim) {
      return super._length(dim);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array2 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array2 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array2(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array2 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 2 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int l1, int u0, int u1, boolean isRow)  {
      reallocate(2, new int[] {  l0,  l1}, new int[] {  u0,  u1}, isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0, int j1,edu.csdms.openmi.TimeSpan value) {
      _set(  j0,  j1, 0, 0, 0, 0, 0, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0, int j1,edu.csdms.openmi.TimeSpan value) {
      checkBounds(  j0,  j1);
      _set(  j0,  j1, 0, 0, 0, 0, 0, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[][] orray , boolean inRow) 
      {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      lower[1] = orray.length-1;
      _fromArray(orray, 2, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[][] toArray() {
      edu.csdms.openmi.TimeSpan[][] array = null;
      if (!isNull()) {
        checkDimension(2);
        int l0 = _lower(0);
        int u0 = _upper(0);
        int l1 = _lower(1);
        int u1 = _upper(1);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1][];
        for (int i = l0; i <= u0; i++) {
          array[i] = new edu.csdms.openmi.TimeSpan[u1-l1+1];
          for (int j = l1; j <= u1; j++) {
            array[i-l0][j-l1] = _get(i, j);
            }
          }
        }
      return array;
      }

    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array2 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array2 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array2 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array2 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
  /**
   * The implementation of edu.csdms.openmi.TimeSpan 3 arrays.
   */
  public static class Array3 extends Array {

    /**
     * Construct an empty 3 dimensional array object.
     */
    public Array3() {
      super();
    }

    /**
     * 
     * Create a 3 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array3(edu.csdms.openmi.TimeSpan[][][] array, boolean isRow) {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array3(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 3 dimensional array with the specified, upper and lower bounds
     */
    public Array3( int l0, int l1, int l2, int u0, int u1, int u2, boolean 
      isRow) {
      super(3, new int[] {  l0,  l1,  l2}, new int[] {  u0,  u1,  u2}, isRow);
    }

    /**
     * Create a 3 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array3( int s0, int s1, int s2, boolean isRow)  {
      super(3, new int[] { 0, 0, 0}, new int[] { s0-1, s1-1, s2-1}, isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array3(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    public edu.csdms.openmi.TimeSpan _get( int j0, int j1, int j2) {
      return (edu.csdms.openmi.TimeSpan)_get(  j0,  j1,  j2, 0, 0, 0, 0);
    }

    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0, int j1, int j2) {
      checkBounds(  j0,  j1,  j2);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0,  j1,  j2, 0, 0, 0, 0);
      return ret;

    }

    /**
     * Get the length of the array in the specified dimension
     */
    public int length(int dim) {
      return super._length(dim);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array3 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array3 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array3(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array3 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 3 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int l1, int l2, int u0, int u1, int u2, 
      boolean isRow)  {
      reallocate(3, new int[] {  l0,  l1,  l2}, new int[] {  u0,  u1,  u2}, 
        isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0, int j1, int j2,edu.csdms.openmi.TimeSpan value) {
      _set(  j0,  j1,  j2, 0, 0, 0, 0, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0, int j1, int j2,edu.csdms.openmi.TimeSpan value) {
      checkBounds(  j0,  j1,  j2);
      _set(  j0,  j1,  j2, 0, 0, 0, 0, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[][][] orray , boolean 
      inRow) {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      lower[1] = orray.length-1;
      lower[2] = orray[0].length-1;
      _fromArray(orray, 3, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[][][] toArray() {
      edu.csdms.openmi.TimeSpan[][][] array = null;
      if (!isNull()) {
        checkDimension(3);
        int l0 = _lower(0);
        int u0 = _upper(0);
        int l1 = _lower(1);
        int u1 = _upper(1);
        int l2 = _lower(2);
        int u2 = _upper(2);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1][][];
        for (int i = l0; i <= u0; i++) {
          array[i] = new edu.csdms.openmi.TimeSpan[u1-l1+1][];
          for (int j = l1; j <= u1; j++) {
            array[i][j] = new edu.csdms.openmi.TimeSpan[u2-l2+1];
            for (int k = l2; k <= u2; k++) {
              array[i-l0][j-l1][k-l2] = _get(i, j, k);
              }
            }
          }
        }
      return array;
      }

    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array3 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array3 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array3 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array3 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
  /**
   * The implementation of edu.csdms.openmi.TimeSpan 4 arrays.
   */
  public static class Array4 extends Array {

    /**
     * Construct an empty 4 dimensional array object.
     */
    public Array4() {
      super();
    }

    /**
     * 
     * Create a 4 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array4(edu.csdms.openmi.TimeSpan[][][][] array, boolean isRow) {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array4(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 4 dimensional array with the specified, upper and lower bounds
     */
    public Array4( int l0, int l1, int l2, int l3, int u0, int u1, int u2, int 
      u3, boolean isRow) {
      super(4, new int[] {  l0,  l1,  l2,  l3}, new int[] {  u0,  u1,  u2,  u3},
        isRow);
    }

    /**
     * Create a 4 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array4( int s0, int s1, int s2, int s3, boolean isRow)  {
      super(4, new int[] { 0, 0, 0, 0}, new int[] { s0-1, s1-1, s2-1, s3-1}, 
        isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array4(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    public edu.csdms.openmi.TimeSpan _get( int j0, int j1, int j2, int j3) {
      return (edu.csdms.openmi.TimeSpan)_get(  j0,  j1,  j2,  j3, 0, 0, 0);
    }

    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0, int j1, int j2, int j3) {
      checkBounds(  j0,  j1,  j2,  j3);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0,  j1,  j2,  j3, 0, 0, 0);
      return ret;

    }

    /**
     * Get the length of the array in the specified dimension
     */
    public int length(int dim) {
      return super._length(dim);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array4 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array4 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array4(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array4 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 4 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int l1, int l2, int l3, int u0, int u1, int 
      u2, int u3, boolean isRow)  {
      reallocate(4, new int[] {  l0,  l1,  l2,  l3}, new int[] {  u0,  u1,  u2, 
        u3}, isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0, int j1, int j2, int j3,edu.csdms.openmi.TimeSpan 
      value) {
      _set(  j0,  j1,  j2,  j3, 0, 0, 0, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0, int j1, int j2, int j3,edu.csdms.openmi.TimeSpan 
      value) {
      checkBounds(  j0,  j1,  j2,  j3);
      _set(  j0,  j1,  j2,  j3, 0, 0, 0, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[][][][] orray , boolean 
      inRow) {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      lower[1] = orray.length-1;
      lower[2] = orray[0].length-1;
      lower[3] = orray[0][0].length-1;
      _fromArray(orray, 4, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[][][][] toArray() {
      edu.csdms.openmi.TimeSpan[][][][] array = null;
      if (!isNull()) {
        checkDimension(4);
        int l0 = _lower(0);
        int u0 = _upper(0);
        int l1 = _lower(1);
        int u1 = _upper(1);
        int l2 = _lower(2);
        int u2 = _upper(2);
        int l3 = _lower(3);
        int u3 = _upper(3);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1][][][];
        for (int i = l0; i <= u0; i++) {
          array[i] = new edu.csdms.openmi.TimeSpan[u1-l1+1][][];
          for (int j = l1; j <= u1; j++) {
            array[i][j] = new edu.csdms.openmi.TimeSpan[u2-l2+1][];
            for (int k = l2; k <= u2; k++) {
              array[i][j][k] = new edu.csdms.openmi.TimeSpan[u3-l3+1];
              for (int l = l3; l <= u3; l++) {
                array[i-l0][j-l1][k-l2][l-l3] = _get(i, j, k, l);
                }
              }
            }
          }
        }
      return array;
      }

    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array4 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array4 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array4 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array4 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
  /**
   * The implementation of edu.csdms.openmi.TimeSpan 5 arrays.
   */
  public static class Array5 extends Array {

    /**
     * Construct an empty 5 dimensional array object.
     */
    public Array5() {
      super();
    }

    /**
     * 
     * Create a 5 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array5(edu.csdms.openmi.TimeSpan[][][][][] array, boolean isRow) {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array5(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 5 dimensional array with the specified, upper and lower bounds
     */
    public Array5( int l0, int l1, int l2, int l3, int l4, int u0, int u1, int 
      u2, int u3, int u4, boolean isRow) {
      super(5, new int[] {  l0,  l1,  l2,  l3,  l4}, new int[] {  u0,  u1,  u2, 
        u3,  u4}, isRow);
    }

    /**
     * Create a 5 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array5( int s0, int s1, int s2, int s3, int s4, boolean isRow)  {
      super(5, new int[] { 0, 0, 0, 0, 0}, new int[] { s0-1, s1-1, s2-1, s3-1, 
        s4-1}, isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array5(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    public edu.csdms.openmi.TimeSpan _get( int j0, int j1, int j2, int j3, int 
      j4) {
      return (edu.csdms.openmi.TimeSpan)_get(  j0,  j1,  j2,  j3,  j4, 0, 0);
    }

    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0, int j1, int j2, int j3, int 
      j4) {
      checkBounds(  j0,  j1,  j2,  j3,  j4);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0,  j1,  j2,  j3,  j4, 0, 0);
      return ret;

    }

    /**
     * Get the length of the array in the specified dimension
     */
    public int length(int dim) {
      return super._length(dim);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array5 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array5 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array5(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array5 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 5 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int l1, int l2, int l3, int l4, int u0, int 
      u1, int u2, int u3, int u4, boolean isRow)  {
      reallocate(5, new int[] {  l0,  l1,  l2,  l3,  l4}, new int[] {  u0,  u1, 
        u2,  u3,  u4}, isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0, int j1, int j2, int j3, int j4,
      edu.csdms.openmi.TimeSpan value) {
      _set(  j0,  j1,  j2,  j3,  j4, 0, 0, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0, int j1, int j2, int j3, int j4,
      edu.csdms.openmi.TimeSpan value) {
      checkBounds(  j0,  j1,  j2,  j3,  j4);
      _set(  j0,  j1,  j2,  j3,  j4, 0, 0, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[][][][][] orray , boolean 
      inRow) {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      lower[1] = orray.length-1;
      lower[2] = orray[0].length-1;
      lower[3] = orray[0][0].length-1;
      lower[4] = orray[0][0][0].length-1;
      _fromArray(orray, 5, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[][][][][] toArray() {
      edu.csdms.openmi.TimeSpan[][][][][] array = null;
      if (!isNull()) {
        checkDimension(5);
        int l0 = _lower(0);
        int u0 = _upper(0);
        int l1 = _lower(1);
        int u1 = _upper(1);
        int l2 = _lower(2);
        int u2 = _upper(2);
        int l3 = _lower(3);
        int u3 = _upper(3);
        int l4 = _lower(4);
        int u4 = _upper(4);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1][][][][];
        for (int i = l0; i <= u0; i++) {
          array[i] = new edu.csdms.openmi.TimeSpan[u1-l1+1][][][];
          for (int j = l1; j <= u1; j++) {
            array[i][j] = new edu.csdms.openmi.TimeSpan[u2-l2+1][][];
            for (int k = l2; k <= u2; k++) {
              array[i][j][k] = new edu.csdms.openmi.TimeSpan[u3-l3+1][];
              for (int l = l3; l <= u3; l++) {
                array[i][j][k][l] = new edu.csdms.openmi.TimeSpan[u4-l4+1];
                for (int m = l4; m <= u4; m++) {
                  array[i-l0][j-l1][k-l2][l-l3][m-l4] = _get(i, j, k, l, m);
                  }
                }
              }
            }
          }
        }
      return array;
      }

    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array5 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array5 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array5 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array5 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
  /**
   * The implementation of edu.csdms.openmi.TimeSpan 6 arrays.
   */
  public static class Array6 extends Array {

    /**
     * Construct an empty 6 dimensional array object.
     */
    public Array6() {
      super();
    }

    /**
     * 
     * Create a 6 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array6(edu.csdms.openmi.TimeSpan[][][][][][] array, boolean isRow) {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array6(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 6 dimensional array with the specified, upper and lower bounds
     */
    public Array6( int l0, int l1, int l2, int l3, int l4, int l5, int u0, int 
      u1, int u2, int u3, int u4, int u5, boolean isRow) {
      super(6, new int[] {  l0,  l1,  l2,  l3,  l4,  l5}, new int[] {  u0,  u1, 
        u2,  u3,  u4,  u5}, isRow);
    }

    /**
     * Create a 6 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array6( int s0, int s1, int s2, int s3, int s4, int s5, boolean 
      isRow)  {
      super(6, new int[] { 0, 0, 0, 0, 0, 0}, new int[] { s0-1, s1-1, s2-1, 
        s3-1, s4-1, s5-1}, isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array6(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    public edu.csdms.openmi.TimeSpan _get( int j0, int j1, int j2, int j3, int 
      j4, int j5) {
      return (edu.csdms.openmi.TimeSpan)_get(  j0,  j1,  j2,  j3,  j4,  j5, 0);
    }

    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0, int j1, int j2, int j3, int 
      j4, int j5) {
      checkBounds(  j0,  j1,  j2,  j3,  j4,  j5);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0,  j1,  j2,  j3,  j4,  j5, 0);
      return ret;

    }

    /**
     * Get the length of the array in the specified dimension
     */
    public int length(int dim) {
      return super._length(dim);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array6 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array6 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array6(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array6 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 6 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int l1, int l2, int l3, int l4, int l5, int 
      u0, int u1, int u2, int u3, int u4, int u5, boolean isRow)  {
      reallocate(6, new int[] {  l0,  l1,  l2,  l3,  l4,  l5}, new int[] {  u0, 
        u1,  u2,  u3,  u4,  u5}, isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0, int j1, int j2, int j3, int j4, int j5,
      edu.csdms.openmi.TimeSpan value) {
      _set(  j0,  j1,  j2,  j3,  j4,  j5, 0, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0, int j1, int j2, int j3, int j4, int j5,
      edu.csdms.openmi.TimeSpan value) {
      checkBounds(  j0,  j1,  j2,  j3,  j4,  j5);
      _set(  j0,  j1,  j2,  j3,  j4,  j5, 0, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[][][][][][] orray , 
      boolean inRow) {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      lower[1] = orray.length-1;
      lower[2] = orray[0].length-1;
      lower[3] = orray[0][0].length-1;
      lower[4] = orray[0][0][0].length-1;
      lower[5] = orray[0][0][0][0].length-1;
      _fromArray(orray, 6, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[][][][][][] toArray() {
      edu.csdms.openmi.TimeSpan[][][][][][] array = null;
      if (!isNull()) {
        checkDimension(6);
        int l0 = _lower(0);
        int u0 = _upper(0);
        int l1 = _lower(1);
        int u1 = _upper(1);
        int l2 = _lower(2);
        int u2 = _upper(2);
        int l3 = _lower(3);
        int u3 = _upper(3);
        int l4 = _lower(4);
        int u4 = _upper(4);
        int l5 = _lower(5);
        int u5 = _upper(5);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1][][][][][];
        for (int i = l0; i <= u0; i++) {
          array[i] = new edu.csdms.openmi.TimeSpan[u1-l1+1][][][][];
          for (int j = l1; j <= u1; j++) {
            array[i][j] = new edu.csdms.openmi.TimeSpan[u2-l2+1][][][];
            for (int k = l2; k <= u2; k++) {
              array[i][j][k] = new edu.csdms.openmi.TimeSpan[u3-l3+1][][];
              for (int l = l3; l <= u3; l++) {
                array[i][j][k][l] = new edu.csdms.openmi.TimeSpan[u4-l4+1][];
                for (int m = l4; m <= u4; m++) {
                  array[i][j][k][l][m] = new edu.csdms.openmi.TimeSpan[u4-l4+1];
                  for (int n = l5; n <= u5; n++) {
                    array[i-l0][j-l1][k-l2][l-l3][m-l4][n-l5] = _get(i, j, k, l,
                      m, n);
                    }
                  }
                }
              }
            }
          }
        }
      return array;
      }

    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array6 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array6 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array6 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array6 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
  /**
   * The implementation of edu.csdms.openmi.TimeSpan 7 arrays.
   */
  public static class Array7 extends Array {

    /**
     * Construct an empty 7 dimensional array object.
     */
    public Array7() {
      super();
    }

    /**
     * 
     * Create a 7 dimensional array using the specified java array.
     * The lower bounds of the constructed array will start at zero.
     * An array index out of range exception will be thrown if the 
     * bounds are invalid.
     */
    public Array7(edu.csdms.openmi.TimeSpan[][][][][][][] array, boolean isRow) 
      {
      super();
      fromArray(array, isRow);
    }

    /**
     * Create an array using an IOR pointer
     */
    protected Array7(long array, boolean owner) {
      super(array, owner);
    }

    /**
     * Create a 7 dimensional array with the specified, upper and lower bounds
     */
    public Array7( int l0, int l1, int l2, int l3, int l4, int l5, int l6, int 
      u0, int u1, int u2, int u3, int u4, int u5, int u6, boolean isRow) {
      super(7, new int[] {  l0,  l1,  l2,  l3,  l4,  l5,  l6}, new int[] {  u0, 
        u1,  u2,  u3,  u4,  u5,  u6}, isRow);
    }

    /**
     * Create a 7 dimensional array with the specified, upper bounds.  Lower bounds are all 0
     */
    public Array7( int s0, int s1, int s2, int s3, int s4, int s5, int s6, 
      boolean isRow)  {
      super(7, new int[] { 0, 0, 0, 0, 0, 0, 0}, new int[] { s0-1, s1-1, s2-1, 
        s3-1, s4-1, s5-1, s6-1}, isRow);
    }

    /**
     * Create an array using an BaseInterface Array
     */
    protected Array7(sidl.BaseInterface.Array core) {
      super(core);
      }
    /**
     * Get the element at the specified array w/o bounds checking (Is not written for 7 dimensions, as this functionality is inherited from Array
     */
    /**
     * Get the element at the specified array with bounds checking
     */
    public edu.csdms.openmi.TimeSpan get( int j0, int j1, int j2, int j3, int 
      j4, int j5, int j6) {
      checkBounds(  j0,  j1,  j2,  j3,  j4,  j5,  j6);
      edu.csdms.openmi.TimeSpan ret = null;
      ret = (edu.csdms.openmi.TimeSpan) _get(  j0,  j1,  j2,  j3,  j4,  j5,  
        j6);
      return ret;

    }

    /**
     * Get the length of the array in the specified dimension
     */
    public int length(int dim) {
      return super._length(dim);
    }

    /**
     * Make a copy of a borrowed array, addref otherwise
     */
    public edu.csdms.openmi.TimeSpan.Array7 smartCopy() {
      edu.csdms.openmi.TimeSpan.Array7 ret = null;
      edu.csdms.openmi.TimeSpan.Array preCast = null;
      preCast = (edu.csdms.openmi.TimeSpan.Array) _smartCopy();
      return new edu.csdms.openmi.TimeSpan.Array7(preCast.getBaseInterfaceArray(
        ));
    }

    /**
     * Copy elements of this array into a passed in array of exactly the smae size
     */
    public void copy(edu.csdms.openmi.TimeSpan.Array7 dest) {
      _copy((edu.csdms.openmi.TimeSpan.Array) dest);
    }

    /**
     * Reallocate the 7 dimensional array with the specified, upper and lower bounds
     */
    public void reallocate( int l0, int l1, int l2, int l3, int l4, int l5, int 
      l6, int u0, int u1, int u2, int u3, int u4, int u5, int u6, boolean 
      isRow)  {
      reallocate(7, new int[] {  l0,  l1,  l2,  l3,  l4,  l5,  l6}, new int[] { 
        u0,  u1,  u2,  u3,  u4,  u5,  u6}, isRow);
    }

    /**
     * Set the element at the specified array w/o bounds checking
     */
    public void _set( int j0, int j1, int j2, int j3, int j4, int j5, int j6,
      edu.csdms.openmi.TimeSpan value) {
      _set(  j0,  j1,  j2,  j3,  j4,  j5,  j6, value);
    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void set( int j0, int j1, int j2, int j3, int j4, int j5, int j6,
      edu.csdms.openmi.TimeSpan value) {
      checkBounds(  j0,  j1,  j2,  j3,  j4,  j5,  j6);
      _set(  j0,  j1,  j2,  j3,  j4,  j5,  j6, value);

    }
    /**
     * Set the element at the specified array with bounds checking
     */
    public void fromArray( edu.csdms.openmi.TimeSpan[][][][][][][] orray , 
      boolean inRow) {
      int[] lower = new int[7];
      lower[0] = orray.length-1;
      lower[1] = orray.length-1;
      lower[2] = orray[0].length-1;
      lower[3] = orray[0][0].length-1;
      lower[4] = orray[0][0][0].length-1;
      lower[5] = orray[0][0][0][0].length-1;
      lower[6] = orray[0][0][0][0][0].length-1;
      _fromArray(orray, 7, lower, inRow);
    }
    /**
     * 
     * Convert the sidl array into a Java array.  This method will copy
     * the sidl array into the Java array.  The resulting Java array will
     * (obviously) start with a zero lower bound.  If the sidl array is
     * empty (null), then a null Java array will be returned.
     * 
     */
    public edu.csdms.openmi.TimeSpan[][][][][][][] toArray() {
      edu.csdms.openmi.TimeSpan[][][][][][][] array = null;
      if (!isNull()) {
        checkDimension(6);
        int l0 = _lower(0);
        int u0 = _upper(0);
        int l1 = _lower(1);
        int u1 = _upper(1);
        int l2 = _lower(2);
        int u2 = _upper(2);
        int l3 = _lower(3);
        int u3 = _upper(3);
        int l4 = _lower(4);
        int u4 = _upper(4);
        int l5 = _lower(5);
        int u5 = _upper(5);
        int l6 = _lower(6);
        int u6 = _upper(6);
        array = new edu.csdms.openmi.TimeSpan[u0-l0+1][][][][][][];
        for (int i = l0; i <= u0; i++) {
          array[i] = new edu.csdms.openmi.TimeSpan[u1-l1+1][][][][][];
          for (int j = l1; j <= u1; j++) {
            array[i][j] = new edu.csdms.openmi.TimeSpan[u2-l2+1][][][][];
            for (int k = l2; k <= u2; k++) {
              array[i][j][k] = new edu.csdms.openmi.TimeSpan[u3-l3+1][][][];
              for (int l = l3; l <= u3; l++) {
                array[i][j][k][l] = new edu.csdms.openmi.TimeSpan[u4-l4+1][][];
                for (int m = l4; m <= u4; m++) {
                  array[i][j][k][l][m] = new 
                    edu.csdms.openmi.TimeSpan[u4-l4+1][];
                  for (int n = l5; n <= u5; n++) {
                    array[i][j][k][l][m][n] = new 
                      edu.csdms.openmi.TimeSpan[u5-l5+1];
                    for (int o = l6; o <= u6; o++) {
                      array[i-l0][j-l1][k-l2][l-l3][m-l4][n-l5][o-l6] = _get(i, 
                        j, k, l, m, n,o);

                      }
                    }
                  }
                }
              }
            }
          }
        }
      return array;
      }
    /**
     * Holder class for inout and out arguments.
     */
    public static class Holder {
      private edu.csdms.openmi.TimeSpan.Array7 d_obj;

      /**
       * Create a holder with a null holdee object.
       */
      public Holder() {
        d_obj = null;
      }

      /**
       * Create a holder with the specified object.
       */
      public Holder(edu.csdms.openmi.TimeSpan.Array7 obj) {
        d_obj = obj;
      }

      /**
       * Set the value of the holdee object.
       */
      public void set(edu.csdms.openmi.TimeSpan.Array7 obj) {
        d_obj = obj;
      }

      /**
       * Get the value of the holdee object.
       */
      public edu.csdms.openmi.TimeSpan.Array7 get() {
        return d_obj;
      }

      /**
       * Method to destroy array.
       */
      public void destroy() {
         if (d_obj != null) { d_obj.destroy(); d_obj = null; }
      }
    }
  }
}
