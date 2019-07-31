#include <stdio.h>

int main ()
{
  int a[1000],i,n,divs;

  scanf("%d",&n);

  for (i = 0; i < n; i++)
  {
      scanf("%d",&a[i]);
  }


  for (i = 0; i < n; i++)
  {
      divs=a[i]/5;
      if(a[i]>=38&&a[i]%5>=3){
        a[i]=(divs+1)*5;
      }
      printf("%d\n",a[i]);
  }
  return 0;
}
