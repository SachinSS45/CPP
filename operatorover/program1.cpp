#include<iostream>

class AddTwo {

	public:
		int x = 10;
		int y = 20;
};

int main(){
	
	AddTwo obj;
	std::cout<< obj.x +obj.y ;
	return 0;
}
