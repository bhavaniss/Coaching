#include <stdio.h>

int findReverse(int x) {
	int tempMain = 0;
	int temp;
	while(x != 0) {
		temp = x%10;
		tempMain = (tempMain * 10) + temp;
		// printing number here for understanding.
		// printf("%d\n", tempMain);
		x = x/10;
	}
	return tempMain;
}

int main() {
	int x;
	printf("enter the number: ");
	scanf("%d", &x);
	int result = findReverse(x);
	
   printf("Result: %d\n", result);
   
   return 0;
}