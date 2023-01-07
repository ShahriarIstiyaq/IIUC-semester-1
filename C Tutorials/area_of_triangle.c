#include <stdio.h>
int main()
{
    //lets try it for area of triangle.
    float base, hight;

    printf("Please enter the base of the triangle:");
    scanf("%f", &base);
    printf("Please enter the hight of the triangle:");
    scanf("%f",&hight);
    printf("The area of the triangle is %0.2f\n", (base*hight)/2);

//Write a program to calculate perimeter of rectangle.Take sides, a & b, from the user.

    printf("The peramiter of the triangle is : %0.3f\n", 2*(base+hight));

    
    return 0;
 
}