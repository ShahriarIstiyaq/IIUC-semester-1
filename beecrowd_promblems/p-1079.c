#include<stdio.h>
int main()
{
    int i , n;
    double a, b, c, avg;
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);

        avg = (a*2 + b*3 + c*5)/10;

        printf("%0.1lf\n", avg);

    }
    
    return 0;
}