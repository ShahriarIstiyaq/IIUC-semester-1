#include <stdio.h>

int main()
{
    int n, m, x, y, cnt = 0, num, sum = 0;
    int a[110][110], b[110][110];

    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    scanf("%d%d", &x, &y);

    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            scanf("%d", &b[i][j]);

    scanf("%d", &num);

    for (int i = 1; i <= n; i++) // First array row
    {
        for (int j = 1; j <= m; j++) // first array col
        {

            for (int k = 1; k <= x; k++)     // 2nd array row
                for (int l = 1; l <= y; l++) // 2nd array col.
                {
                    sum = a[i][j] + b[k][l];
                    if (sum == num)
                        cnt++;
                }
        }
    }
    printf("%d ways", cnt);
    return 0;
}