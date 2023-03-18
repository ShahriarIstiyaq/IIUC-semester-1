#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    int f = floor((double)a/b);
    int c = ceil((double)a/b);
    int r = round((double)a/b);


    printf("floor %d / %d = %d\n", a, b, f);
    printf("ceil %d / %d = %d\n", a, b , c);
    printf("round %d / %d = %d\n", a, b, r);

    return 0;
}