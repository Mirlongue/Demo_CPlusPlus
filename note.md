## const

global variables, internal linking, make it externally linked via `extern`

## static

local variables, in static storage area, initialize once

global variables, change the link to internal

member variables, variables belong to the class itself

member functions, functions belong to the class itself

## typedef

alias

simplify complex types
  starting from the variable name, proceed from right to left

## using

introduction

alias

inherited constructor (using BaseClass::BaseClass)

## #define

stringification:		#

mark connection:	  ##

## template



```c++
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

Process(int());
Process(double());
```