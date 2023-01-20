#include<stdio.h>
int main()
{
    int a,b, dur;
    scanf("%d%d", &a, &b); //24 hr formate.

    if(a==b){
        //Time is same. That means duration will be 24 hr.

        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else if (a<b){
        //This is normal situation. Here duration can be calculated by substraction.
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }

    else if (a>b){
        //This case we can convert ending time.

        printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
    }


    return 0;
}
