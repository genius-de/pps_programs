#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements in the array: ");
scanf("%i", &n);
int arr[n];
printf("Enter the elements of the array:\n");
for (int i = 0; i < n; i++) {
scanf("%i", &arr[i]);
}
int largest = arr[0];
int smallest = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
if (arr[i] < smallest) {
smallest = arr[i];
}
}
printf("Largest element: %i\n", largest);
printf("Smallest element: %i\n", smallest);
}
 