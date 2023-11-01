#include <stdio.h>
int enter_arr(int arr[], int n);
void print_arr(int arr[], int n);
int main(void) {
printf("Enter number of elements for arr: ");
int n, sum = 0, mean , mode , median,temp ;
scanf("%i", &n);
int arr[n];
printf("Enter values of the arr: \n");
enter_arr(arr, n);
//sorting and taking sum all together
// sum = arr[0];
for(int i=0;i<n;i++)
{
for ( int j = 0 ; j < n - i ; j++)
{ if ( arr [j] < arr[j-1])
{ temp = arr[j];
arr[j] = arr[j-1];
arr[j-1] = temp;
}
}
sum += arr[i];
}
print_arr(arr, n);
mean = sum / n;
if (n%2==0)
{
median = (arr[n/2]+arr[(n/2)+1]) / 2 ;
}
else
median = arr[(n+1)/2];
// mode = 3*median - 2 * mean ;
mode = arr[0];
int maxCount = 1;
for (int i = 0; i < n; i++) {
int count = 1;
for (int j = i + 1; j < n; j++) {
if (arr[i] == arr[j]) {
count++;
}
}
if (count > maxCount) {
maxCount = count;
mode = arr[i];
}
}
printf("\nMean = %i\nMode = %i\nMedian= %i", mean, mode, median);
}
int enter_arr(int arr[], int n)
{
for (int i = 0; i < n; i++)
scanf("%i", &arr[i]);
return arr[n];
}
void print_arr(int arr[], int n) {
for (int i = 0; i < n; i++)
printf("%i ", arr[i]);
}