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
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef long long ll;
#define PI 3.14159265
#define EPS 1e-6


int main()
{
  int bol = 0;
  while(bol == 0)
  {
    double D, V;
    cin >> D >> V;
    if(D == 0) break;
    V = (D/2)*(D/2)*D*PI - V;
    double d = ((4*V/PI)-((D*D*D*PI)/3));
    double p = 1.0/3.0;
    cout << d << " " << p << endl;
    d = pow(d, p);
    cout << d << endl;
  }
}
