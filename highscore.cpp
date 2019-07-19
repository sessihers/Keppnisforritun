#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    unsigned long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    unsigned long long int ans1 = (a+d)*(a+d) + b*b + c*c + 7*min(a+d,b,c);
    unsigned long long int ans2 = a*a + (b+d)*(b+d) + c*c + 7*min(a,b+d,c);
    unsigned long long int ans3 = a*a + b*b + (c+d)*(c+d) + 7*min(a,b,c+d);
    unsigned long long int ans = max(ans1, ans2, ans3);
    cout << ans << endl;
  }
}
