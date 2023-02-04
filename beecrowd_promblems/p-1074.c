#include<stdio.h>
int main()
{
    int i = 1, n, x;
    scanf("%d", &n);

    while (i <= n)
    {
        scanf("%d", &x);

        if (x>0 && x % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }

        else if(x<0 && x % 2 == 0){
            printf("EVEN NEGATIVE\n");
        }

        else if(x>0 && x % 2 != 0){
            printf("ODD POSITIVE\n");
        }

        else if(x<0 && x % 2 != 0){
            printf("ODD NEGATIVE\n");
        }

        else if ( x == 0){
            printf("NULL\n");
        }
        
        i++;
    }

    return 0;
}