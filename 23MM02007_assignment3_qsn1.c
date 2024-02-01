#include <stdio.h>
int main()
{
  int i;
  printf("Ener the Integer value :");
  scanf("%d",&i);

  if(i>0)
  {
    printf("%d is a positive integer",i);
  }

  else if(i==0) 
  {
     printf("The entered number is 0");
  }

  else
  {
    printf("%d is a negative integer",i);
    }

  return 0;
}