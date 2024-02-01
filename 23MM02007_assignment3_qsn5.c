#include <stdio.h>
int main()

{
  int n;
  printf("How late are you submiting the book? :");
  scanf("%d",&n);
  
  if (n>=1&&n<=5)
  {
    printf("You have to pay a fine of 1 rupee");
  }
  
  else if(n>=6&&n<=10)
  {
    printf("You have to pay a fine of 2 rupees");
  }

  else if(n>10&&n<=30)
  {
    printf("You have to pay a fine of 5 rupees");
  }

  else if(n>30)
  {
    printf("Sorry, your membership is cancelled!");
  }
  return 0;
}