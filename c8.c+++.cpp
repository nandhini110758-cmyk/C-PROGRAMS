#include<stdio.h>
int main(){
	int number;
	int lastdigit;
	printf("Enter the integer:");
	scanf("%d",number);
	lastdigit=number%10;
	printf("The last digit of %d\n",number,lastdigit);
	return 0;
}