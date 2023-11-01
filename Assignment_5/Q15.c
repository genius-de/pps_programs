#include <stdio.h>
void deci_bin(int a);
void deci_octa(int a);
void deci_hexa(int a);
int main(void) {
printf("Enter decimal number to convert it to binary,hexa and octadecimal: ");
int number;
scanf("%i",&number);
printf("Binary: ");
deci_bin(number);
printf("\nOctadecimal: ");
deci_octa(number);
printf("\nHexadecimal: ");
deci_hexa(number);
}
void deci_bin(int a)
{
int n = 0;
int arr[32];
while(a >0)
{
n++;
arr[n-1]=a%2;
a = a/2;
}
for(int i = n-1 ; i >= 0; i--)
{
printf("%i",arr[i]);
}
}
void deci_octa(int a)
{
int n = 0;
int arr[32];
while(a >0)
{
n++;
arr[n-1]=a%8;
a = a/8;
}
for(int i = n-1 ; i >= 0; i--)
{
printf("%i",arr[i]);
}
}
void deci_hexa(int a)
{
int n = 0;
int arr[32];
while(a >0)
{
n++;
arr[n-1]=a%16;
a = a/16;
}
for(int i = n-1 ; i >= 0; i--)
{
if(arr[i] >=10)
printf("%c", (char)(arr[i]+55));
else
printf("%i",arr[i]);
}
}