#include <algorithm>
#include <deque>
#include <istream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <math.h>
typedef long long ll;
using namespace std;

#define EPS 1e-3


void gauss(double* a, int n, int m)
{
  int i, j, k, t;
  double p;
  for(i = 0; i < n; i++)
  {
    t = -1;
    while(++t <m && fabs(a[i*m+ t]) < EPS);
    if(t==m) continue;
    p = a[i*m + t];
    for(j=t; j<m; j++)
    {
      a[i*m + j] = a[i*m+j]/p;
    }
    for(j = 0; j < n; j++)
    {
      if(i != j)
      {
        p = a[j*m + t];
        for(k=t; k<m; k++)
        {
          a[j*m+ k] = a[j*m+ k] - a[i*m+ k]*p;
        }
      }
    }
  }
}

int main()
{
  int bol = 0;
  while(bol == 0)
  {
    int n;
    cin >> n;
    if(n == 0) break;
    int m = n+1;
    double* a = new double[n*m];
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
        cin >> a[i*m + j];
      }
    }
    for(int i = 0; i < n; i++)
    {
      cin >> a[n+i*m];
    }
    gauss(a, n, m);
    int el = 0;
    int em = 0;
    for(int i = 0; i < n; i++)
    {
      int l = 0;
      for(int j = 0; j < n; j++)
      {
        if(a[i*m+j] > EPS)
        {
          l++;
          break;
        }
      }
      if(l == 0)
      {
        if(a[i*m+n] > EPS)
        {
          el = 1;
        }
        else if(a[i*m + n] < EPS)
        {
          em = 1;
        }
      }
    }
    if(el == 1) cout << "inconsistent" << endl;
    else if(em == 1) cout << "multiple" << endl;
    else
    {
      for(int i = 0; i < n; i++)
      {
        cout << a[n + i*m] << " ";
      }
      cout << endl;
    }
  }
}
