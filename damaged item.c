#include<stdio.h>
int main()
{
  int a,b,id;
  scanf("%d%d%d",&a,&b,&id);
  if(id<b)
  {
    printf("yes");
  }
  else if((id%b==0)||(id%b==1))
  {
    printf("yes");
  }
  else if((id/b)==(a-1))
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
