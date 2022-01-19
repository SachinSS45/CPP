#include<iostream>

int main() {

	int n;
	std::cout << "How many numbers of squares you want to print:"<< std::endl;
	std::cin >> n;

	for (int i =1; i<=n ; i++ ) {

		std::cout << "Square of " << i << " is " << i*i << std::endl;
	}
	return 0;
}
