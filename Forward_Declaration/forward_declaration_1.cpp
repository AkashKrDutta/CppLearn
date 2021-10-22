#include <iostream>

extern int add(int x, int y);

int main(){
	int a, b;
	a = 10; b = 30;
	std::cout<<add(a,b)<<std::endl;
	return 0;
}

