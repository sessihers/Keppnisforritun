#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, m = 0, i = 0, x = 0, y = 0;
  int sum = 0;
  cin >> n;
  cin >> m;
  //cin >> i;
  short a[n][m];
  for(int q = 0; q < n; q++)
  {
    for(int r = 0; r < m; r++)
    {
  for(int t = 0; t < n; t++)
  {
    for(int j = 0; j < m; j++)
    {
      a[t][j] = 1;
    }
  }
  //for(int t = 0; t < i; t++)
  //{
    x = q;
    y = r;
    //x--;
    //y--;
    //lina
    for(int j = 0; j < m; j++)
    {
      a[x][j] = 0;
    }
    //dalkur
    for(int j = 0; j < n; j++)
    {
      a[j][y] = 0;
    }
    //hornalina
    for(int j = 0; j < min(x + 1, y + 1); j++)
    {
      a[x-j][y-j] = 0;
    }
    for(int j = 0; j < min(x + 1, m-y); j++)
    {
      a[x-j][y+j] = 0;
    }
    for(int j = 0; j < min(n-x, y + 1); j++)
    {
      a[x+j][y-j] = 0;
    }
    for(int j = 0; j < min(n-x, m-y); j++)
    {
      a[x+j][y+j] = 0;
    }
  //}
  for(int t = 0; t < n; t++)
  {
    for(int j = 0; j < m; j++)
    {
      sum += a[t][j];
      //cout << a[t][j] << " ";
    }
    //cout << endl;
  }
  cout << sum << " ";
  sum = 0;
}
cout << endl;
}
}
