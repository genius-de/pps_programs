#include<stdio.h>
int fact(int);
int main(void)
{
    int a;
    printf("inter the num\n3");
    scanf("%d",&a);printf("factorial of %d is = %d ",a,fact(a));
}
int fact(int n)
{
    int sum = 1;
    for(int i=n;i>0;i--)
    {
        sum*=i;
    }
    return sum;
}