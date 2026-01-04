#include <stdio.h>

void change(int x)
{
    x = 50;
}

int main()
{
    int a = 10;

    change(a);

    printf("Value of a = %d", a);

    return 0;
}
