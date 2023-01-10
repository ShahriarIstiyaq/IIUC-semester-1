#include<stdio.h>
int main()
{
   int d, y, m, day;
   scanf("%d",&d);
   y = d/365;
   d = d%365;
   m= d/30;
   d = d%30;
   day = d;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,day);

   return 0;
}
