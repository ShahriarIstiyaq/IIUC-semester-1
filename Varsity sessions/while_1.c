//TOPIC- Printing even numbers from 1 to 100.

#include<stdio.h>
int main()
{
    int i = 1;

//EVEN NUMBERS.    
    while (i <= 100)
    {
        if(i % 2 == 0){
            printf("%d\t", i);
        }
        i++;
    }

printf("\n\n");
i =1;

//ODD NUMBERS.
    while (i <= 100)
    {
        if(i % 2 != 0){
            printf("%d\t", i);
        }
        i++;
    }

    return 0;
    
}