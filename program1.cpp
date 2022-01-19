#include<iostream>

class Test{

	int a,b;
	public:
		void getdata(){
			std::cout<< "Enter the values of a & b " << std::endl;
			std::cin>> a >> b;
		}
		void putdata(){
			std::cout << "a is " << a << std::endl;
			std::cout << "b is " << b << std::endl;
		}
              Test& sum(const Test &t2) {
	
     			Test t3;
			t3.a = a + t2.a;
			t3.b = b + t2.b;
			return t3;
	      }
};


int main(){

	Test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3=t1.sum(t2);
	t1.putdata();
	t2.putdata();
	t3.putdata();
}
	




