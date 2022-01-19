#include<iostream>

template<class T>
class Template {

	T data;

	public:
		T display() {

			return data;
		}
};

int main() {

	//Template obj;error yete argument magte missing template argument kiti size dayla pahije objectla kaltach nahi
	
	Template<int>obj;// T=int
	std::cout << sizeof(obj) << std::endl;//4
	
	Template<double>obj1;// T=double
	std::cout << sizeof(obj1) << std::endl;//8
	
	return 0;
}
 
