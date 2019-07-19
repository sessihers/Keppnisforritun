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
  int n,m;
  cin >> n >> m;
  int a[n][m];
  memset(a, 0, sizeof(a));
  for(int i = 0; i  < n; i++)
  {
    string l;
    getline(cin, l);
    for(int j = 0; j < m; j++)
    {
      if(l.at(j) == '-')
      {
        a[i][j] = 1;
      }
    }
  }
  int count = 0;
  for(int j = 0; j < m; j++)
  {
    int bol = 0;
    for(int i = 0; i < n; i++)
    {
      if(a[i][j] == 1) continue;
      bol = 1;
      i = n;
    }
    if(bol == 0) count++;
  }
  cout << count << endl;
}
