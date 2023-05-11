#include <stdio.h>

int main()
{
    int n, m, x, y;
    int a[110][110], b[110][110], f = 0;

    // 1st array.
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    // 2nd array.
    scanf("%d%d", &x, &y);

    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            scanf("%d", &b[i][j]);

    int end;

    for (int i = 1; i <= n; i++)
    {
        end = m;
        for (int j = 1; j <= m; j++)
        {

            if (a[i][j] != b[i][end])
            {
                f = 1;
                break;
            }

            end--;
        }
    }
    if (f == 1)
        printf("No");

    else
        printf("Yes");

    return 0;
}