#include<stdio.h>

int main()
{
    float a,b,sum;
    printf("Please enter a number = ");
    scanf("%f", &a);
    printf("Please enter another number=");
    scanf("%f", &b);
    sum= a+b;
    printf("The sum is %f\n Thank you.\n", sum);

    // WE can do the operations directly without creating any kind of extra veriables.

    printf("Now sum is %f", a + b );
    printf("The product multiplication is %f" , a*b);
    return 0;
}
