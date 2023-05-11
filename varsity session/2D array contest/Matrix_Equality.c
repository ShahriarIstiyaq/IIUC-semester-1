#include <stdio.h>

int main()
{
    int T, n, m, x, y, f = 0, mat1, mat2;
    int a[110][110], b[110][110];

    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        f = 0;
        // First array.
        scanf("%d%d", &n, &m);
        mat1 = n * m; // Size
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%d", &a[i][j]);

        // Second array.
        scanf("%d%d", &x, &y);
        mat2 = x * y; // Size.
        for (int i = 1; i <= x; i++)
            for (int j = 1; j <= y; j++)
                scanf("%d", &b[i][j]);

        // Check.
        if (mat1 != mat2)
            printf("NO\n");
        else
        {
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= m; j++)
                    if (a[i][j] != b[i][j])
                        f = 1;

            if (f == 1)
                printf("NO\n");

            else
                printf("YES\n");
        }
    }

    return 0;
}