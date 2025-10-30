#include<stdio.h>
int main(){
	float l,b,s,base,h,r;
	scanf("%f %f",&l,&b);
	printf("area of rectangle = %.2f\n",l*b);
	scanf("%f",&s);
	printf("area of square = %.2f\n",s*s);
	scanf("%f %f",&base,&h);
	printf("area of traingle = %.2f\n",0.5*base*h);
	scanf("%f",&r);
	printf("area of circle = %.2f\n",r*r);
	return 0;
}
