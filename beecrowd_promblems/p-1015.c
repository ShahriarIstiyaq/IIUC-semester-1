#include<stdio.h>
#include<math.h>
int main()
{
    /*distance between two points
       d = sqroot of ((x2-x1)^2 + (y2-y1)^2) */
    float x1,x2,y1,y2,d, a, b;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    a = pow((x2-x1),2);
    b = pow((y2-y1),2);
    d = sqrt(a + b);
    printf("%0.4f\n",d);

    return 0;
}
