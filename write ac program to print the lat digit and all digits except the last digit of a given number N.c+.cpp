#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("last digit= %d\n",n%10);
	printf("Expect last digit= %d\n",n/10);
	return 0;
}
