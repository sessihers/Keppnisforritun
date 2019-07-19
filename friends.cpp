#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
#include <map>
using namespace std;


map<string, string>a;
map<string, int>s ;
string find(string x)
{
  if (a[x].compare(x) == 0)
  {
    return x;
  }
  else
  {
    a[x] = find(a[x]);
    return a[x];
  }
}
void join(string x, string y)
{
  if(find(y).compare(find(x)) != 0)
  {
    s[find(y)] += s[find(x)];
  }
  a[find(x)] = find(y);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string b[200000];
  int t, n;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin >> n;
    string p, q;
    a.clear();
    s.clear();
    for(int i = 0; i < n; i++)
    {
      cin >> p >> q;
      if(a.find(p) == a.end())
      {
        a[p] = p;
        s[p] = 1;
      }
      if(a.find(q) == a.end())
      {
        a[q] = q;
        s[q] = 1;
      }
      join(p, q);
      cout << s[find(q)] << endl;
    }
  }
}
