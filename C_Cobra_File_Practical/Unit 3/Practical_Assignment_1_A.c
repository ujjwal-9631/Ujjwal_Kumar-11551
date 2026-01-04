#include<stdio.h>
int main()
{
    int a , b , max ;
    printf("Enter two integers :");
    scanf("%d %d" , &a , &b);
    printf("sum : %d\n" , a + b);
    max = (a > b) ? a : b ;
    printf("The maximum value is : %d\n" , max);
    return 0;
}