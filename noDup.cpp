#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  vector<string> a;
  string b;
  int i = 0, s = 0;
  while(cin >> b)
  {
    a.push_back(b);
    for(int t = i-1; t >= 0; t--)
    {
      if(b.compare(a[t]) == 0)
      {
        cout << "no" << endl;
        s++;
      }
    }
    if(s == 1)
    {
      break;
    }
    i++;
  }
  if(s == 0)
  {
    cout << "yes" << endl;
  }
}
