#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;   // skip number 5
        }

        if (i == 8)
        {
            break;      // stop loop at 8
        }

        printf("%d ", i);
    }

    return 0;
}
