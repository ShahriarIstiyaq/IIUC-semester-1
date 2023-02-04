#include<stdio.h>
int main()
{
    int i=1, a, b, sum = 0;
    scanf("%d%d", &a, &b);

    if(a>b){
        int t = a;
        a = b;
        b = t;
    }
    
    a++; //we have to take number from a to b . Not a and b.
    
    while(a<b){
        if(a % 2 != 0){
            sum += a;
        }

        a++;
    }

    printf("%d\n", sum);

    return 0;
}