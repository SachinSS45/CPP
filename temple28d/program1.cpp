#include<iostream>

int add(int x,int y) {

	return x+y;	
}
double  add(double x,double y) {

	return x+y;
}


int main() {
	
	std::cout<< add(10,20) << std::endl;
	std::cout<< add(10.5,20.5) << std::endl;
	return 0;
}
