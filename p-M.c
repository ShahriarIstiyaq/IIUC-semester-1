// Replace MinMax.
#include <stdio.h>

int main()
{
    int n, a[100000], max, min;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];
    max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            int rp = a[i];
            a[i] = min;
            min = rp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            int rp = a[i];
            a[i] = max;
            max = rp;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}