#include <iostream>

int main() {

        std::string username;
	int pass;

	std::cout << "Enter Your Username :" << std::endl;
	std::cin  >> username;
        
	std::cout << "Enter Your Password :" << std::endl;
	std::cin >> pass;

	if ( username=="sachinss45" && pass==456 ) {

		std::cout<< "You have sucessfully logined" << std::endl;
	}
	else{
		std::cout << "Invalid Username and Password" << std::endl;
	}
	return 0;
}
