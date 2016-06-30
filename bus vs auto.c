#include<stdio.h>
int main()
{
  int X,Y;
  printf("\nEnter the cost of travel by luxury bus");
  scanf("%d",&X);
  printf("\nEnter the cost of travel by share auto");
  scanf("%d",&Y);
  if(X>Y)
  {
    printf("\nMinimal cost travel is by auto");
  }
  else
  {
    printf("\nMinimal cost travel is by bus");
  }
  return 0;
}
