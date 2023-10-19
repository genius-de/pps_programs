#include<stdio.h>
int add(int n)
{
    int sum=0;
    for (int i = n; i!=0; i=i/10)
    {printf("sum = %d",sum);

        int a= n%10;
        sum+=a;
        n=n/10;
    }
    printf("sum = %d",sum);
}
    int main(void)
    {
        int a;
        printf("Enter the number");
        scanf("%d",&a);
        add(a);
    }
    
