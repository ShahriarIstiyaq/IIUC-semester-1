#include<stdio.h>
int main()
{
    
int i = 1, a, count = 0;

while (i <= 5)
{
    scanf("%d", &a);

    if(a % 2 == 0){
        count++;
    }
    i++;
}

printf("%d valores pares\n", count);

return 0;
}