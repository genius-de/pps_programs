#include<stdio.h>
int lcm(int a,int b)
{ int lcm=1;
    for(int i=1; i<=a+b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            lcm=lcm*i;
        }

    } 
    lcm=lcm*a*b;
    return lcm;
}
int main(void)
{
    int a,b;
    printf("enter the numbers \n");
    scanf("%d%d",&a,&b);
    printf("lcm of a %d and %d is =%d ",a,b, lcm(a,b));
}