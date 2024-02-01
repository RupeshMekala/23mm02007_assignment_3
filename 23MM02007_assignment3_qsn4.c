#include <stdio.h>
int main()
{
 int x1,y1,x2,y2,x3,y3;

printf("Enter your 1st coordinate:");
scanf("%d%d",&x1,&y1);
printf("Enter your 2nd coordinate:");
scanf("%d%d",&x2,&y2);
printf("Enter your 3rd coordinate:");
scanf("%d%d",&x3,&y3);
  if ((y3-y1)*(x2-x1)==(y2-y1)*(x3-x1))
 {
  printf("Three points are on a straight line");
 }

 else
 {
  printf("Three points are not on a straight line");
 }


  return 0;
}