/*A sparse matrix is a special case of a matrix in which the number of zero elements is much higher than the number of non-zero elements.
As a rule of thumb, if 2/3 of the total elements in a matrix are zeros, it can be called a sparse matrix.*/
#include <stdio.h>

int main()
{
    int test, n, m, cnt_zero = 0, cnt_num = 0;
    int a[110][110];

    scanf("%d", &test);

    for (int t = 1; t <= test; t++)
    {
        scanf("%d%d", &n, &m);

        cnt_zero = 0;
        cnt_num = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &a[i][j]);

                if (a[i][j] == 0)
                    cnt_zero++;

                else
                    cnt_num++;
            }

        if (cnt_zero > cnt_num)
            printf("YES\n");

        else
            printf("NO\n");
    }

    return 0;
}