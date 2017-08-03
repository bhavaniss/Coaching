#include <stdio.h>

int findReverse(int x) {
	int tempMain = 0;
	int temp;
	while(x != 0) {
		//pick the last digit.
		temp = x%10;
		// append the next digit on the right side.
		tempMain = (tempMain * 10) + temp;
		// printing number here for understanding.
		// printf("%d\n", tempMain);
		//remove the last digit
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