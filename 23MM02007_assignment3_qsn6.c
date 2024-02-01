#include <stdio.h>

int main()
{
  int n,sq,n1,n2;
  printf("Enter number :");
  scanf("%d",&n);
  sq=n*n;
  int tag=0;
  for (int i=10;;i*=10)
  {
    n1=sq/i;
    n2=sq%i;
    if (n1>0)
    {
       if (n2!=0)
       {
         int sum=n1+n2;
         if(n==sum)
         {
           tag=1;
          }
          else 
              continue;
       }
       else 
            continue;

    }
    else 
        break;

  }

  if (tag!=0)
  {
    printf("It is a Kaprekar Number");
  }
         
  else {
    printf("It is not a Kaprekarnumber");
  } 
   return 0;
}    
           
       
    
  






   

   

 