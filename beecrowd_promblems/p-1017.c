#include<stdio.h>
int main()
{
   /* time = x hr, avg_speed= y km/hr.
   ->travel distance = (x*y) km.
   ->the car travels 12km with 1L fuel
   then (x*y) km will take = (x*y)/12 L fuel */
   double hour, avg_speed;
   scanf("%lf %lf", &hour, &avg_speed);
   printf("%0.3lf\n", (hour*avg_speed)/12);

   return 0;
}
