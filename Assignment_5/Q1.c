#include <stdio.h>
int main(void) {
printf("Enter size of array:");
int n,i,j,k;
scanf("%d",&n);
int arr[n], rev_arr[n];
printf("Enter elements of array:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
printf("%i ", arr[i]);
}
printf("\nReversed array: ");
for(i=0;i<n;i++)
{
rev_arr[i] = arr[n-1-i];
printf("%i ", rev_arr[i]);
}
}