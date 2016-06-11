#include <stdio.h>

int main(){
	long long int n = 600851475143;
	long long int maxfactor = 2;
	
	while(n > maxfactor){
		if(n%maxfactor == 0){
			n = n/maxfactor;
			maxfactor = 2;
		}
		else maxfactor++;
	}

	printf("%lld\n", maxfactor);

	return 0;
}
