#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, v = 0, c = 0, m = 0, b = 0;
  cin >> n;
  int a [n][n];
  memset(a, 0,n*n);
  int tv[n];
  int total = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> v;
    cin >> c;
    cin >> m;
    a[i][0] = v - c;
    a[i][1] = m;
    for(int j = 0; j < m; j++)
    {
      cin >> b;
      a[i][j+2] = b;
    }
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < a[i][1]; j++)
    {
      tv[i] += a[a[i][j+2]-1][0];
    }
    tv[i] += a[i][0];
    total += tv[i];
    cout << tv[i] << endl;
  }
  cout << total << endl;
}
