#include <stdio.h>

int findFactorial(int x) {
	if(x == 1 || x == 0) {
		return 1;
	} else {
		return x * findFactorial(x-1);
	}
}

int main() {
	int x;
	printf("enter the number: ");
	scanf("%d", &x);
	int result = findFactorial(x);
	
   printf("Result: %d\n", result);
   
   return 0;
}