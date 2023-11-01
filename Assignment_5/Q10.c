#include <stdio.h>
int enter_arr(int arr[], int n);
void print_arr(int arr[], int n);
int main(void) {
printf("Enter number of elements for array: ");
int n;
scanf("%i", &n);
int arr[n];
enter_arr(arr, n);
printf("\nThe array: ");
print_arr(arr,n);
//removing duplicates
for(int i = 0 ; i < n ; i ++)
{
for(int j = i + 1 ; j < n ; j++)
{
if(arr[j] == arr[i])
//removing element
for( int k = j ; k < n ; k++)
{
arr[j] = arr[j+1];
n--;
}
}
}
printf("\nThe array after removing duplicates:");
print_arr(arr,n);
}
int enter_arr(int arr[], int n) {
for (int i = 0; i < n; i++)
scanf("%i", &arr[i]);
return arr[n];
}
void print_arr(int arr[], int n) {
for (int i = 0; i < n; i++)
printf("%i ", arr[i]);
}