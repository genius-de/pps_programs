#include <stdio.h>
int main(void) {
int i,j,n, posn, x;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements of array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array: ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\nEnter position you want to delete ");
scanf("%i", &posn);
for(i = posn-1 ; i < n ; i++)
arr[i] = arr[i+1];
printf("Array: ");
for(int i=0;i<n-1;i++)
printf("%d ",arr[i]);
}