#ifndef CAS_0_H
#define CAS_0_H

#include <iostream>
namespace cas {

void bak();

template <typename T>
void Swap(T &a, T &b) {
    T c = a; a = b; b = c;
    std::cout << "template" << std::endl;
}

template <> void Swap<int>(int & a, int & b);

template void Swap<double>(double &, double &);

}

#endif // CAS_0_H