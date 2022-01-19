#include<iostream>

class Template {
            public:
     		template<typename T>
		T add(T x,T y) {

			return x+y;	
		}// we have to write code only once in templates

};

int main() {
	Template obj;
	std::cout<< obj.add(10,20) << std::endl;
	std::cout<< obj.add(10.5,20) << std::endl;
	return 0;
}
