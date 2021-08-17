#include <stdio.h>
#include <math.h>

int main()
{
  int n, i;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    long long a,t;
    double tax = 0;
    scanf("%lld", &a);
    if (a <= 180000)
    {
      printf("Case %d: 0\n", i);
      continue;
    }
    else if (a <= 480000)
    {
      tax = ((a - 180000) * 10.0) / 100;
    }
    else if (a <= 880000)
    {
      tax = 30000 + ((a - 480000) * 15.0) / 100;
    }
    else if (a <= 1180000)
    {
      tax = 30000 + 60000 + ((a - 880000) * 20.0) / 100;
    }
    else if (a > 1180000)
    {
      tax = 150000 + ((a - 1180000) * 25.0) / 100;
    }
    
    if(tax<2000) 
    {
      printf("Case %d: 2000\n",i);
    }
    else{
      t = tax;
      if(tax>t) t = t+1;
      printf("Case %d: %lld\n",i,t);
    }
    
  }

  return 0;
}
