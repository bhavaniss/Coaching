#include <stdio.h>

int main() {
	int x;
	int y;
	scanf("%d", &x);
	scanf("%d", &y);
	int i = 0;
	int result = 1;

	// initial declaration | condition | increment || decrement
	for(i=0; i<y; i++){
		result = result*x ;
	}

   printf("%d\n", result);
   
   return 0;
}