#include<stdio.h>
int main()
{
  int n,a,b,c,d;
  scanf("%d",&n);
  if(n>=100&&n<=999)
  {
    a=n/100;
    b=n%10;
    c=n/10;
    d=c%10;
    if((a>d)&&(d>=b))
    {
      printf("yes");
    }
    else if((a<=d)&&(d<=b))
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
  }
  else
  {
    printf("no");
  }
  return 0;
}
