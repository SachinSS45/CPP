#include<iostream>

class FunOverload {

	public:
		int fun(int x) {

			std::cout << "int" << std::endl;
			return 1;
		}
		void fun(int  x) {

			std::cout << "float" << std::endl;
		}
};	

int main() {
        
	FunOverload obj;

	obj.fun(10);
//	obj.fun(10.4f);
	return 0;
};
//function overloading reeturn type depend karat nahi error yete
