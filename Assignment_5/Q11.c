#include <stdio.h>
int enter_matrix(int arr[3][3]);
void print_matrix(int arr[3][3]);
int main(void) {
int mat1[3][3], mat2[3][3],add[3][3];
printf("Addition of 3X3 matrix\nEnter values of 1st matrix: ");
enter_matrix(mat1);
print_matrix(mat1);
printf("\nEnter values of the 2nd matrix: ");
enter_matrix(mat2);
print_matrix(mat2);
//sum of matrices
for (int i = 0 ; i < 3 ; i++)
{
for ( int j = 0 ; j < 3 ; j++)
add[i][j] = mat1[i][j]+mat2[i][j];
}
printf("Added ");
print_matrix(add);
}
int enter_matrix(int arr[3][3])
{
for(int i = 0 ; i < 3 ; i++)
{
for(int j = 0 ; j < 3 ; j++)
{
printf("row %i, column %i => ", i + 1, j + 1);
scanf("%i", &arr[i][j]);
}
}
return arr[3][3];
}
void print_matrix(int arr[3][3])
{
printf("Matrix : \n");
for(int i = 0 ; i < 3 ; i++)
{
for(int j = 0 ; j < 3 ; j++)
printf("%i ",arr[i][j]);
printf("\n");
}
}
b)Multiply
#include <stdio.h>
int enter_matrix(int arr[3][3]);
void print_matrix(int arr[3][3]);
int main(void) {
int mat1[3][3], mat2[3][3], multiply[3][3] = {0};
printf("Multiplication of 3X3 matrix\nEnter values of 1st matrix: ");
enter_matrix(mat1);
print_matrix(mat1);
printf("\nEnter values of the 2nd matrix: ");
enter_matrix(mat2);
print_matrix(mat2);

for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
for (int k = 0; k < 3; k++)
multiply[i][j] += mat1[i][k] * mat2[k][j];
}
}
printf("Matrix 1 * Matrix 2: \n");
print_matrix(multiply);
}
int enter_matrix(int arr[3][3]) {
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
printf("row %i, column %i => ", i + 1, j + 1);
scanf("%i", &arr[i][j]);
}
}
return arr[3][3];
}
void print_matrix(int arr[3][3]) {
printf("Matrix : \n");
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++)
printf("%i ", arr[i][j]);
printf("\n");
}
}
c) Transpose
#include <stdio.h>
int enter_matrix(int arr[3][3]);
void print_matrix(int arr[3][3]);
int main(void) {
int mat1[3][3], mat2[3][3];
printf("Transpose of 3X3 matrix\nEnter values of 1st matrix: ");
enter_matrix(mat1);
print_matrix(mat1);
//transpose
for(int i = 0 ; i < 3 ; i++)
{
for(int j = 0 ; j < 3 ; j++)
{
mat2[i][j]=mat1[j][i];
}
}
printf("Transpose of Matrix is as follows: \n");
print_matrix(mat2);
}
int enter_matrix(int arr[3][3])
{
for(int i = 0 ; i < 3 ; i++)
{
for(int j = 0 ; j < 3 ; j++)
{
printf("row %i, column %i => ", i + 1, j + 1);
scanf("%i", &arr[i][j]);
}
}
return arr[3][3];
}
void print_matrix(int arr[3][3])
{
printf("Matrix : \n");
for(int i = 0 ; i < 3 ; i++)
{
for(int j = 0 ; j < 3 ; j++)
printf("%i ",arr[i][j]);
printf("\n");
}
}