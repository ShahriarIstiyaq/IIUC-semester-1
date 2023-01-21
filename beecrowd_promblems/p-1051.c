#include<stdio.h>
int main()
{
    double salary, tax , count;
    scanf("%lf", &salary);

    if (0<= salary && salary <= 2000.00){

        printf("Isento\n"); //No Tax.
    }

    else{
        
        //Here each salary range is 1000$.
        if (2000.01<=salary && salary <= 3000.00){
            tax = salary - 2000;
            count = tax * 0.08;     //Here tax is 8% .
    }

        if (3000.01<= salary && salary <= 4500){

            // Here salary range is 1500$.
            tax = salary - 3000;
            count = (tax*0.18) + 80;    /*Here tax is 18%. But we substacted 3000$ and added 80$ with tax count.
                                       because for first 2000$ there is no tax . But on next 1000$ there is 8% tax, which 80$ for 1000$*/
    }
        if(salary > 4500){
            tax = salary - 4500;
            count = (tax * 0.28)+80+ 270; // For first 1000$ , 80$ tax and for next 1500$ , 18% or 270$ tax.

        }

        printf("R$ %.2lf\n", count);

    }


    return 0;
}
