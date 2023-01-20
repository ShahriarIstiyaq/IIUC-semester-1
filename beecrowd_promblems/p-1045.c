#include<stdio.h>
int main()
{
    ///The code must me written in a format so that the stay in this order A>B>C;

    double a,b,c, d, e;
    scanf("%lf%lf%lf", &a, &b, &c);

    ///If given numbers dont maintain the order, than there could be 3 cases.

    //suppose a=5 b =7. HERE WE WILL USE SWAP CODE.

    if(a<b){
        a = a+b; // a = 5+7=12
        b = a-b; // b = 12-7 = 5
        a = a-b; //a = 12-5 = 7

        // NOW A IS THE BIGGER NUMBER.
        //We will do this for other 2 cases.
     }

     if(a<c){
        a = a+c;
        c = a-c;
        a = a-c;
     }

     if(b<c){
        b = b+c;
        c = b-c;
        b = b-c;
     }

     ///Now all of the numbers are in order, A>B>C.

     d = pow(a,2);
     e = pow(b,2) + pow(c,2);

     if (a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
     }



     else{
        if (d==e){
                printf("TRIANGULO RETANGULO\n");
     }

        if (d>e){
                printf("TRIANGULO OBTUSANGULO\n");
     }

        if (d<e){
                printf("TRIANGULO ACUTANGULO\n");
     }

        if (a==b && b==c && a ==c){
                printf("TRIANGULO EQUILATERO\n");
     }

        else if(a==b || b==c || c==a){
                printf("TRIANGULO ISOSCELES\n");
     }
}

    return 0;
}
