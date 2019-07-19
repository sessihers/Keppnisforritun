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
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
pair<vi, int> dijkstra(vvii& g, int a, int b)
{
  vi dist(g.size(), INT_MAX);
  vi prv(g.size(), -1);
  priority_queue<ii> pq;
  dist[a] = 0;
  pq.push(ii(0, a));
  while(!pq.empty())
  {
    ii t = pq.top();
    pq.pop();
    if(-t.first != dist[t.second]) continue;
    vii x = g[t.second];
    for(int i = 0; i < g[t.second].size(); i++)
    {
      if(dist[t.second] + x[i].first < dist[x[i].second])
      {
        dist[x[i].second] = dist[t.second] + x[i].first;
        prv[x[i].second] = t.second;
        pq.push(ii(-dist[x[i].second], x[i].second));
      }
    }
}
if(prv[b] == -1) return make_pair(vi(), INT_MAX);
vi path(1, b);
while(path.back() != a) path.push_back(prv[path.back()]);
reverse(path.begin(), path.end());
return make_pair(path, dist[b]);
}

int main()
{
  int n, m, q, s;
  int bol = 0, c = 0;
  while(bol == 0)
  {
    cin >> n >> m >> q >> s;
    if(n == 0)
    {
      bol = 1;
    }
    else
    {
      if(c != 0)  cout << endl;
      vvii g(n, vii());
      for(int i=0;i<m;i++)
      {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back(make_pair(w, v));
      }
      for(int i = 0; i < q; i++)
      {
        int qu;
        cin >> qu;
        if(s == qu)
        {
          cout << "0" << endl;
          continue;
        }
        pair<vi, int> res = dijkstra(g, s, qu);
        if(res.second == INT_MAX)
        {
          cout << "impossible" << endl;
        }
        else
        {
          cout << res.second << endl;
        }
      }
      c++;
    }
  }
}
