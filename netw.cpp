#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

int p[200000];
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
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    p[i] = i;
  }
  int x, y;
  for(int i = 0; i < m; i++)
  {
    cin >> x >> y;
    join(x, y);
  }
  int c = 0;
  for(int i = 1; i <= n; i++)
  {
    if(find(p[i]) != find(p[1]))
    {
      printf("%d\n", i);
      c++;
    }
  }
  if(c == 0)
  {
    printf("connected\n");
  }
}
