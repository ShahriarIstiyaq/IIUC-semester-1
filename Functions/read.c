#include <stdio.h>

void read()
{
    int a;
    char ch[100];
    FILE *fp;

    fp = fopen("fileName", "r");

    if (fp == 0)
    {
        printf("error");
        return;
    }

    fscanf(fp, "%d %s", &a, ch);
    // printf("%d %s", a, ch);

    fclose(fp);
}

int main()
{
    read();

    return 0;
}