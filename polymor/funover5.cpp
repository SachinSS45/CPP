#include<iostream>

class FunOverload {

	public:
		void fun(int x) {

			std::cout << "int" << std::endl;
			
		}
		void fun(float x) {

			std::cout << "float" << std::endl;
		}
};	

int main() {
        
	FunOverload obj;

	obj.fun(10);              //fun(int)
	obj.fun(10.4f);//fun(float)
	obj.fun('s');//promate hote char cha int madhe fun(int)
	return 0;
};
//sequence different asla tari chalte no error

