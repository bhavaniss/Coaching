#include <stdio.h>

int main() {
	int i = 0;
	int n;
	printf("enter the number: ");
	scanf("%d", &n);
	int result = 0;
	while(i < n) {
		result = result + i;
		++i;
	}
   printf("%d\n", result);
   
   return 0;
}