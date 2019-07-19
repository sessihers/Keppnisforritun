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

ll fastpow(ll b, ll pow)
{
  ll res = 1;
  while(pow > 0)
  {
    if(pow % 2 == 1)
    {
    res = (res*b) % mod;
    }
    b = (b * b) % mod;
    pow = pow / 2;
  }
  return res;
}

int main()
{
  int T;
  cin >> T;
  for(int i  = 0; i < T; i++)
  {
    ll d;
    cin >> d;
    ll ans = fastpow(9, d - 1);
    ans %= mod;
    ans *= 8;
    ans %= mod;
    cout << ans << endl;
  }
}
