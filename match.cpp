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
  int n;
  cin >> n;
  int w, h;
  cin >> w >> h;
  double l = sqrt(w*w + h*h);
  for(int i = 0; i < n; i++)
  {
    int sp;
    cin >> sp;
    if(sp <= l)
    {
      cout << "DA" << endl;
    }
    else
    {
      cout << "NE" << endl;
    }
  }
}
