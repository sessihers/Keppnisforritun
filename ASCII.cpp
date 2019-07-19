#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string lina;
  cin >> lina;
  int n = lina.length()/6+1;
  string a [7];
  a[0] = lina;
  for(int i = 1; i < 7; i++)
  {
    cin >> a[i];
  }
  int c = 0, counter = 0;
  string tol[2];
  for(int i = 0; i < n; i++)
  {
    for(int t = 0; t < 7; t++)
    {
      for(int j = c; j < c + 5; j++)
      {
        if((a[t].at(j)).compare("x") == 0)
        {
          counter++;
        }
      }
    }
    switch(counter)
    {
      case 20:
    }
    c += 6;
  }
}
