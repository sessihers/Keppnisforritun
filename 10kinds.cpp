#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;

int p[1000*1000];
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
  int r, c;
  cin >> r >> c;
  char a[r][c];
  for(int i = 0; i < r*c; i++)
  {
    p[i] = i;
  }


  string l;
  getline(cin, l);
  for(int i = 0; i < r; i++)
  {
    getline(cin, l);
    for(int j = 0; j < c; j++)
    {
      a[i][j] = l.at(j);
    }
  }

  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
    {
      if(j - 1 >= 0 && a[i][j] == a[i][j-1])
      {
        join(i*c + j, i*c + j - 1);
      }
      if(i - 1 >= 0 && a[i][j] == a[i-1][j])
      {
        join(i*c + j, (i - 1)*c + j);
      }
      if(i + 1 < r && a[i][j] == a[i+1][j])
      {
        join(i*c + j, (i + 1)*c + j);
      }
      if(j + 1 < c && a[i][j] == a[i][j+1])
      {
        join(i*c + j, i*c + j + 1);
      }
    }
  }
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(find((x1-1)*c + y1-1) == find((x2-1)*c + y2-1))
    {
      if(a[x1-1][y1-1] == '1')
      {
        cout << "decimal" << endl;
      }
      else
      {
        cout << "binary" << endl;
      }
    }
    else
    {
      cout << "neither" << endl;
    }
  }
}
