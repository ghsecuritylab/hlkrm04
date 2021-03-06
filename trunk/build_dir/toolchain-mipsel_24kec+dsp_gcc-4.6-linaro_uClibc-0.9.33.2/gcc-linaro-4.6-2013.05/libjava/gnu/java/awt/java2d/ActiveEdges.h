
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_java2d_ActiveEdges__
#define __gnu_java_awt_java2d_ActiveEdges__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace java2d
        {
            class ActiveEdges;
            class PolyEdge;
        }
      }
    }
  }
}

class gnu::java::awt::java2d::ActiveEdges : public ::java::lang::Object
{

public: // actually package-private
  ActiveEdges();
  void clear();
  void add(::gnu::java::awt::java2d::PolyEdge *);
  void intersectSortAndPack(jint, jint);
  jint getNumActiveEdges();
  ::gnu::java::awt::java2d::PolyEdge * getActiveEdge(jint);
  void remove(jint);
public:
  ::java::lang::String * toString();
private:
  JArray< ::gnu::java::awt::java2d::PolyEdge * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) activeEdges;
  jint numActiveEdges;
public: // actually package-private
  static jboolean $assertionsDisabled;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_java2d_ActiveEdges__
