#include<iostream>

class FunOverload {

	public:
		void fun(int x,float y) {

			std::cout << "int-float" << std::endl;
			
		}
		void fun(float x,int y) {

			std::cout << "float-int" << std::endl;
		}
};	

int main() {
        
	FunOverload obj;

	obj.fun(10,10.5f);              //fun(int,float)
	obj.fun(10.4f,20);		//fun(float,int)
	return 0;
};
//sequence different asla tari chalte no error

