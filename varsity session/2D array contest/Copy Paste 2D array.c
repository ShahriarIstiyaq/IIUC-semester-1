#include <stdio.h>

int main()
{
    int n, m, a[110][110], b[110][110];
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
        }

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            b[i][j] = a[j][i];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}