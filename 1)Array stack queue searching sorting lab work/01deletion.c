#include <stdio.h>
#define N 50
int main(){
  int arr[N], i, n, pos, val;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the index to delete an element: ");
  scanf("%d", &pos);
  for (i = pos; i <= n - 2; i++)
  {
    arr[i] = arr[i + 1];
  }
  n--;
  printf("Your array after deletion: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0 ;
}
