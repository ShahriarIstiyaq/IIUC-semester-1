#include <stdio.h>
int main()
{
    float radius;
    float pi;
    printf("Please enter radius:");
    scanf("%f",&radius);
    printf("Please enter the value of pi:");
    scanf("%f", &pi) ;
    printf("The radius is %0.2f", pi*radius*radius);
    //You can define how many number do you want after Decimal point by defining that atfer the percentage point. 
    return 0;
}