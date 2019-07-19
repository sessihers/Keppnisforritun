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
using namespace std;

int main()
{
  long long n;
  cin >> n;
  for(int i = 128; i >= 1; i--)
  {
    long long temp = n;
    for(int j = 0; j < 9; j++)
    {
      if(temp % i == 0)
      {
        temp /= i;
      }
      else
      {
        j = 9;
      }
      if(j == 8)
      {
        cout << i << endl;
        i = 0;
      }
    }
  }
}
