#include <iostream>

using namespace std;

namespace cas {
template <typename T>
struct Iter {
    typedef T value_type;
    Iter(T x) : x_(x) {}
    T & Get() {
        return x_;
    }
    T x_;
};

template <typename T>
typename T::value_type Get(T ite) {
    return ite.Get();
}

void cas_1() {
    Iter<int> ite(1);
    cout << Get<Iter<int>>(ite) << endl;

    Iter ite_(2);
    cout << Get(ite_) << endl;
}

}