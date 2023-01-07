#include<stdio.h>
#include<math.h>
int main()
{
    //Q1:solve int a = 1.99999
    int x = (int) 1.99999;
    printf("%d\n", x);
    //This will print 1 as output.

/*now lets try out arithmetic instructions. 
Priority of oparetors- 1.(*,/,%), 2.(+,-), 3.(=).
when there are same priority oparetors in a problem we need to go for ASSOCIATIVE rule. */
int a,b,c,d;
a = 5 * 2 - 2 * 3;
b=5 * 2 / 2 * 3;
c=5 * (2/2) * 3;
d=5 + 2 / 2 * 3;
printf("%d\t, %d\t, %d\t, %d\n ",a,b,c,d );
    return 0;
}