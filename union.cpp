#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;


int p[1000000];
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
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    p[i] = i;
  }
  int q;
  cin >> q;
  for(int i = 0; i < q; i++)
  {
    char s;
    int a, b;
    cin >> s >> a >> b;
    if(s == '=')
    {
      join(a, b);
    }
    else
    {
      int fora = find(a);
      int forb = find(b);
      if(fora == forb)
      {
        printf("yes\n");
      }
      else
      {
        printf("no\n");
      }
    }
  }
}
