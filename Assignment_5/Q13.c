#include <stdio.h>
#include <string.h>
void print_arr(char arr[], int n);
int main(void) {
char arr[100];
printf("Enter array to rotate and print: ");
scanf("%s", arr);
int n = strlen(arr);
print_arr(arr, n);
printf(" to be rotated\n");
// Rotate the array
char rotated[n][n];
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
rotated[i][j] = arr[(i + j) % n]; // bring back if exceeds n
}
}
// Print the rotated array
printf("Rotated array: ");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
printf("%c", rotated[i][j]);
}
printf(", ");
}
return 0;
}
void print_arr(char arr[], int n) {
for (int i = 0; i < n; i++) {
printf("%c", arr[i]);
}
}