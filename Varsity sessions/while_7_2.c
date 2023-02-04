//TOPIC- Taking inputs for n times using loop.(Sumation of the inputs)

#include<stdio.h>
int main()
{
    int i = 1, n, a, sum = 0;
    scanf("%d", &n);

    while(i <= n){
        scanf("%d", &a);
        sum += a;

        i++;
    }

    printf("%d\n", sum);

    return 0;
}