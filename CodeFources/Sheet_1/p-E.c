#include<stdio.h>

int main()
{
    double r, pi;
    pi = 3.141592653;

    scanf("%lf", &r);

    double area = pi * (r*r);
    printf("%0.9lf\n", area);

    return 0;
}