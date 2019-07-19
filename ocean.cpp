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
#include <math.h>
#include <functional>
using namespace std;
typedef long long ll;

const ll maxn = 1e4;
const ll mod = 1e9 + 7;

ll fact[maxn + 1];
void calcfact() {
    fact[0] = 1;
    for(int i = 1; i <= maxn; ++i) fact[i] = (fact[i - 1] * i) % mod;
}

void swap(ll& x, ll& y)
{
  ll hold;
  hold = x;
  x = y;
  y = hold;
}

ll egcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
     x = 1;
     y = 0;
     return a;
    }
    ll d = egcd(b, a % b, x, y);
    x -= a / b * y;
    swap(x, y);
    return d;
}

ll mod_inv(ll a, ll m) {
    ll x, y;
    ll d = egcd(a, m, x, y);
    return (x % m + m) % m;
}

ll nck(ll n, ll k) {
    ll res = fact[n];
    res *= mod_inv(fact[k], mod);
    res %= mod;
    res *= mod_inv(fact[n - k], mod);
    res %= mod;
    return res;
}

int main()
{
  calcfact();
  int T;
  cin >> T;
  for(int i = 0; i < T; i++)
  {
    int n = 0;
    int sum = 0;
    cin >> n;
    for(int j = 0; j <= (n/2+n%2); j++)
    {
      sum += nck(n - j + 1, j);
      assert(sum >= 0);
      sum %= mod;
    }
    cout << sum << endl;
  }
}
