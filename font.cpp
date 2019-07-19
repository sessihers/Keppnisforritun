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
  int n;
  cin >> n;
  int a[n];
  memset(a, 0, sizeof(a));
  char stafir[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  string curr;
  for(int i = 0; i < n; i++)
  {
    cin >> curr;
    for(int j = 0; j < curr.length(); j++)
    {
      for(int t = 0; t < 26; t++)
      {
        if(curr.at(j) == stafir[t])
        {
          a[i] |= (1 << t);
        }
      }
    }
  }
  int div = (1<<26) - 1 ;
  int sk = 0;
  int sum = 0;
  int c = 0;
  int am[1 << n];
  int k = 0;
  for (int subset = 0; subset < (1 << n); subset++)
  {
      for(int i  = 0; i < k; i++)
      {
        if((subset & am[i]) == am[i])
        {
          sk++;
          i = sk;
          c++;
        }
      }
      if(c == 0)
      {
        for (int i = 0; i < n; i++)
        {
            if ((subset & (1 << i)) != 0)
            {
              sum |= a[i];
            }
        }
        if(sum == div)
        {
          am[k] = subset;
          sk++;
          k++;
        }
        sum = 0;
      }
      c = 0;
  }
  cout << sk << '\n';
}
