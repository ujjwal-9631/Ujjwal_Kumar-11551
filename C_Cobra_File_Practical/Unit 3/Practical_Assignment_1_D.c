#include<stdio.h>
int main()
{
    float a , b;
    char op ;
    printf("Enter First Number :");
    scanf("%d", &a);

    printf("Enter Second Number :");
    scanf("%d", &b);

    printf("Enter operator (+ , - , * , /): ");
    scanf(" %c" , &op);

    switch(op) {
        case '+':
        printf("Result = %.2f", a + b);
        break ;
        case '-':
        printf("Result = %.2f" , a - b);
        break ;
        case '*':
        printf("Result = %.2f" , a * b);
        break ;
        case '/' :
        if (b != 0){
            printf("Result = %.2f" , a / b);
            break ;
        }
        else{
            printf("Error != Division by Zero") ;
        }
        default :
        printf("Invalid Operator");
    }
    return 0 ;
}