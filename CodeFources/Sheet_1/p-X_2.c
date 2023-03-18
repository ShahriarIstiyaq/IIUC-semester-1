#include<stdio.h>

int main()
{
    int l1,l2,r1,r2;
    int start, end;
    scanf("%d%d%d%d", &l1, &r1, &l2, &r2);

    //starting point will be the maximum between l1 and l2.
    if(l1 >= l2)
    {
        start = l1;
    }
    else
    {
        start = l2;
    }

    //Ending intersection will be the the minimum between r1 and r2.
    if(r1 <= r2)
    {
        end = r1;
    }
    else
    {
        end = r2;
    }


    //there will be no intersection point if the starting point is greater than ending point.
    if (start > end)
    {
        printf("-1\n");
    }
    
    else 
    {
        printf("%d %d\n", start, end);
    }

    return 0;
}