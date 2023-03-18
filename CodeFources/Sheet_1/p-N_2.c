#include <stdio.h>
#include <ctype.h>

int main()
{
    system("cls");

    char ch, c;
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        printf("%c\n", tolower(ch));
    }

    else if ('a' <= ch && ch <= 'z')
    {
        printf("%c\n", toupper(ch));
    }

    return 0;
}