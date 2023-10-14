#include<stdio.h>
int prime(int n)
{    
    int c=0;
    for(int i=2 ;i< n;i++)
    {
        if(n%i==0)
    c++;
        
    }
           if(c==0)
           printf("prime");
           else
           printf("not prime");
}
int main(void)
{ int n;
    printf("enter the number \n");scanf("%d",&n);
    prime(n);
}