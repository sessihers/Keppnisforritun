#include <algorithm>
#include <deque>
#include <istream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
// sama unionfind og síðast
struct union_find
{
  vi p;
  union_find(int n) : p(n, -1) { }
  int find(int x)
  {
    return p[x] < 0 ? x : p[x] = find(p[x]);
  }
  bool united(int x, int y)
  {
    return find(x) == find(y);
  }
  void unite(int x, int y)
  {
    int xp = find(x), yp = find(y);
    if (xp == yp) return;
    if (p[xp] > p[yp]) swap(xp,yp);
    p[xp] += p[yp], p[yp] = xp;
    return;
  }
  int size(int x)
  {
    return -p[find(x)];
  }
};

int kruskal(vvii& g)
{
  priority_queue<iii> s;
  union_find uf(g.size());
  int res = 0;
  for(int i = 0; i < g.size(); i++)
  {
    vii x = g[i];
    for(int j = 0; j < x.size(); j++)
    {
      s.push(iii(-x[j].first, ii(x[j].second, i)));
    }
  }
  while(uf.size(0) < g.size())
  {
    iii x = s.top();
    s.pop();
    if(uf.united(x.second.first, x.second.second)) continue;
    res -= x.first;
    uf.unite(x.second.first, x.second.second);
  }
  return res;
}

int main()
{
  int T;
  cin >> T;
  for(int i = 0; i < T; i++)
  {
    int M, C;
    cin >> M >> C;
    int am = C*(C-1)/2;
    vvii g(C, vii());
    for(int j = 0; j < am; j++)
    {
      int x, y, d;
      cin >> x >> y >> d;
      g[x].push_back(make_pair(d, y));
      g[y].push_back(make_pair(d, x));

    }
    int res = kruskal(g);
    if(res + C <= M)
    {
      cout << "yes" << endl;
    }
    else
    {
      cout << "no" << endl;
    }
  }
}
