#include <stdio.h>
int main(void)
{
int n,i,j, temp;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter array: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The array: ");
for(i=0;i<n;i++)
printf("%i ", arr[i]);
for(i=0;i<n;i++)
{
for ( j = 0 ; j < n - i ; j++)
{ if ( arr [j] < arr[j-1])
{ temp = arr[j];
arr[j] = arr[j-1];
arr[j-1] = temp;
}
}
}
printf("\nSorted array: ");
for(i=0;i<n;i++)
printf("%i ", arr[i]);
}
