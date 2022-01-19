#include <iostream>

class Employee {
		
	public:
		double sal;
		Employee(double sal) {
		
			this->sal = sal;
	}
		template<typename T>
	        T max(T x, T y) {

			if(x>y) 
				return x;
			else
				return y;
		}

		friend bool operator>(Employee &ref1,Employee &ref2) {
		
			return ref1.sal > ref2.sal;
		} 
};

int main() {
	
	Employee ashish(100000);
	Employee kanha(200000);
        //std::cout << ashish.max(ashish,kanha)<< std::endl;//asa lihla tr error deta object direct kasa print karnar 
	Employee maxSal = ashish.max(ashish,kanha);
        std::cout << maxSal.sal << std::endl;
	return 0;
}

