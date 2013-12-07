/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_paulasmuth_libsmatrix_SparseMatrix */

#ifndef _Included_com_paulasmuth_libsmatrix_SparseMatrix
#define _Included_com_paulasmuth_libsmatrix_SparseMatrix
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    get
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_get
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    set
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_set
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    incr
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_incr
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    decr
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_decr
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    getRow
 * Signature: (I)Ljava/util/SortedMap;
 */
JNIEXPORT jobject JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_getRow
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    getRowLength
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_getRowLength
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_close
  (JNIEnv *, jobject);

/*
 * Class:     com_paulasmuth_libsmatrix_SparseMatrix
 * Method:    init
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_paulasmuth_libsmatrix_SparseMatrix_init
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif