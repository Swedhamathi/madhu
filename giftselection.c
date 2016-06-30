#include<stdio.h>
int main()
{
  int a,b,c,d,x,t1,t2,t3,t4,max=0;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
  t1=a+b+c;
  t2=a+b+d;
  t3=a+c+d;
  t4=b+c+d;
  if(t1<t2&&t1<t3&&t1<t4)
  {
    printf("%d\n",t1);
  }
  else if(t2<t3&&t2<t4)
  {
    printf("%d\n",t2);
  }
  else if(t3<t4)
  {
    printf("%d\n",t3);
  }
  else
  {
      printf("%d\n",t4);
  }

if((max<t1)&&(t1<=x))
{
  max=t1;
}
  if((max<t2)&&(t2<=x))
     {
       max=t2;
     }
     if((max<t3)&&(t3<=x))
     {
       max=t3;
     }
  if((max<t4)&&(t4<=x))
  {
    max=t4;
  }
  printf("%d",max);
  return 0;
}
