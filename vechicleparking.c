#include<stdio.h>
int main()
{
  int N1,N2,N3,N4,N;
  scanf("%d%d%d%d%d",&N1,&N2,&N3,&N4,&N);
  if(N<N1)
  {
    printf("\nB1");
  }
  else if(N<(N1+N2))
  {
    printf("\nB2");
  }
  else  if(N<(N1+N2+N3))
   {
     printf("\nB3");
   }
  else if(N<(N1+N2+N3+N4))
  {
    printf("\nB4");
  }
  else
  {
    printf("\nEXT");
  }
  return 0;
}
