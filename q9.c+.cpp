#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the first num:");
	scanf("%d",&a);
	printf("Enter the second num:");
	scanf("%d",&b);
	int sum=(a+b);
	if (sum%2==0)
	printf("%d is even number\n",a);
	printf("%d is odd number\n",b);
	return 0;
}