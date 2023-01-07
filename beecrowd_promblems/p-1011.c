#include<stdio.h>
#include<math.h>
int main()
{
    //formula -> volume = (4/3)* pi* r^3.
    double r, pi,volume;
    scanf("%lf", &r);
    pi = 3.14159;
    volume = (4.0/3.0)* pi* pow(r,3);
    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}
