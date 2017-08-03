#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]) {
	int left = 0;
	int right = strlen(str) - 1;
	// check the left and right elements
	while (right > left) {
		if(str[left++] != str[right--]) {
			printf("Not a palindrome\n");
			return;
		}
	}
	printf("Is a palindrome\n");
	return;
}

int main() {
	isPalindrome("abba");
	isPalindrome("geekeega");   
   return 0;
}