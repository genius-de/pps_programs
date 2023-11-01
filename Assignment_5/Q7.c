#include <stdio.h>
int enter_arr(int arr[], int n);
void print_arr(int arr[], int n);
int main(void) {
printf("Enter the sizes of arrays to merge: ");
int n1,n2;
scanf("%i%i", &n1, &n2);
int arr1[n1], arr2[n2], merged_arr[n1+n2];
printf("Enter 1st array: ");
enter_arr(arr1, n1);
printf("\n1st Array : ");
print_arr(arr1, n1);
printf("\nEnter 2nd array: ");
enter_arr(arr2, n2);
printf("\n2nd Array : ");
print_arr(arr2, n2);
for(int i = 0; i < n1 + n2 ; i++ )
{
if (i < n1)
merged_arr[i] = arr1[i];
else
merged_arr[i] = arr2[i - n1];
}
printf("The merged Array : \n");
print_arr(merged_arr, n1+n2);
}
int enter_arr(int arr[], int n)
{
for( int i = 0 ; i < n ; i ++)
scanf("%i", &arr[i]);
return arr[n] ;
}
void print_arr(int arr[], int n)
{
for( int i = 0 ; i < n ; i ++)
printf("%i ", arr[i]);
}
 