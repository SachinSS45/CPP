#include<iostream>

template<typename T>
T add(T x,T y) {

	return x+y;	
}// we have to write code only once in templates



int main() {
	
	std::cout<< add(10,20) << std::endl;
	std::cout<< add(10.5,20.5) << std::endl;
	return 0;
}
