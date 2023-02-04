#include<stdio.h>
int main()
{
    int i , n, high=0, count;

    for(i = 1; i <= 100 ; i++){

        scanf("%d", &n);

        if (n>high)
        {
            high = n;

            count = i;
        }
    }

    printf("%d\n%d\n", high, count);

    return 0;
}