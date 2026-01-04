#include<stdio.h>
int main ()
{
    int a , b ;
    printf("Enter two Number :");
    scanf("%d %d", &a , &b);

    if (a != b){
        if(a > b){
            printf("%d is maximum" , a);
        }
        else{
            printf("%d is Maximum" , b);
        }
        
    }
    else{
        printf("Both Number are equal");
    }
    return 0 ;
}