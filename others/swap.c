#include <stdio.h>
#include <string.h>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
	return;
}

int main() {
	//declare
	int x;
	int y;
	printf("enter the numbers: ");
	//read numbers
	scanf("%d", &x);
	scanf("%d", &y);
	printf("before swapping\n");
	printf("%d\t", x);
	printf("%d\n", y);
	swap(&x, &y);
	printf("after swapping\n");
	printf("%d\t", x);
	printf("%d\n", y);
   return 0;
}