#include "sub.h"
#include <iostream>

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

class B {
public:
  int foo_stub(int a) {
    cout << "I am foo_stub" << endl;
    return 0;
  }
};

int cas_2() {
  Stub stub;
  stub.set(ADDR(A, foo), ADDR(B, foo_stub));
  A a;
  a.foo(1);
  return 0;
}

}