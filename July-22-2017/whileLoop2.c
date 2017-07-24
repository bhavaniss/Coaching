#include <stdio.h>
int main() {
	//initilization
	//take input
	int n;
	//for using in increment & decrement
	int i;
	//read input
	printf("please enter the number; \n");
	scanf("%d", &n);
	i = 0;
	int sum = 0;
	while(i < n) {
		sum = sum + i;
		++i;
	}
	printf("result: %d\n", sum);
}
