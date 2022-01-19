#include<iostream>

int main(){
	
	int cnt=0;

	for(int i=1 ;cnt<10;i++) {

		if(i%2==0){

			std::cout << i << " " ;
			cnt++;
		}
	}
	return 0;
}
