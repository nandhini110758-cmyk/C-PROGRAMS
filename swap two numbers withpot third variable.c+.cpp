#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before sapping: a= %d,b= %d\n",a,b);
	a=a+b;
	a=a-b;
	a=a-b;
	printf("After swapping: a= %d,b= %d\n",a,b);
	return 0;
}
