#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, c = 0, k = 0, t = 0, fj = 1, max = 0, sum = 0;
  cin >> n >> k;
  int proT [n];
  memset(proT, 0, sizeof(proT));
  cin >> proT[0];
  for(int i = 1; i < n; i++)
  {
    cin >> t;
    proT[i] = t;
    if((t - proT[c]) < 1000)
    {
      fj++;
    }
    else
    {
      if(fj > max)
      {
        max = fj;
      }
      for(int j = c; j <= i; j++)
      {
        if((proT[i] - proT[j]) < 1000)
        {
          c = j;
          fj = i - c + 1;
          j = i;
        }
      }
    }
  }
  if(fj > max)
  {
    max = fj;
  }
  if(max % k == 0)
  {
    sum = max/k;
  }
  else
  {
    sum = max/k + 1;
  }
  cout << sum << endl;
}
