// Topic-2: To check if a character is capital, small or digit.

#include <stdio.h>

int main()
{
    system("cls");

    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }

    return 0;
}
