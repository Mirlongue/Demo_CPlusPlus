#include "sub.h"

using namespace std;
namespace sub {

class A {
  int i;

public:
  int foo(int a) {
    cout << "I am A_foo" << endl;
    return 0;
  }
};

int foo_stub(void *obj, int a) {
  A *o = (A *)obj;
  cout << "I am foo_stub" << endl;
  return 0;
}

int cas_1() {
  Stub stub;
  stub.set(ADDR(A, foo), foo_stub);
  A a;
  a.foo(1);
  return 0;
}

}