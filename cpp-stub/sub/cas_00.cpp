#include "sub.h"

using namespace std;

namespace {

int foo(int a) {
  cout << "I am foo" << endl;
  return 0;
}

int foo_stub(int a) {
  cout << "I am foo_stub" << endl;
  return 0;
}
}
namespace sub {
int cas_0() {
  Stub stub;
  stub.set(foo, foo_stub);
  foo(1);
  return 0;
}
}