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
  int charge = 0, ceil = 0, curr = 0, set = -1, max = 0;
  for(int i = 0; i < n; i++)
  {
    if(a[i] <= i + 1)
    {
      curr = (i + 1) - a[i];
      if(curr >= max)
      {
        max = curr;
        set = i;
      }
    }
  }
  if(set != -1)
  {
    charge += a[set];
    charge += n - (set + 1);
  }
  else
  {
    charge += n;
  }
  cout << charge << endl;
}
