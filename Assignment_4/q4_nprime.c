#include<stdio.h>
int checkprime(int n)
{
    for(int i =1 ; i<n;i++)
    {int c=0;
         for(int j=2;j<n;j++)
         {
          if(i%j==0)
          {
          break;
          }
          else
          c++ ;
         }
            if(c!=0)
            printf("%d \n",i);
    }
}
int main()
{
    
    checkprime(10);
}