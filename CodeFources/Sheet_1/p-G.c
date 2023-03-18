#include<stdio.h>

int main()
{
    long long int n, sum;
    scanf("%lld", &n);

    sum = (n*(n+1))/2; //The formula for summation of N.

    printf("%lld\n", sum);

    return 0;
}