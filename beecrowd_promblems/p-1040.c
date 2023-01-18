#include<stdio.h>
int main()
{
    double n1, n2, n3, n4; ///Weights are 2,3,4,1
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

    double avg, exsc;
    avg = (n1*2+n2*3+n3*4+n4*1)/10.0;
    printf("Media: %0.1lf\n", avg);

    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }




    else if (avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");

        scanf("%lf", &exsc);
        printf("Nota do exame: %.1lf\n", exsc);

                if((avg+exsc)/2.0>=5.0){
                    printf("Aluno aprovado.\n");
                }

                else if((avg+exsc)/2.0<=4.9){
                    printf("Aluno reprovado\n");
                }

                printf("Media final: %0.1lf\n",(avg+exsc)/2.0);

    }


    else if (avg<5.0){
        printf("Aluno reprovado.\n");
    }



    return 0;

}
