#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 0;
  while(t == 0)
  {
    int n, m;
    cin >> n >> m;
    if(n == 0 && m == 0)
    {
      t++;
    }
    else
    {
      int d[n];
      int k[m];
      for(int i = 0; i < n; i++)
      {
        cin >> d[i];
      }
      for(int i = 0; i < m; i++)
      {
        cin >> k[i];
      }
      sort(d, d+n);
      sort(k, k+m);
      int cost = 0, count = 0;
      for(int i = 0; i < m; i++)
      {
        int c = count;
        if(k[i] >= d[c])
        {
          cost += k[i];
          count++;
        }
        if(count >= n)
        {
          i = m;
        }
      }
      if(count >= n)
      {
        cout << cost << endl;
      }
      else
      {
        cout << "Loowater is doomed!" << endl;
      }
    }
  }
}
