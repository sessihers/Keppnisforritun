#include<iostream>
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

  for (int subset = 0; subset < (1 << 26); subset++)
  {
      for (int i = 0; i < 26; i++)
      {
          if ((subset & (1 << i)) != 0)
          {
              cout << "1, " ;
          }
          else
          {
            cout << "0, ";
          }
      }
      cout << endl;
  }
}
