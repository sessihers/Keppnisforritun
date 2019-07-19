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
typedef long long ll;
using namespace std;

ll mod = 1e9 + 7;

int power(ll x, ll y)
{
  x %= mod;
  y %= mod;
  if (y == 0)
      return 1;
  else if (y % 2 == 0)
      return (power(x, y / 2)%mod * power(x, y / 2)%mod)%mod;
  else
      return (x%mod * power(x, y / 2)%mod * power(x, y / 2)%mod)%mod;
}

int main()
{
  int T;
  cin >> T;
  for(int i  = 0; i < T; i++)
  {
    ll d;
    cin >> d;
    ll ans = power(9, d - 1);
    ans %= mod;
    ans *= 8;
    ans %= mod;
    cout << ans << endl;
  }
}
