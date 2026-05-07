#include <iostream>
#include "cas_0.h"

using namespace std;

namespace cas {

template <> void Swap<int>(int & a, int & b) {
    int c = a; a = b; b = c;
    std::cout << "int" << std::endl;

}

typedef int Tp;

void bak() {
    Tp x(1);
    Tp y(2);
    Swap(x, y);
}


}