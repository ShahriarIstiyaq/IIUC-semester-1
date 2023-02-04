//TOPIC- Taking inputs for n times using loop.(Checking the numbers are positive or else)

#include<stdio.h>
int main()
{
    int i =1, n, a;

    scanf("%d", &n);

    while(i <= n){
        scanf("%d", &a);

        if(a>0){
            printf("Positive\n");
        }

        else if(a<0){
            printf("Negative\n");
        }

        else if (a == 0){
            printf("ZERO\n");
        }

        i++;
    }

    return 0;
}