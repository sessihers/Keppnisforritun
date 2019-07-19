#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, t = 0;
  cin >> t;
  for(int i = 0; i < t; i++)
  {
    cin >> n;
    int s = 0;
    int a[n][2];
    memset(a, 0, sizeof(a));
    cin >> a[0][0] >> a[0][1];
    for(int i = 1; i <= n; i++)
    {
      cin >> a[i][0] >> a[i][1];
      int l = abs(a[i][0] - a[i-1][0]) + abs(a[i][1] - a[i-1][1]);
      if(l > 1000)
      {
        i = n + 2;
        s++;
        cout << "sad" << endl;
      }
    }
    if(s == 0)
    {
      cout << "happy" << endl;
    }
  }
}
