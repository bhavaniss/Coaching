#include <stdio.h>

//main gcd function which return gcd
int gcd(int a, int b) {
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	if(a % b == 0) {
		return b;
	} else {
		//make recursive call over here.
		return gcd (b, a%b);
	}
}

int main() {
	//declare
	int x;
	int y;
	printf("enter the numbers: ");
	//read numbers
	scanf("%d", &x);
	scanf("%d", &y);
				 //call gcd function over here which is at the top.
	int result = gcd(x, y);
	
   printf("%d\n", result);
   
   return 0;
}