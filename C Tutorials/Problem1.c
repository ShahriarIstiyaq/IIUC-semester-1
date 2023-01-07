#include<stdio.h>
#include<math.h>
int main()
{
    //Write a program to check if a number is divisible by 2?'
    int x;
    printf("please enter a number :");
    scanf("%d", &x);
    printf("%d\n", x % 2 == 0);
    //If 1 is printed then its true , if 0 is printed the answer is false.
    
    //Write a program to check a number is odd or even.
    
    int a;
    printf("please enter a number :");
    scanf("%d", &a);
    printf("%d\n", a % 2 == 0);
    //even->1
    //odd->0
    
    return 0;
}