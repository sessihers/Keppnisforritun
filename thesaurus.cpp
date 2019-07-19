#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
#include <map>
using namespace std;


map<string, string>a;
map<string, int>s;
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
  //cout << "x: " << a[find(x)] << " " << s[find(x)] << endl;
  //cout << "y: " << a[find(y)] << " " << s[find(y)] << endl;
  if(s[find(x)] <= s[find(y)])
  {
    s[find(y)] = s[find(x)];
    a[find(y)] = find(x);
  }
  else if(s[find(y)] < s[find(x)])
  {
    s[find(x)] = s[find(y)];
    a[find(x)] = find(y);
  }
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int N, M;
  cin >> N >> M;
  map<string, int>fj;
  string st[N];
  int nr = 0, total = 0;
  a.clear();
  s.clear();
  fj.clear();
  for(int i = 0; i < N; i++)
  {
    string c;
    cin >> c;
    if(a.find(c) == a.end())
    {
      a[c] = c;
      s[c] = c.length();
      fj[c]++;
      st[nr] = c;
      nr++;
    }
    else
    {
      fj[c]++;
    }
  }
  for(int i = 0; i < M; i++)
  {
    string d, b;
    cin >> d >> b;
    if(a.find(b) == a.end())
    {
      a[b] = b;
      s[b] = b.length();
    }
    if(a.find(d) == a.end())
    {
      a[d] = d;
      s[d] = d.length();
    }
    join(d, b);
  }
  for(int i = 0; i < nr; i++)
  {
    string curr = st[i];
    //cout << curr << " " << fj[curr] << " " << s[a[find(curr)]] << endl;
    total += fj[curr]*s[a[find(curr)]];
  }
  cout << total  << endl;
}
