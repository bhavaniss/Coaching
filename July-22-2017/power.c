#include <stdio.h>

int power(int x, int r) {
	if(r == 0) {
		return 1;
	}
	if(r%2 == 1) {
		return power(x, r/2) * power(x, r/2) * x;
	} else {
		return power(x, r/2) * power(x, r/2);
	}
}

int main() {
	int x;
	int y;
	printf("enter the numbers: ");
	scanf("%d", &x);
	scanf("%d", &y);
	int result = power(x, y);
	
   printf("%d\n", result);
   
   return 0;
}