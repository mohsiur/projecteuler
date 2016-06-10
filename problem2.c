#include <stdio.h>
#define MAX 4000000 //Max Number set to 4,000,000

int fibonacci(int);

int main(){
	int i, sum = 0, first = 1;

	for(i = 0; i<=MAX; i++){
		//printf("%d\n", fibonacci(first));
		if(fibonacci(first) > MAX) break;
		else if(fibonacci(first)%2 ==0) sum += fibonacci(first);
		first++;
	}
	
	printf("%d\n", sum);

	return 0;
}

int fibonacci(int n){
	if(n==0) return 0;
	else if ( n == 1) return 1;
	else return (fibonacci(n-1)+fibonacci(n-2));
}
