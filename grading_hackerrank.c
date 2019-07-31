#include <stdio.h>

int main ()
{
  int ar[1000],orn[1000],an,on,i,s,t,a,o,sa=0,so=0;
  scanf("%d %d",&s,&t);
  scanf("%d %d",&a,&o);
  scanf("%d %d",&an,&on);

  for(i=0;i<an;i++)
  {
      scanf("%d",&ar[i]);
      ar[i]=a+ar[i];
      if(ar[i]>=s&&ar[i]<=t){
        sa++;
      }
  }
  for(i=0;i<on;i++)
  {
      scanf("%d",&orn[i]);
      orn[i]=o+orn[i];
      if(orn[i]>=s&&orn[i]<=t){
        so++;
      }
  }

  printf("%d\n%d",sa,so);



  return 0;
}
