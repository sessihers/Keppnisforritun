#include<iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n = 0;
  cin >> n;
  for(int i  = 0; i < n; i++)
  {
    long long t = 0, ch = 0;
    long long sum = 0;
    cin >> t;
    long long v1[t];
    long long v2[t];
    for(int j = 0; j < t; j++)
    {
      cin >> ch;
      v1[j] = ch;
    }
    for(int j = 0; j < t; j++)
    {
      cin >> ch;
      v2[j] = ch;
    }
    sort(v1, v1 + t);
    sort(v2, v2 + t);
    for(int j = 0; j < t; j++)
    {
      sum += v1[j]*v2[t-1-j];
    }
    printf("Case #%d: %lld\n", i+1, sum);
  }
}
