#include<stdio.h>
int main()
{
    double a,b,c,P,A;
    scanf("%lf%lf%lf", &a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){

        P = a+b+c;
        printf("Perimetro = %0.1lf\n",P);
    }

    else{
        A = 0.5*(a+b)*c;
        printf("Area = %0.1lf\n", A);
    }

    return 0;
}
