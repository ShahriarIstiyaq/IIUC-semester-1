#include<stdio.h>
int main()
{
    //area of circle A = pi*r*r
    double A, pi, r;
    pi=3.14159;
    scanf("%lf", &r);
    A = pi * r * r;
    printf("A=%0.4lf\n", A);

    return 0;

}
