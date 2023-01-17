#include<stdio.h>
int main()
{
    /*Conditions:
    ->  B>C
    ->  D>A
    ->  C+D > A+B
    ->  C&D ARE POSITIVE.
    ->  A IS EVEN */
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(b>c&& d>a && (c+d)>(a+b) && c>0 && d>0 && a%2==0)
    {
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceito\n");
    }

    return 0;
}
