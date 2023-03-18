#include<stdio.h>

int main()
{
    long long int x, y; //The max range is 10^5. If both input are given at their max range the multiplication output will exit the range of 'int' , thats why we have to use 'long long int.'
    scanf("%lld%lld", &x, &y);

    printf("%lld + %lld = %lld\n", x, y, x+y);
    printf("%lld * %lld = %lld\n", x, y, x*y);
    printf("%lld - %lld = %lld\n", x, y, x-y);

    return 0;
}