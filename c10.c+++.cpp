#include<stdio.h>
int main(){
	int n,first,last;
	printf("Enter a 3-digit number:");
	scanf("%d",&n);
	last=n%10;
	first=n%100;
	printf("Sum=%d\n",first+last);
	return 0;
}