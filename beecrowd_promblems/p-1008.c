#include<stdio.h>
int main()
{
   int num, hour;
   double salary, amount;
   scanf("%d%d%lf", &num, &hour, &amount);
   salary =  hour*amount;
   printf("NUMBER = %d\n", num);
   printf("SALARY = U$ %0.2lf\n", salary);

   return 0;
}
