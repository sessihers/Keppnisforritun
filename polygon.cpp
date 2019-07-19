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
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int,int> ii;
typedef pair<double,double> dd;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef long long ll;
#define PI 3.14159265



int main()
{
  int bol = 0;
  while(bol == 0)
  {
    vdd h;
    int n;
    cin >> n;
    if(n == 0) break;
    for(int i = 0; i < n; i++)
    {
      double x, y;
      cin >> x >> y;
      ii temp;
      temp.first = x;
      temp.second = y;
      h.push_back(temp);
    }
    double A = 0;
    for(int i = 0; i < n; i++)
    {
      if(i + 1 == n)
      {
        A += ((h[0].first + h[i].first)*(h[0].second - h[i].second))/2;
      }
      else
      {
        A += ((h[i+1].first + h[i].first)*(h[i+1].second - h[i].second))/2;
      }
    }
    if(A < 0)
    {
      A = -1*A;
      printf("cw %.1f\n", A);
    }
    else
    {
      printf("ccw %.1f\n", A);
    }
  }
}
