#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  double n, m;
  int s = 0;
  while(s == 0)
  {
    cin >> n >> m;
    if(n == 0 && m == 0)
    {
      s++;
    }
    else
    {
      double min = 0;
      double minp = 0, minq = 0;
      for(int i = 0; i < n; i++)
      {
        double p, q;
        cin >> p >> q;
        double pr = q/p;
        if((pr < min || min == 0) && p <= m)
        {
          min = pr;
          minp = p;
          minq = q;
        }
        else if(pr == min && p > minp)
        {
          min = pr;
          minp = p;
          minq = q;
        }
      }
      if(minp == 0 && minq == 0)
      {
        printf("No suitable tickets offered\n");
      }
      else
      {
        printf("Buy %.0f tickets for $%.0f\n", minp, minq);
      }
    }
  }
}
