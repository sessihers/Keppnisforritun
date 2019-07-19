#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

int p[100000];
int find(int x)
{
  if (p[x] == x)
  {
    return x;
  }
  else
  {
    p[x] = find(p[x]); //keðjuþjöppunin á sér stað í þessar l ínu
    return p[x];
  }
}
void join(int x, int y)
{
  p[find(x)] = find(y);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int c = 1;
  int n, m;
  int b[n*m];
  for(int i = 0; i < n*m; i++)
  {
    b[i] = i;
  }
  while(cin >> n >> m >> ws)
  {
    string l;
    char a[n][m];
    for(int i = 0; i < n; i++)
    {
      getline(cin, l);
      for(int j = 0; j < m; j++)
      {
        a[i][j] = l.at(j);
      }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
      {
        if(a[j] == '-')
      }
    }
    printf("Case %d: %d\n",c, cnt);
    c++;
  }
}
