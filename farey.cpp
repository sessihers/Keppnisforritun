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
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<ii, int> mii;

int gcd(int a, int b)
{
  if(a % b == 0) return b;
  return gcd(b, a % b);
}

int main()
{
  int T;
  cin >> T;
  mii a;
  int count = 0;
  int n, am;
  cin >> n >> am;
  for(int i = 1; i <= 10000; i++)
  {
      for(int k = 0; k <= i; k++)
      {
        ii temp;
        int ch = gcd(k, i);
        temp.first = k/ch;
        temp.second = i/ch;
        if(a.find(temp) == a.end())
        {
          a[temp] = 1;
          count++;
        }
        else
        {
        }
      }
  if(i == am)
  {
    printf("%d %d\n",n, count);
    if(T == n) { i = 10001; }
    else
    {
      cin >> n >> am;
    }
  }
  }
}
