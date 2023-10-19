#include<stdio.h>
int fib(int,int,int);
int main()
{
int a=0;
int b=1;
int up;
printf("Please enter a upper bund for fibbnonaci series ");scanf("%d",&up);
printf("0");
fib(a,b,up);

}
int fib(int x ,int y, int up)
{ printf(",%d",y);
int a= x+y;
if(a< up)
fib(y,a,up);
}