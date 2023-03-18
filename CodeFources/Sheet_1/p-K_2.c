#include <stdio.h>

int main()
{
    system("cls");

    int a, b, c, max, min;
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c && b >= c)
    {
        max = a;
        min = c;
    }

    else if (a >= b && a >= c && c >= b)
    {
        max = a;
        min = b;
    }

    else if (b >= a && b >= c && a >= c)
    {
        max = b;
        min = c;
    }

    else if (b >= a && b >= c && c >= a)
    {
        max = b;
        min = a;
    }

    else if (c >= a && c >= b && a >= b)
    {
        max = c;
        min = b;
    }

    else if (c >= a && c >= b && b >= a)
    {
        max = c;
        min = a;
    }
    printf("%d %d", min, max);

    return 0;
}