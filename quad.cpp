#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int x, y;
  cin >> x >> y;
  if(x > 0)
  {
    if(y > 0)
    {
      cout << "1" << endl;
    }
    else
    {
      cout << "4" << endl;
    }
  }
  else
  {
    if(y > 0)
    {
      cout << "2" << endl;
    }
    else
    {
      cout << "3" << endl;
    }
  }
}
