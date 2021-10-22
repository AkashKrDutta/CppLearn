#include <iostream>

int func_a (int a, int b){
	return a + b;
}

float func_a (int a, int b){
	return 1.0*(a+b);
}

int main(){
	int sum, a, b;
	std::cin>>a>>b;
	std::cout<<func_a(a,b);
	return 0;
}
