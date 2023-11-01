#include <stdio.h>
int main(void) {
printf("Enter number of elements for array: ");
int number, sum = 0;
scanf("%i", &number);
int arr[number];
printf("Enter elements of array: ");
for(int i = 0 ; i < number; i++)
{
scanf("%i", &arr[i]);
sum += arr[i];
}
printf("\nSum of the given array = %i\nAverage of the elements of the given array= %i ", sum ,
sum/number);
}