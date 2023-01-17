#include<stdio.h>
#include<math.h>
int main()
{

//Write a program to print the avarage of 3 numbers
int x , y , z;
printf("Enter first number:");
scanf("%d", &x);
printf("Enter second number:");
scanf("%d", &y);
printf("Enter a third number:");
scanf("%d", &z);
printf("The avarage of the numbers is %d",(x+y+z)/3);



//Write a program to print the smallest number of two.
int num1, num2;
printf("enter the nummbers : ");
scanf("%d %d", &num1, &num2);
if(num1 < num2 ){
    printf("The smallest number is %d\n", num1);
}
else{
    printf("The smallest number is %d\n", num2);
}

return 0;
}