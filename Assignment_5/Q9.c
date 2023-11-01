#include <stdio.h>
int enter_arr(int arr[], int n);
void print_arr(int arr[], int n);
// int intersection(int arr1[], int arr2[]m int size);
int main(void) {
printf("Enter sizes of arrays: ");
int n1, n2;
scanf("%i%i", &n1, &n2);
int arr1[n1], arr2[n2], size = n1 + n2;
printf("Enter 1st Array:\n");
enter_arr(arr1, n1);
printf("The 1st array: ");
print_arr(arr1, n1);
printf("\n\n");
printf("Enter 2nd Array:\n");
enter_arr(arr2, n2);
printf("The 2nd array: ");
print_arr(arr2, n2);
int union_array[size], intersection[n1 > n2 ? n1 : n2], merged_arr[size],temp;
// union steps: 1)merge both arrays,2) sort,3) remove duplicates
// 1) merging the arrays
for (int i = 0; i < size; i++) {
if (i < n1)
merged_arr[i] = arr1[i];
else
merged_arr[i] = arr2[i - n1];
}
// 2) sort
for (int i = 0; i < size; i++) {
for (int j = 0; j < size - i; j++) {
if (merged_arr[j] < merged_arr[j - 1]) {
temp = merged_arr[j];
merged_arr[j] = merged_arr[j - 1];
merged_arr[j - 1] = temp;
}
}
}
// remove duplicates
int k = 0;
for (int i = 1; i < size; i++) {
if (merged_arr[i] != merged_arr[k]) {
k++;
merged_arr[k] = merged_arr[i];
}
}
printf("\n\nUnion: ");
print_arr(merged_arr, k + 1);
// intersection :1) iterate through one, check if element present, if yes...
int count = 0;
for (int i = 0; i < n1; i++) {
for (int j = 0; j < n2; j++) {
if (arr1[i] == arr2[j]) {
intersection[count] = arr1[i];
count++;
break;
}
}
}
printf("\n\nIntersection array: ");
print_arr(intersection, count);
}
int enter_arr(int arr[], int n) {
for (int i = 0; i < n; i++)
scanf("%i", &arr[i]);
return arr[n];
}
void print_arr(int arr[], int n) {
for (int i = 0; i < n; i++)
printf("%i ", arr[i]);
}
