#include<stdio.h>
int main()
{
    int i=1, n, x, in=0, out=0;
    scanf("%d", &n);

    while (i<=n)
    {
        scanf("%d", &x);
        if(10<=x && x<=20){
            in++;
        
        }
        else{
            out++;
        }
        i++;
    }

    printf("%d in\n",in);
    printf("%d out\n", out);

    
    return 0;
}