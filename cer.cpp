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
  int a[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  int charge = 0,start = 0;
  for(int i = n-1; i >= start; i--)
  {
    if(a[i] >= n)
    {
      charge++;
      n--;
    }
    //a[i] < n
    else
    {
      int currn = n;
      while(a[i] < n && a[i] > 0)
      {
        charge++;
        a[i]--;
        int currs = start;
        for(int j = currs; j < currn - 1; j++)
        {
          a[j]--;
          if(a[j] == 0)
          {
            n--;
            start++;
          }
        }
      }
      if(a[i] >= n && n != 0)
      {
        charge++;
        n--;
      }
    }
  }
  cout << charge << endl;
}
