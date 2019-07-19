#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

void leika(int a[8][8], int x, int y, int val)
{
  if(x < 0 || y < 0 || x >= 8 || y >= 8) return;
  cout << val << endl;
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  int s = 0;
  if(s == 0) return;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n >> ws;
  for(int i = 0; i < n; i++)
  {
    int a[8][8];
    memset(a, 0, sizeof(a));
    string l;
    getline(cin, l);
    char c = l.at(0);
    int cval = int(c) % 97;
    char s = l.at(1);
    int sval = int(s) % 49;
    int x = cval;
    int y = sval;
    a[cval][sval] = 0;
    int s = 0;
    while(s == 0)
    {
      if(x + 2 < 8 && y + 1 < 8 && (val < a[x + 2][y + 1] - 1 || a[x + 2][y + 1] == 0))
      {
        s++;
        val++;
        a[x+2][y+1] = val;
      }
      if(x + 2 < 8 && y - 1 >= 0 && (val < a[x + 2][y - 1] - 1 || a[x + 2][y - 1] == 0))
      {
        s++;
        val++;
        a[x+2][y-1] = val;
        leika(a, x + 2, y - 1, val);
      }
      if(x - 2 >= 0 && y + 1 < 8 && (val < a[x - 2][y + 1] - 1 || a[x - 2][y + 1] == 0))
      {
        s++;
        val++;
        a[x-2][y+1] = val;
        leika(a, x - 2, y + 1, val);
      }
      if(x - 2 >= 0 && y - 1 >= 0 && (val < a[x - 2][y - 1] - 1 || a[x - 2][y - 1] == 0))
      {
        s++;
        val++;
        a[x-2][y-1] = val;
        leika(a, x - 2, y - 1, val);
      }
      if(x + 1 < 8 && y + 2 < 8 && (val < a[x + 1][y + 2] - 1 || a[x + 1][y + 2] == 0))
      {
        s++;
        val++;
        a[x+1][y+2] = val;
        leika(a, x + 1, y + 2, val);
      }
      if(x - 1 >= 0 && y + 2 < 8 && (val < a[x - 1][y + 2] - 1 || a[x - 1][y + 2] == 0))
      {
        s++;
        val++;
        a[x-1][y+2] = val;
        leika(a, x - 1, y + 2, val);
      }
      if(x + 1 < 8 && y - 2 >= 0 && (val < a[x + 1][y - 2] - 1 || a[x + 1][y - 2] == 0))
      {
        s++;
        val++;
        a[x+1][y-2] = val;
        leika(a, x + 1, y - 2, val);
      }
      if(x - 1 >= 0 && y - 2 >= 0 && (val < a[x - 1][y - 2] - 1 || a[x - 1][y - 2] == 0))
      {
        s++;
        val++;
        a[x-1][y-2] = val;
        leika(a, x - 1, y - 2, val);
      }
    }
    leika(a, cval, sval, 0);
    for(int i = 0; i < 8; i++)
    {
      for(int j = 0; j < 8; j++)
      {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
  }
}
