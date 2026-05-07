#ifndef CAS_0_H
#define CAS_0_H

#include <iostream>
namespace cas {

void bak();

template <typename T> void Swap(T &a, T &b);

template <> void Swap<int>(int & a, int & b);

}

#endif // CAS_0_H