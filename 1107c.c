#include<stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d",&n);

    for(int i = 0; i< n ; i++)
        scanf("%d", &arr[i]);


    printf("enter to insert:");
    int x, xIndex;
    scanf("%d%d", &x, &xIndex);



    for(int i = n; i > xIndex; i--)
    {
        arr[i] = arr[i-1];


    }
    arr[xIndex] = x;//Inserting.
    n++;
    for(int i = 0; i< n ; i++)
        printf("%d ", arr[i]);

    return 0;
}
