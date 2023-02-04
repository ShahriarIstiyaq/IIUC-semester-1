#include <stdio.h>

int main()
{
    int i=0, n;
    scanf("%d", &n);
    
    while(i < 6){
        if(n%2!=0){
            printf("%d\n", n);
            i++;
        }   
        n++;
     }   
   
    return 0;
}