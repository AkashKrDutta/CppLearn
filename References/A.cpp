#include <iostream>

int main(){
    int a = 10;
    int & b {a};
    std::cout << &b << std::endl;
    return 0;
}
