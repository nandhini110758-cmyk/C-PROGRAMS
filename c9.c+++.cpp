#include<stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Number without lastdigit=%d\n",n%10);
	return 0;
}