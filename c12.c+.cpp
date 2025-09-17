#include<stdio.h>
int main(){
    int number;
    int lastDigit;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    lastDigit = number % 10;
    if (lastDigit % 2 == 0) 
        printf("%d is even\n", lastDigit);
        printf(" %d is odd\n", lastDigit);
    return 0;
}