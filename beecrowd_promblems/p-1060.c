//Varsity loop topic -> [counting numbers]
#include<stdio.h>
int main()
{
    int n = 6, i = 1, count = 0;
    double x;

    while(i<=n){
        scanf("%lf", &x);

        if(x>0){
            count++;
        }
        i++;
    }

    printf("%d valores positivos\n", count);
    return 0;
}
