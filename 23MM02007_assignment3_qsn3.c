#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the three values :");
  scanf("%d%d%d",&a,&b,&c);

  if (a+b>c&&b+c>a&&a+c>b)
  {
    printf("a,b,c are sides of a triangle");
  }
  else
  {
    printf("a,b,c are not the sides of a triangle");
  }
  return 0;
}