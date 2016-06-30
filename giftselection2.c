#include<stdio.h>
#include<string.h>
int main()
{
  int r1,r2,r3;
  char a[4];
  scanf("%d%d%d",&r1,&r2,&r3);
        scanf("%s",a);
  if((strcmp(a,"G1"))==0)
  {
    if(r2<r3)
    {
      printf("G3");
    }
    else
    {
      printf("G2");
    }
  }
    else if((strcmp(a,"G2"))==0)
    {
      if(r1<r3)
      {
        printf("G3");
      }
      else
      {
        printf("G1");
      }
    }   
  else if((strcmp(a,"G3"))==0)
      {
        if(r1<r2)
        {
          printf("G2");
        }
        else
        {
          printf("G1");
        }
      }   
  else if((strcmp(a,"NONE")==0))
                {
                  if((r1>r2)&&(r1>r3))
                  {
                    printf("G1");
                  }
                  else if(r2>r3)
                  {
                    printf("G2");
                  }
                  else
                  {
                    printf("G3");
                  }
                }
                return 0;
                }
