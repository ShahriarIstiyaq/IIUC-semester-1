#include<stdio.h>
int main()
{
    int t,hr,min,s;
    scanf("%d", &t);
    hr = t/3600;
    t = t%3600;
    min = t/60;
    t = t % 60;
    s = t;
    printf("%d:%d:%d\n", hr, min, s);

    return 0;

}
