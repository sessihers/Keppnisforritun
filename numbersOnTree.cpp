#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int h = pow(2, n + 1) - 1;
  string l;
  cin >> l;
  int pos = 0, haed = 0;
  for(int i = 0; i < l.length(); i++)
  {
    if(l.at(i) == 'L')
    {
      pos *= 2;
      haed++;
    }
    else
    {
      pos *= 2;
      pos += 1;
      haed++;
    }
  }
  int mism = pow(2, haed) - 1;
  mism = mism + pos;
  cout << h - mism << endl;
}
