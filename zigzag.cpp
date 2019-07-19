#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 0, longest = 0, stefna = 2;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(int i = 1; i <= n-1; i++)
  {
    if(a[i] > a[i-1] && (stefna == 0 || longest == 0))
    {
      longest++;
      stefna = 1;
    }
    else if(a[i] < a[i-1] && (stefna == 1 || longest == 0))
    {
      longest++;
      stefna = 0;
    }
  }
  longest++;
  cout << longest << endl;
}
