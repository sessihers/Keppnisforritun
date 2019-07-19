#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
  string sv;
  int guess;
  int a = 1;
  int b = 1001;
  for(int i = 0; i < 10; i++)
  {
    guess = (a + b)/2;
    cout << guess << endl;
    cin >> sv;
    if(sv.compare("correct") == 0)
    {
      break;
    }
    else if(sv.compare("lower") == 0)
    {
      b = guess;
    }
    else
    {
      a = guess;
    }
  }
}
