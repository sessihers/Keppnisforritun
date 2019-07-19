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
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

ll dijkstra(vvii& g, ll a, ll b)
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
if(prv[b] == -1) return INT_MAX;
vi path(1, b);
while(path.back() != a) path.push_back(prv[path.back()]);
reverse(path.begin(), path.end());
return dist[b];
}

int main()
{
  ll A, H, n, m;
  cin >> A >> H;
  cin >> n >> m;
  vvii g(n + 1, vii());
  for(int i = 0; i < m; i++)
  {
    ll u, v, a, h, w;
    cin >> u >> v >> a >> h;
    w = ((h-1)/A)*a;
    g[u].push_back(make_pair(w, v));
    g[v].push_back(make_pair(w, u));
  }
  ll minH = dijkstra(g, 1, n);
  if(minH < H)
  {
    cout << H - minH << endl;
  }
  else
  {
    cout << "Oh no" << endl;
  }
}
