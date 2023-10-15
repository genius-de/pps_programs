#include<stdio.h> 
 int hcf(int x,int y); 
 void main() 
 { 
     int a,b,d; 
     
     printf("Enter 2 Numbers : "); 
     scanf("%d%d",&a,&b); 
     if(a>b) 
       { 
            d=hcf(a,b); 
       } 
     else 
      { 
            d= hcf(b,a); 
      } 
            printf("HCF is= %d",d); 
            
 } 
     int hcf(int x,int y) 
     { 
        int r=1; 
        while(r!=0) 
           { 
                r=x%y; 
                x=y; 
                y=r; 
           } 
                return(x); 
     }  