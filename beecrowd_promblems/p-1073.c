#include<stdio.h>
int main()
{
    int i = 2, n , x;
    scanf("%d", &n);

    while(i <= n){
        x = i*i;
        printf("%d^2 = %d\n", i , x);

        i+=2;
    } 

    return 0;
}