#include<stdio.h>
int main( )
{
  int x,y,s;
  int x1,y1;
  int x2,y2;
  scanf("%d%d%d",&x,&y,&s);
  x1=x-(s/2);
  x2=x+(s/2);
  y1=y-(s/2);
  y2=y+(s/2);
  printf("%d,%d\n",x2,y2);
  printf("%d,%d\n",x2,y1);
  printf("%d,%d\n",x1,y1);
  printf("%d,%d\n",x1,y2);
  return 0;
}
