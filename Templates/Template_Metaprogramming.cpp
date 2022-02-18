#include<iostream>
#include <ostream>

template <unsigned N>
struct factorial {
    factorial<N-1> fac;
	unsigned value = N * fac.value;
};

template <>
struct factorial<0> {
	unsigned value = 1;
};


int main() {
    factorial<5> fac;
    std::cout<<fac.value<<std::endl;
    return 0;
}
