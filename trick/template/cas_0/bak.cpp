#include <iostream>
#include "cas_0.h"

using namespace std;

namespace cas {
// explicit concretion
template <> void Swap<int>(int & a, int & b) {
    int c = a; a = b; b = c;
    std::cout << "int" << std::endl;

}

// explicit instantiation
// template void Swap<double>(double &, double &);

typedef double Tp;

void bak() {
    Tp x(1);
    Tp y(2);
    cout << "bak" << endl;
    cout << x << " " << y << endl;
    Swap(x,y);
    cout << x << " " << y << endl;
}


}