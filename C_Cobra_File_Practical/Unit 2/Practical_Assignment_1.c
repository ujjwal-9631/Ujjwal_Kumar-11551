#include<stdio.h>
int main ()
{
    int a ;
    float b ;
    char c ; 
    double d ;

    printf("Enter an integer : ");
    scanf("%d", &a);
    printf("Enter a float value : ");
    scanf("%f", &b);
    printf("Enter a character : ");
    scanf(" %c", &c);
    printf("Enter a double value : ");
    scanf("%lf", &d);

    printf("You have entered :\n");
    printf("Integer : %d\n", a);
    printf("Float : %.2f\n", b);
    printf("Character : %c\n", c);
    printf("Double : %.2lf\n", d);

    int x , y , temp ; 
    printf("Enter two numbers to swap :");
    scanf("%d %d", &x , &y);

    temp = x ;
    x = y ;
    y = x ;

    printf("After swapping : X = %d , Y = %d\n", x , y );
    return 0 ;
}