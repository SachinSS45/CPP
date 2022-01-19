#include <iostream>

int main() {
	
	int n;
	std::cout << "Enter the table number you want to print : ";
	std::cin >> n;
	std::cout << "\n";

	for (int i=1 ; i<=10 ; i++ ) {
			
		std::cout << n << " x " << i << "=" << n*i << std::endl;
	}
	return 0;
}
