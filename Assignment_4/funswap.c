#include<stdio.h>
int swapo(int a,int b){
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after returning a= %d & b= %d\n",a,b);
}
int swap(int a,int b){
  int temp =a;
  a = b;
  b = temp;
  printf("after returning a= %d & b= %d\n",a,b);
}
int main()
{
  int a,b;
  printf("please entr a and b \n");
  scanf("%d %d",&a ,&b);
  printf("before returning a= %d & b= %d\n",a,b);
  swap(a,b);
}