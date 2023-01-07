#include<stdio.h>
int main()
{
    char name;
    double salary, bonus, total;
    scanf("%s %lf %lf", &name, &salary, &bonus);
    total = salary+bonus*.15;
    printf("TOTAL = R$ %0.2lf\n",total);

    return 0;
}
