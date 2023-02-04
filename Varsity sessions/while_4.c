//TOPIC- how many numbers are divisible by 3 and 5 from 1 t0 n numbers.

#include<stdio.h>
int main()
{
    int i = 1, count = 0, n;

    scanf("%d", &n);

    while (i <= n)
    {
        if(i % 3 == 0 || i % 5 == 0){
            count ++;
        }
        i++;
    }
    
    printf("%d\n", count);

// REVERSE COUNT.
    while (i <= n)
    {
        if(n % 3 == 0 || n % 5 == 0){
            count++;
        }
        n--;
    }
    
    printf("%d\n", count);

    return 0;
}