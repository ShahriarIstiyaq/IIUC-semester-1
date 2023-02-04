#include<stdio.h>
int main()
{
    int i =1;
    int count = 0;
    double a, avg, sum = 0;
    while (i<=6)
    {
        scanf("%lf", &a);
       

        if(a > 0){
            count++;
             sum += a;
        }
        i++;
    }
    
    avg = sum/count;
    printf("%d valores positivos\n", count);
    printf("%0.1lf\n", avg);

    return 0;
}