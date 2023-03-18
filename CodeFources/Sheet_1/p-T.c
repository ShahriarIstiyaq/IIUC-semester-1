#include<stdio.h>=
int main()
{
    long long int a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);

    if(a>=b && a>=c && b>=c){
        printf("%lld\n%lld\n%lld\n",c,b,a);
    }

    else if(a>=b && a>=c && c>=b){
        printf("%lld\n%lld\n%lld\n",b,c,a);
    }


    else if (b>=a && b>=c && a>=c){
        printf("%lld\n%lld\n%lld\n" ,c,a,b);
    }
    else if (b>=a && b>=c && c>=a){
        printf("%lld\n%lld\n%lld\n" ,a,c,b);
    }


    else if (c>=a && c>=b && b>=a){
        printf("%lld\n%lld\n%lld\n" ,a,b,c);
    }
    else if (c>=a && c>=b && a>=b){
        printf("%lld\n%lld\n%lld\n" ,b,a,c);
    }

    printf("\n%lld\n%lld\n%lld\n",a,b,c);


    return 0;
}
