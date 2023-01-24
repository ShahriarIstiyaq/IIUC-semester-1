#include<stdio.h>
int main()
{
    double salary , bonus;
    int increase;

    scanf("%lf", &salary);

    if(0 < salary && salary <= 400){
        bonus = salary * 0.15;
        salary = bonus + salary;
        increase = 15;
    }

    else if (400 < salary && salary<= 800){
        bonus = salary * 0.12;
        salary = bonus + salary;
        increase = 12;
    }

    else if (800 < salary && salary <= 1200)
    {
        bonus = salary * 0.1;
        salary = bonus + salary;
        increase = 10;
    }

    else if (1200 < salary && salary <= 2000){
        bonus = salary * .07;
        salary = bonus + salary;
        increase = 7;
    }

    else if (salary > 2000 ){
        bonus = salary * 0.04;
        salary = bonus + salary;
        increase = 4;
    }

    printf("Novo salario: %0.2lf\n", salary); //NEW SALARY.
    printf("Reajuste ganho: %0.2lf\n", bonus); // BONUS MONEY.
    printf("Em percentual: %d %%\n", increase); // BONUS PERCENTAGE.

    return 0;
    
}