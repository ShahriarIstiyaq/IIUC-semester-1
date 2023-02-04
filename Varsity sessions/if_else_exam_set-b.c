#include<stdio.h>
int main()
{
    // write a programme to check which order the the inputs are in.
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a<=b && b<=c){

        printf("ACS\n");
    }

    else if(a>=b &&  b>=c){
        printf("DES\n");
    }

    else{
        printf("No\n");
    }

    return 0;

}