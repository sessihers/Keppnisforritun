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
#include <string>
#include <cstring>
#include <string.h>
#include <complex>
#include <sstream>
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
#define EPS 1e-9;

typedef complex<double> point;
typedef vector<point> polygon;

point piv;

bool cmp(point a , point b)
{
  return abs(arg(a - piv) - arg(b - piv)) < EPS ? (abs(a - piv) < abs(b - piv)) : (arg(a - piv) < arg(b - piv));
}

int ccw(point a, point b, point c)
{
  return real(b - a)*imag(c - a) - imag(b - a)*real(c - a) > 0.0 ? 1 : 0;
}

polygon convex_hull(vector<point> p)
{
  polygon h;
  int j , i , mn = 0;
  for (i = 1; i < p.size(); i++)
  {
    if (imag(p[i]) < imag(p[mn]) || (imag(p[i]) == imag(p[mn]) && real (p[i]) < imag(p[mn])))
    {
      mn = i;
    }
  }
  swap(p[mn], p[0]); piv = p[0];
  sort(p.begin() + 1, p.end(), cmp);
  h.push_back(p[p. size () - 1]);
  h.push_back(p[0]);
  h.push_back(p[1]);
  i=2;
  while (i < p.size())
  {
    j=h.size()-1;
    if (ccw(h[j - 1], h[j], p[i])) h.push_back(p[i++]);
    else h.pop_back();
  }
  return h;
}

double ummal(polygon p)
{
  int i;
  double r = 0.0;
  for (i = 0; i < p.size()-1; i++)
  {
    r = r + abs(p[i] - p[i + 1]);
  }
  return r;
}

int main()
{
  string str;
  while(getline(cin, str))
  {
    polygon p;
    double x, y;
    double n = 0;
    stringstream st(str);
    while(st >> x)
    {
      st >> y;
      point temp(x, y);
      p.push_back(temp);
      n++;
    }
    //polygon a = convex_hull(p);
    double umm = ummal(convex_hull(p));
    double stig = (100.0*n)/(umm + 1.0);
    printf("%.6f\n", stig);
  }
}
