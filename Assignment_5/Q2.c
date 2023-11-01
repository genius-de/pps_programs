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
printf("\nEnter number you want to insert followed by the position you want to enter it to: ");
scanf( "%d%d", &x, &posn);
n++;
for ( int i = n - 1; i >= posn; i-- )
arr[i] = arr[i-1];
arr[posn-1] = x;
printf("Array: ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
}