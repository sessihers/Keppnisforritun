#include <algorithm>
#include <deque>
#include <istream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <math.h>
typedef long long ll;
using namespace std;

int main()
{
  int ar;
  cin >> ar;
  int man = (ar - 2019)*12 + 9;
  int bol = 0;
  for(int i = 0; i < 12; i++)
  {
    if((man + i) % 26 == 0)
    {
      cout << "yes" << endl;
      i = 13;
      bol++;
    }
  }
  if(bol == 0)
  {
    cout << "no" << endl;
  }
}
