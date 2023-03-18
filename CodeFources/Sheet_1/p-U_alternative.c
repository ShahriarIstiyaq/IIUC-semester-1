#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    scanf("%f", &x);

    int a = x;
    float point = x - a;

    if(point==0)
    {
        printf("int %d\n", a);
    }

    else
    {
        printf("float %d %0.3f", a, point);
    }

    return 0;
}