#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string seq = " ";
  char sym = ' ';
  cin >> seq;
  long long  k = 0;
  long long  k2 = 1;
  long long  k3 = 0;
  long long  total = 0;
  long long  acount = 0;
  const  long long  mod = 1000000007;
  for(int i = 0; i < seq.length(); i++)
  {
    sym = seq.at(i);
    if(sym == '1')
    {
      acount++;
      assert(acount >= 0);
      acount %= mod;
    }
    else if(sym == '?')
    {
      total %= mod;
      long long temp = total*2;
      temp %= mod;
      long long temp2 = temp + k3;
      temp2 %= mod;
      total = (temp2 + acount)%mod;
      assert(total >= 0);
      k++;
      if(k > 1)
      {
        long long a = ((2*k3)%mod);
        long long b =  ((2*k2)%mod);
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
