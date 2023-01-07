#include<stdio.h>
int main()
{
    int pro_1, unit_1, pro_2, unit_2;
    double price_1, price_2, total;
    scanf("%d %d %lf", &pro_1, &unit_1, &price_1);
    scanf("%d %d %lf", &pro_2, &unit_2, &price_2);
    total = unit_1*price_1 + unit_2*price_2;
    printf("VALOR A PAGAR: R$ %0.2lf\n", total);

    return 0;
}
