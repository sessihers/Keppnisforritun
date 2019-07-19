#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;


int p[1000000];
int fj[1000000];

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
  if(find(y) != find(x))
  {
    fj[find(y)] += fj[find(x)];
  }
  p[find(x)] = find(y);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, q;
  cin >> n >> q;
  for (int i = 0; i <= n; i++)
  {
    p[i] = i;
    fj[i] = 1;
  }
  for(int i = 0; i < q; i++)
  {
    char c;
    int a, b;
    cin >> c;
    if(c == 't')
    {
      cin >> a >> b;
      join(a, b);
    }
    else
    {
      cin >> a;
      cout << fj[find(a)] << endl;
    }
  }
}
