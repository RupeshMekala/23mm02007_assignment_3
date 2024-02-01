#include <stdio.h>
int main()
{
  int T,M,N,W,K;
  
  printf("Enter the number of classes you attended :");
  scanf("%d\n",&N);
  printf("Enter the marks obtained :");
  scanf("%d\n",&M);
  printf("Total number of classes conducted :");
  scanf("%d\n",&K);
  W=N/K;
  T=M*W;

  
  if(N<=K&&N>0)
  {
    if(M>=0&&M<=100)
    {
     
      if (T>=90&&T<=100)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = Ex");
      }
      else if (T>=80&&T<90)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = A");
      }
      else if (T>=70&&T<80)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = B");
      }
      else if (T>=60&&T<70)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = C");
      }
      else if (T>=50&&T<60)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = D");
      }
      else if (T>=40&&T<=50)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = P");
      }
      else if (T>0&&T<40)
      {
        printf("Final Score= %d\n",T);
        printf("Grade is = F");
      }
      

      
    }
    else
    {
      printf("Invalid Marks entered");
    }


  }

  else
  {
    printf("Invalid Attendance Weight");
  }

  


return 0;
}