#include <stdio.h>
#define N 50
int main()
{
  int arr[N], i, n, pos, val;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the index  to insert the element: ");
  scanf("%d", &pos);

  for (i = n - 1; i >= pos; i--)
  {
    arr[i + 1] = arr[i];
  }
  printf("Enter the number  to insert: ");
  scanf("%d", &val);
  arr[pos] = val;
  n++;
  printf("Your array after insertion: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
