#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
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
  long long disc = 0;
  while(n - 3 >= 0)
  {
    disc += a[n-3];
    n -= 3;
  }
  cout << disc << endl;
}
