#include<stdio.h>

int main()
{
    int n, year, month, day, t;
    scanf("%d", &n);
    
    year = n /365;
    n = n % 365;

    month = n/30;
    n = n % 30;

    day = n;

    printf("%d years\n%d months\n%d days\n", year,month,day);

    return 0;
}