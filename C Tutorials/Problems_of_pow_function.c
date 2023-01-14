#include<stdio.h>
#include<math.h>
int main()
{
    ///*The problem is, (x-1)^1/1! + (x-1)^3/3! + (x-1)^5/5!

    int x ;
    double a, b, c, ans;
    scanf("%d", &x);
    a = (pow((x-1),1))/1;
    b = (pow((x-1),3))/6;
    c = (pow((x-1),5))/120;

    ans = a+b+c;
    printf("%lf\n", ans);

    return 0;
}
