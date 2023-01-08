#include<stdio.h>
int main()
{
    //avg_consumption = distance/total used fule.
    double x,y;
    scanf("%lf %lf", &x, &y);
    printf("%0.3lf km/l\n", x/y);

    return 0;
}
