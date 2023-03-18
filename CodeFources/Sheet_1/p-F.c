#include<stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld%lld", &n, &m);
    
    n = n %10;
    m = m % 10;

    long long int sum = n + m;
    printf("%lld\n", sum);

    return 0;
}