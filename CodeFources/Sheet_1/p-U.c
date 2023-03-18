#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    scanf("%f", &x);

    float point = fmod(x,(int)x);

    if(point==0)
    {
        printf("int %d\n", (int)x);
    }

    else
    {
        printf("float %d %0.3f",(int)x, point);
    }

    return 0;
}