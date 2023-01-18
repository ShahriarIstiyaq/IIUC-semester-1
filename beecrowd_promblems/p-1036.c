#include<stdio.h>
#include<math.h>
int main()
{
    double a, b , c, r1, r2, D;
    scanf("%lf%lf%lf", &a, &b, &c);

    D = (b*b)- 4*a*c;///Discriminent

    r1 =(-b + sqrt(D)) / (2*a);
    r2 =(-b - sqrt(D)) / (2*a);

    if(D<0|| a == 0){
        printf("Impossivel calcular\n");
    }
    else {

        printf("R1 = %0.5lf\n", r1);
        printf("R2 = %0.5lf\n", r2);

    }

    return 0;
}
