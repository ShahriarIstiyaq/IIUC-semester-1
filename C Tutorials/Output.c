#include<stdio.h>

int main()
{
    /*For printing integer we use"%d".
    For printing real number or float number we have to use"%f".
    For printing Charecter we have to use "%c". */

    int age = 20;
    float hight = 5.8;
    char star = 'I';

    printf("The charecter is %c.\t My hight is %f.\t My age is %d\n",star ,hight , age);

    printf("My name is %c \n",star);
    printf("My age is %d .\n" , age);
    printf("And my hight is %f \n", hight);

    printf("welcome to \n");
    printf("byta\tcomputer\teducation\rBYTA");
    printf("\a");


    return 0;
}