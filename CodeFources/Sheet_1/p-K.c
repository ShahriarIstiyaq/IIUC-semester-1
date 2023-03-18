#include <stdio.h>

int main()
{
    int a,b,c, max = 0, min = 0;
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        max = a;
    }

    else if(b>=a && b>=c)
    {
        max = b;
    }

    else if(c>=a && c>=b)
    {
        max = c;
    }

    if(a<=b && a<=c)
    {
        min = a;
    }

    if(b<=a && b<=c)
    {
        min = b;
    }

    if(c<=a && c<=b)
    {
        min = c;
    }

    printf("%d %d\n", min , max);

    return 0;
}