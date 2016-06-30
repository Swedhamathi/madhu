#include<stdio.h>
#include<math.h>
int main( )
{
  float l,w,h,b,t;
  printf("\nEnter the length");
  scanf("%f",&l);
  printf("\nEnter the width");
  scanf("%f",&w);
  printf("\nEnter the height");
  scanf("%f",&h);
  b=sqrt((l*l)+(w*w));
  t=h+b;
  printf("\nThe Shortest distance is %.2f",t);
  return 0;
}
