#include <stdio.h>

int main()
{
    int test, n, m, a[110][110], sum_r = 0, sum_c = 0;
    scanf("%d", &test);

    for (int t = 1; t <= test; t++)
    {
        scanf("%d%d", &n, &m);

        // Array input.
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%d", &a[i][j]);

        // Sum of Rows.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                sum_r = sum_r + a[i][j];

            printf("row %d: %d\n", i, sum_r);
            sum_r = 0;
        }

        // Sum of columns.
        for (int j = 1; j <= m; j++)
        {
            for (int i = 1; i <= n; i++)
                sum_c = sum_c + a[i][j];

            printf("col %d: %d\n", j, sum_c);
            sum_c = 0;
        }

        printf("\n");
    }
}