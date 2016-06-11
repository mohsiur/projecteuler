#include <stdio.h>
#define MAX 100

int sumSquares(int);
int squareSum(int);

int main(){
	int sol = squareSum(MAX) - sumSquares(MAX);
	printf("%d\n", sol);
	
	return 0;
}

int sumSquares(int n){
	int i, sum = 0;
	for(i = 0 ; i <= n; i++){
		sum += (i*i);
	}
	return sum;
}

int squareSum(int n){
	int i, sum = 0;
	for(i = 0; i <=n; i++){
		sum += i;
	}
	return sum*sum;
}
