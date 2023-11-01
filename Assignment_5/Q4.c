#include <stdio.h>
int main(void) {
int arr[] = {13, 25, 17, 29, 30, 10, 16, 27, 22, 14, 18, 28, 11, 12, 15};
int size = sizeof(arr)/sizeof(arr[0]);
printf("Enter number between 10 - 30 to check whether it is present or not: ");
int number;
scanf("%i", &number);
for ( int i = 0 ; i < size ; i ++)
{
if ( arr[i] == number)
{printf("Number found at position %i", i + 1);
return 0;}
}
printf("Number not found.");
}
