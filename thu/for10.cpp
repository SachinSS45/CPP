#include<iostream>

int main(){

	int cnt=0;

	for(int i=1; cnt<5;i++){

		if(i%5==0){

			std::cout << i << " ";
			cnt++;
		}
	}
	return 0;
}
