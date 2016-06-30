#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,n1,n2,n3,a,b,c;
  scanf("%d",&n);
  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf("%d",&n3);
  a=abs(n-n1);
  b=abs(n-n2);
  c=abs(n-n3);
  if((a!=b)&&(a!=c)&&(b!=c))
  {
    if((a<b)&&(a<c))
 printf("%d",n1);
    else if(b<c)
      printf("%d",n2);  
else
        printf("%d",n3);
  }
  else if((n1==n)||(n2==n)||(n3==n))
    printf("%d",n);
    else
    {
      if(a==b)
      {
        if(n1>n)
          printf("%d",n1);
        else
          printf("%d",n2);
      }
      else if((a==c))
      {
        if(n1>n)
          printf("%d",n1);
        else
          printf("%d",n3);
      }
      else
      {
        if(n2>n)
          printf("%d",n2);
        else
          printf("%d",n3);
      }
    }
  return 0;
}
