#include<stdio.h>
int fibno(int a)
{
    printf("finno series with upper bound is:-\n");
    printf("0 1 ");
    int q=0,w=1;
    for(int i=0;i<=a;i++)
    {
        int s= q+w;
        if(s>a)
        break; 
        printf(" %d ",s);
        q=w;
        w=s;
    }
     printf("\n");
}
int main(void)
{
    fibno(100);
}