#include<iostream>

int main(){

    for(int i=1;i<=10;i++){

	    if(i%2==1){//(i%2!=0)

		    std::cout << "Odd:" << i <<std:: endl;
	    }
	    else if(i%2==0){

		    std::cout << "Even:" << i <<std:: endl;
	    }
    }
    return 0;
}

