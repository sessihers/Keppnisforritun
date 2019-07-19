#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
typedef vector<int> vi;
typedef pair<long long,long long> ll;

long long gcd(long long a, long long b)
{
  if(a % b == 0) return b;
  return gcd(b, a % b);
}

int main()
{
  ll n;
  cin >> n.first;
  getchar();
  cin >> n.second;
  n.first = 5*n.first - 5*32*n.second;
  n.second = 9*n.second;
  long long samn = gcd(n.first, n.second);
  n.first /= samn;
  n.second /= samn;
  if(n.second < 0)
  {
    n.first *= -1;
    n.second *= -1;
  }
  cout << n.first << "/" << n.second << endl;
}
