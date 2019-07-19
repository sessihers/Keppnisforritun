#include <bits/stdc++.h>
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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int bol = 0;
  while(bol == 0)
  {
    int n, m;
    cin >> n >> m >> ws;
    if(n == 0)
    {
      bol = 1;
    }
    else
    {
      int st = n*m;
      vvii g(st + 2, vii());
      int a[n][m];
      for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < m; j++)
        {
          a[i][j] = getchar()%48;
        }
        cin >> ws;
      }
      int noda = 0;
      for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < m; j++)
        {
          noda = i*m + j + 1;
          if(i-1 >= 0 && j-1 >= 0)
          {
            g[noda].push_back(make_pair(a[i-1][j-1], (i-1)*m + j-1 + 1));
          }
          if(i-1 >= 0)
          {
            g[noda].push_back(make_pair(a[i-1][j], (i-1)*m + j + 1));
          }
          if(i-1 >= 0 && j+1 < m)
          {
            g[noda].push_back(make_pair(a[i-1][j+1], (i-1)*m + j+1 + 1));
          }
          if(j-1 >= 0)
          {
            g[noda].push_back(make_pair(a[i][j-1], i*m + j-1 + 1));
          }
          if(j+1 < m)
          {
            g[noda].push_back(make_pair(a[i][j+1], i*m + j+1 + 1));
          }
          if(i+1 < n && j+1 < m)
          {
            g[noda].push_back(make_pair(a[i+1][j+1], (i+1)*m + j+1 + 1));
          }
          if(i+1 < n && j-1 >= 0)
          {
            g[noda].push_back(make_pair(a[i+1][j-1], (i+1)*m + j-1 + 1));
          }
          if(i+1 < n)
          {
            g[noda].push_back(make_pair(a[i+1][j], (i+1)*m + j + 1));
          }
        }
      }
      for(int i = 0; i < m; i++)
      {
        g[0].push_back(make_pair(a[0][i], i + 1));
        g[(n-1)*m + i + 1].push_back(make_pair(1, n*m + 1));
      }
      pair<vi, int> res = dijkstra(g, 0, n*m + 1);
      vi r = res.first;
      for(int i = 1; i < r.size() - 1; i++)
      {
        r[i]--;
        int x = r[i]/m;
        int y = r[i]%m;
        a[x][y] = 0;
      }
      for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < m; j++)
        {
          if(a[i][j] == 0)
          {
            cout << " ";
          }
          else
          {
            cout << a[i][j];
          }
        }
        cout << endl;
      }
      cout << endl;
    }
  }
}
