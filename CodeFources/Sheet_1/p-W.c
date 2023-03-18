#include <stdio.h>

int main()
{
    long long int a, b, c, op;
    char s, q;
    scanf("%lld %c %lld %c %lld", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        op = a + b;
        if (op == c)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%lld\n", op);
        }
    }

    else if (s == '-')
    {
        op = a - b;
        if (op == c)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%lld\n", op);
        }
    }

    else if (s == '*')
    {
        op = a * b;
        if (op == c)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%lld\n", op);
        }
    }

    return 0;
}