#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
typedef long long ll;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string seq = " ";
  char sym = ' ';
  cin >> seq;
  ll k = 0;
  ll k2 = 1;
  ll k3 = 0;
  ll total = 0;
  ll acount = 0;
  const  ll mod = 1000000007;
  for(int i = 0; i < seq.length(); i++)
  {
    sym = seq.at(i);
    if(sym == '1')
    {
      acount++;
      acount %= mod;
    }
    else if(sym == '?')
    {
      total %= mod;
      ll temp = total*2;
      temp %= mod;
      ll temp2 = temp + k3;
      temp2 %= mod;
      total = (temp2 + acount)%mod;
      k++;
      if(k > 1)
      {
        ll a = ((2*k3)%mod);
        ll b =  ((2*k2)%mod);
        a %= mod;
        b %= mod;
        k3 = (a + b)%mod;
        k2 *= 2;
        k3 %= mod;
        k2 %= mod;
      }
      else if(k==1)
      {
        k3++;
      }
    }
    else if(sym == '0')
    {
      total %= mod;
      total += ((k3%mod) + (acount%mod))%mod;
    }
  }
  total %= mod;
  printf("%lld\n",total);
}
