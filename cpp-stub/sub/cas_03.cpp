#include "sub.h"
#include <iostream>

using namespace std;
namespace {
class A {
  int i;

public:
  static int foo(int a) {
    cout << "I am A_foo" << endl;
    return 0;
  }
};

int foo_stub(int a) {
  cout << "I am foo_stub" << endl;
  return 0;
}
}

namespace sub {
int cas_3() {
  Stub stub;
  stub.set(ADDR(A, foo), foo_stub);

  A::foo(1);
  return 0;
}

}