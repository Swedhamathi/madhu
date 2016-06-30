#include<stdio.h>
#include<math.h>
int main( )
{
  int x1,y1,x2,y2,x3,y3;
  float AB,BC,AC;
  printf("\nx-coordinate of vertex A");
  scanf("%d",&x1);
  printf("\ny-coordinate of vertex A");
  scanf("%d",&y1);
  printf("\nx-coordinate of vertex B");
  scanf("%d",&x2);
  printf("\ny-coordinate of vertex B");
  scanf("%d",&y2);
  printf("\nx-coordinate of vertex C");
  scanf("%d",&x3);
  printf("\ny-coordinate of vertex C");
  scanf("%d",&y3);
  AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  BC=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  AC=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  printf("\nLength of side AB is %.1f",AB);
  printf("\nLength of side BC is %.1f",BC);
  printf("\nLength of side AC is %.1f",AC);
  return 0;
}
