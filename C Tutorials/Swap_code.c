#include<stdio.h>
int main()
{
    int a = 5, b = 3, t;
    t=a; //t=5
    a=b; //a=3
    b=t; //b=5
    printf("%d\t%d\n",a,b);

    return 0;
}
