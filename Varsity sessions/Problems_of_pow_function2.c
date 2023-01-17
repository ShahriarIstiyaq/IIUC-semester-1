#include<stdio.h>
int main()
{
     ///*The problem is, (x-1)^1/1! + (x-1)^3/3! + (x-1)^5/5!. We have to solve it without using POW FUNCTION.
    int x;
    double a,b,c,ans;
    scanf("%d", &x);
    a = (x-1)/1.0;
    /*If we use a = (x-1)/1, the compiler will it as an integer value. Because, int op int = int!!!
    Thats why we have to use TYPE CASTING here. Else the programme won't produce the wanted result. */
    b = ((x-1)*(x-1)*(x-1))/6.0;
    c = ((x-1)*(x-1)*(x-1)*(x-1)*(x-1))/120.0;

    ans = a+b+c;
    printf("%lf\n", ans);

    return 0;
}
///In the  earlier programme we used POW function, which return type is double. Thats why we didn't had to use TYPE CASTING there.
