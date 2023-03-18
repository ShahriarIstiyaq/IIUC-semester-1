#include<stdio.h>
#include<math.h>

int main()
{
    int a,c;
    long long b, d;
    scanf("%d%lld%d%lld", &a,&b,&c,&d);
    
    if( (b * log(a) ) > (d * log(c)) )
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}