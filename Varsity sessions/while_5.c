//TOPIC- Product of 1 t0 n numbers or Fectorial.

#include<stdio.h>
int main()
{
    int i = 1, s = 1, n;

    scanf("%d", &n);

    while (i <= n)
    {
        s = s * i;

        i++;
    }
    
    printf("%d\n", s);

    return 0;
}