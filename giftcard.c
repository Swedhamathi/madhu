#include<stdio.h>
#include<stdlib.h>
int main()
{
  int r1,r2,r3;
  int disc1,disc2;
  scanf("%d",&r1);
  scanf("%d",&r2);
  scanf("%d",&r3);
  disc1=((r1+r2+r3)*20)/100;
  if(r1<r2&&r1<r3)
  {
    disc2=r1;
  }
  else if(r2<r3)
  {
    disc2=r2;
  }
  else
  {
    disc2=r3;
  }
  if(disc1<disc2)
  {
    printf("FREE ITEM\n");
  }
  else
  {
    printf("DISCOUNT\n");
  }
  return 0;
}
