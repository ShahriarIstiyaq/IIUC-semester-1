//Write a programme to check any number is missing from the list. List is [1,2,3]
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a != 3 && b != 3 && c != 3 ){
        printf("3\n");
    }

    if (a != 2 && b != 2 && c != 2 ){
        printf("2\n");
    }

    if(a != 1 && b != 1 && c != 1 ){
        printf("1\n");

    }
    
    return 0;
} 