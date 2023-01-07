#include <stdio.h>
int main()
{
    float side;
    printf("Please enter the side of your square:");
    scanf("%f", &side);

    printf("The area of the square is %f", side*side);
    return 0;
    
}