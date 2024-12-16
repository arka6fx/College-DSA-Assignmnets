#include <stdio.h>
#define N 50
int main()
{
    int arr[N], brr[N], n, i, j, c;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                    arr[j] = -1;
                }
            }
        }
        brr[i] = c; // stores frequency
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            printf("no of %d is %d\n", arr[i], brr[i]);
        }
    }
    printf("\nDuplicate elements: \n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1 && brr[i] > 1)
        {
            printf("%d->%d\n", arr[i], brr[i]);
        }
    }
    printf("Unique elements: \n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1 && brr[i] == 1)
        {
            printf("%d->%d\n", arr[i], brr[i]);
        }
    }
    return 0;
}