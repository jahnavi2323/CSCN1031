// program to reverse a +ve integer number

#include <stdio.h>

int main() {
   int a,b,sum=0;
   printf("enter any number to be reversed: ");
   scanf("%d",&a);
   
   
   while(a>=1){
       b=a%10;
       a=a/10;
       sum=sum*10+b;
   }
   
   a=sum;
   printf("\n\nafter reversing: %d",a);

   
   return 0;
}
