#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
  int mod[10];
  int tol, counter = 1;
  for (int i = 0; i < 10; i++)
  {
    cin >> tol;
    mod[i] = tol % 42;
    for(int t = i-1; t >= 0; t--)
    {
      if(mod[t] == mod[i])
      {
        break;
      }
      if(t == 0)
      {
        counter++;
      }
    }
  }
  cout << counter << endl;
}
