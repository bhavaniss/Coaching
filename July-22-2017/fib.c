#include <stdio.h>

int returnFib(int n) {
	printf("in fib function \n");
	printf("%d\n", n);
	if(n == 0) {
		return 0;
	} 
	if(n == 1) {
		return 1;
	}
	return returnFib(n-1) + returnFib(n-2);
}

int main() {
	//fibonacci is the number which is the adding of its last two(preceeding) numbers
	// 0 1 1 2 3 5 8 13
	int i = 0;
	int n;
	printf("enter the number: ");
	scanf("%d", &n);
	int result = returnFib(n);
	
   printf("%d\n", result);
   
   return 0;
}