#include<stdio.h>
int main()
{
    int i = 1, j = 60;
    while (1)
    {
        printf("I=%d J=%d\n", i, j);
        j = j - 5;
        i = i + 3; 

        if(j<0){
            break;
        }
    }
    
    return 0;
}