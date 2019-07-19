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
typedef long long ll;

ll mod = 1e9;
ll b[4] = {1, 1, 1, 0};

void modarr(ll a[4])
{
  a[0] %= mod;
  a[1] %= mod;
  a[2] %= mod;
  a[3] %= mod;
}

void margf(ll a[4], ll b[4])
{
  modarr(a);
  ll a1 = ((a[0]*b[0])%mod + (a[1]*b[2])%mod)%mod;
  ll a2 = ((a[0]*b[1])%mod + (a[1]*b[3])%mod)%mod;
  ll a3 = ((a[2]*b[0])%mod + (a[3]*b[2])%mod)%mod;
  ll a4 = ((a[2]*b[1])%mod + (a[3]*b[3])%mod)%mod;
  a[0] = a1;
  a[1] = a2;
  a[2] = a3;
  a[3] = a4;
}

void powarr(ll a[4], ll n)
{
  ll res[4] = {1, 0, 0, 1};
  while(n > 0)
  {
    if(n % 2 == 1)
    {
      margf(res, a);
    }
    margf(a, a);
    n = n / 2;
  }
  a[0] = res[0];
  a[1] = res[1];
  a[2] = res[2];
  a[3] = res[3];
  /*if(n == 1) return;
  if(n % 2 == 1) margf(a, b);
  margf(a, a);
  return powarr(a, n/2);*/
}

int main()
{
  int T;
  cin >> T;
  for(int i = 1; i <= T; i++)
  {
    ll a[4] = {1,1,1,0};
    ll c, n;
    cin >> c >> n;
    powarr(a, n);
    cout << c << " " << a[1] << endl;
  }
}
