#include <stdio.h>
int main()
{
    //If its sunday and snowing then print true.
    int isSunday,isSnowing;
    printf("If its sunday enter 1 :");
    scanf("%d", &isSunday);
    printf("If its snowing enter 1 :");
    scanf("%d", &isSnowing);
    printf("%d\n", isSunday && isSnowing);

//If its monday or its raining print ture.
    int Monday,Raining;
    
    printf("If its monday enter 1 :");
    scanf("%d", &Monday);
    printf("If its raining enter 1 :");
    scanf("%d", &Raining);
    printf("%d\n", Monday || Raining);
    

//if a nummber is greater than 9 and less than 100 then print TRUE.

    int x;
    printf("Please Enter a number:");
    scanf("%d", &x);
    printf("%d\n" , (x>9) && (x<100));

    return 0;
}