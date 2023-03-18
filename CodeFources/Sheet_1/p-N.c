#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if('A' <= ch && ch <= 'Z' )
    {
        printf("%c\n", ch+=32);
    }

    else if('a' <= ch && ch <= 'z')
    {
        printf("%c\n", ch-=32);
    }
    return 0;
}