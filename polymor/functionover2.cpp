#include<iostream>

class FunOverload {

	public:
		void fun(int x) {

			std::cout << "int" << std::endl;
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
//error yete ya program madhe ambiquiotty kontya function la call karu samjat nahi
