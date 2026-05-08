#include <iostream>

using namespace std;

namespace cas {
struct Tru {};
struct Fal {};

template <typename T>
struct TypeTraits{
    typedef Tru is_type;
};

template <> struct TypeTraits<int>{
    typedef Fal is_type;
};

void PrintType(Tru) {
    std::cout << "Tru" << std::endl;
}

void PrintType(Fal) {
    std::cout << "Fal" << std::endl;
}

template <typename T>
void Process(T) {
    typedef typename TypeTraits<T>::is_type is_type;
    PrintType(is_type());
}


void cas_2() {
    Process(int());
    Process(double());
}
}