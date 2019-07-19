#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
  ll n, a;
  cin >> n >> a;
  ll s[n];
  for(int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  sort(s, s + n);
  ll count = 0;
  while(a >= 0 && count <= n)
  {
    a -= (s[count] + 1);
    if(a >= 0) count++;
  }
  cout << count << endl;
}
