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
  int n = 0;
  cin >> n;
  int a[n];
  int n1 = n;
  int n2 = n;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  int charge1 = 0;
  for(int i = n1-1; i >= 0; i--)
  {
    if(a[i] > n1)
    {
      charge1++;
      n1--;
    }
    else
    {
      charge1 += a[i];
      i = -1;
    }
  }
  int charge2 = 0, ceil = 0;
  int t = n2;
  for(int i = 0; i < t; i++)
  {
    if(a[i] <= ceil)
    {
      n2--;
    }
    else if(a[i] >= n2)
    {
      charge2 += n2;
      i = t + 1;
    }
    else
    {
      for(int j = 0; j <= a[i]; j++)
      {
        if(a[i] <= ceil)
        {
          n2--;
          j = a[i] + 1;
        }
        else if(a[i] < n2)
        {
          charge2++;
          ceil++;
        }
      }
    }
  }
  int charge = min(charge1, charge2);
  cout << charge << endl;
}
