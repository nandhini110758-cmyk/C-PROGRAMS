#include<stdio.h>
int main(){
	int a;
	int b;
	printf("Enter the A value:");
	scanf("%d",&a);
	printf("Enter the B value:");
	scanf("%d",&b);
	if(a<b)
	printf("%d is smaller",a);
	else
	printf("%d is smaller",b);
	return 0;
}