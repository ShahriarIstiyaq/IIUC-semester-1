#include<stdio.h>
int main()
{
    int i = 1, n;
    scanf("%d", &n);

    while (i<=10000)
    {
        if (i % n == 2)
        {
            printf("%d\n", i);
        }
        
        i++;
    }

    return 0;
    
}