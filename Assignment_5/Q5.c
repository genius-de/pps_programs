#include <stdio.h>
int main(void) {
int arr[] = {10, 11, 12, 13, 14, 15, 17, 18, 22, 25, 27, 28, 29, 30, 32 , 35 , 38 , 40, 45};
printf("Enter number to search in the array ( using binary search ): ");
int number;
scanf("%i", &number);
int left = 0, right = sizeof(arr)/sizeof(arr[0]) - 1 , flag = 0;
while(flag == 0)
{
int mid = ( left + right )/2;
if ( number == arr[mid])
{
printf("%i found at the %i position", number , mid +1 );
return 0;
}
else if (number > arr[mid])
left = mid + 1;
else if (number < arr[mid])
right = mid - 1;
}
}