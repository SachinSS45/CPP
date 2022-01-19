#include<iostream>
/*
class AddTwo {

	private:
		int x = 10;
		int y = 20;
		
};

int main(){
	
	AddTwo obj;
	std::cout<< obj.x +obj.y ;
	return 0;
}*/ //give error we are accessing private varibles directly 
/*class AddTwo {

	private:
		int x = 10;
		int y = 20;

	public:
		void disp(){

			std::cout << x + y << std::endl;// internally int operator+(int,int) 
		}
		
};

int main(){
	
	AddTwo obj;
	obj.disp();// 30
	return 0;
}*/
/*class AddTwo {

	private:
		int x = 10;
		int y = 20;

	public:
		void disp(){

			std::cout << x + y << std::endl;// internally int operator+(int,int) 
		}
		
};

int main(){
	
	AddTwo obj1;// user defined ahet 
	AddTwo obj2;

	std::cout << obj1 + obj2 << std::endl;// error dete two golyanchi addition kashi hoil bara no match for operator+
	return 0;// AddTwo operator+(obj1 + obj2);asa lihayla pahije
}*/
class AddTwo {

	private:
		int x = 10;
		int y = 20;

	public:
		void disp(){

			std::cout << x + y << std::endl;// internally int operator+(int,int) 
		}

		friend AddTwo operator+(AddTwo &ref1,AddTwo &ref2);
		
};

AddTwo operator+(AddTwo &ref1,AddTwo &ref2) {
	
	return ref1.x + ref2.x;
}

int main(){
	
	AddTwo obj1;// user defined ahet 
	AddTwo obj2;

	std::cout << obj1 + obj2 << std::endl;// ata vari call jate// AddTwo operator+(obj1,obj2); 
	return 0;
}
