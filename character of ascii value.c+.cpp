#include<stdio.h>
int main(){
	int asciivalue;
	printf("Enter an ASCII value:");
	scanf("%d",&asciivalue);
	printf("The character for ASCII value %d is: %c\n",asciivalue,asciivalue);
	return 0;
}
