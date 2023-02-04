//TOPIC - Reverse loop. The programme will print backwords from a number.

#include<stdio.h>
int main()
{
    int i = 1, n;
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", n);

        n--;
    }
    
    return 0;
}