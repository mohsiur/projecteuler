#include <stdio.h>
#define MAX 1000 //Max Number set to 1000
int main(){

	int multipleOne = 3;
	int multipleTwo = 5;
	
	int i, sum = 0;
	
	for(i = 1; i <MAX; i++){
		if(i%multipleOne == 0) sum += i;
		else if(i%multipleTwo == 0) sum +=i;
		else continue;
	}
	
	printf("%d \n", sum);
}
