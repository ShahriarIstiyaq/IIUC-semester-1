#include<stdio.h>

int main()
{
    int a,b,c,d;
    int digit;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    
    digit = (a*b*c*d) % 100;

    if(digit < 10)
    {
        printf("0%d\n", digit);
    }

    else
    {
        printf("%d\n", digit);
    }

    return 0;
}