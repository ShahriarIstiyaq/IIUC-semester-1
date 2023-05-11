#include <stdio.h>

int main()
{
    int n, a[110][110], b[110][110], f = 0;
    scanf("%d", &n);

    // A.
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }

    // A (transpose)
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            b[i][j] = a[j][i];

            if (b[i][j] != a[i][j])
            {
                f = 1;
                break;
            }
        }

    if (f == 1)
        printf("NO");

    else
        printf("YES");

    /*for checking
    for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }

    printf("\n\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                printf("%d ", b[i][j]);
            printf("\n");
        } */
}