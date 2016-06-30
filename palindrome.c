#include<stdio.h>
#include<stdlib.h>
int main()
{
  int b,u,h;
  scanf("%d",&b);
  if(b>99 && b<1000)
  {
    u=b%10;
    h=b/100;
    if(u==h)
    {
      printf("yes\n");
    }
    else
    {
      printf("no\n");
    }
  }
  else
  {
    printf("no\n");
  }
  return 0;
}
