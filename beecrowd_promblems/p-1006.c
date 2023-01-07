#include<stdio.h>
int main()
{
    //Formula = (a*2+b*3+c*5)/10
    double a, b, c, avg;
    scanf("%lf%lf%lf", &a, &b, &c);
    avg = (a*2+b*3+c*5)/10;
    printf("MEDIA = %0.1lf\n", avg);

    return 0;
}
