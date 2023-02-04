//Topic - Print every digit of a number seperately.

#include<stdio.h>
int main()
{
    int  a, digit;

    scanf("%d", &a); // The number

    while (1)
    {
        digit = a % 10;
        a = a / 10;
        printf("%d\n", digit);

        if(a == 0){
            break;
        }
    }

    return 0;
    

}