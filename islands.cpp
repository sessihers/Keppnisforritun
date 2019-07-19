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
    int nr;
    cin >> nr;
    int a[36];
    memset(a, 0, sizeof(a));
    int nullid;
    cin >> nullid;
    for(int j = 12; j < 24; j++)
    {
      cin >> a[j];
    }
    cin >> nullid;
    int count = 0;
    for(int j = 12; j < 24; j++)
    {
      if(a[j] == 0)
      {

      }
      else
      {
        int s = max(11 - j, j);
        for(int t = 1; t < s; t++)
        {
          if(a[j] >= a[j - t] && a[j] >= a[j + t])
          {
             count++;
          }
          else
          {
            t = s;
          }
        }
      }
    }
    cout << nr << " " << count << endl;
  }

}
