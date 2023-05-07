#include<stdio.h>

void deletItem(int a[100], int num)
{
     int inx;
    //Index to delet
    printf("Index:");
    scanf("%d",  &inx);

    for(int i = inx; i < num; i++)
    {
        a[i] = a[i+1];
    }

    // You have decrease the n by 1 manually;
}


int main()
{
    int n, arr[100];

    scanf("%d",&n);

    for(int i = 0; i< n ; i++)
        scanf("%d", &arr[i]);

    deletItem(arr, n);
    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        return 0;
}
