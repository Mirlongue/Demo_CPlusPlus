#include "sub.h"

using namespace std;

namespace {
class A {
public:
  template <typename T> int foo(T a) {
    cout << "I am A_foo" << endl;
    return 0;
  }
};

class B {
public:
  int foo_stub(int a) {
    cout << "I am foo_stub" << endl;
    return 0;
  }
};
}

namespace sub {
int cas_5() {
  Stub stub;
  stub.set((int(A::*)(int))ADDR(A, foo), ADDR(B, foo_stub));
  A a;
  a.foo(5);
  return 0;
}
}