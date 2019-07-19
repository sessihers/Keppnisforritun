#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;

map<int, int[]>sum;


map threp(int [] a, int cost, int  [] b, int counter)
{
  if(cost == 0) {return sum;}
  if(cost < 0) {return sum;}
  if(sum[cost] != NULL)
  {
    sum[cost] = b;
    for(int i = 0; i < a.length(); i++)
    {
      b[counter] = a[i];
      counter++;
      return threp(a, cost - a[i], b, counter);
    }
  }
}

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
  int k;
  cin >> k;
  int b[30000];
  for(int i = 0; i < k; i++)
  {
    int cost;
    cin >> cost;
    threp(a, cost, b, 0);
  }
}
