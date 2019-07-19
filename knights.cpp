#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int a [9][9];
  int b [9][9];
  string inn;
  int s = 0, counter = 0;
  for(int i = 2; i < 7; i++)
  {
    cin >> inn;
    for(int j = 2; j < 7; j++)
    {
      if(inn.at(j-2) == 'k')
      {
        if(a[i][j] == 2)
        {
          cout << "invalid" << endl;
          s++;
          break;
        }
        a[i+2][j+1] = 2;
        a[i+2][j-1] = 2;
        a[i+1][j+2] = 2;
        a[i+1][j-2] = 2;
        a[i-1][j-2] = 2;
        a[i-1][j+2] = 2;
        a[i-2][j+1] = 2;
        a[i-2][j-1] = 2;
        a[i][j] = 1;
        counter++;
      }
      else
      {
        a[i][j] = 0;
      }
      if(s == 1)
      {
        break;
      }
    }
    if(s == 1)
    {
      break;
    }
  }
  if(s == 0 && counter == 9)
  {
    cout << "valid" << endl;
  }
  else if(s == 0)
  {
    cout << "invalid" << endl;
  }
}
