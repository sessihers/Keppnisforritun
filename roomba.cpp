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



int main()
{
  int T;
  cin >> T;
  for(int i = 0; i < T; i++)
  {
    int N;
    cin >> N;
    dd point;
    point.first = 0;
    point.second = 0;
    double snun = 0;
    double degS = 0;
    for(int t = 0; t < N; t++)
    {
      double deg, dist;
      cin >> deg >> dist;
      //deg += 360;
      //deg = fmod(deg, 360.0);
      degS += deg;
      point.first += sin((degS)*PI/180)*dist;
      point.second += cos((degS)*PI/180)*dist;
      /*if(0 <= degS && degS <= 90)
      {
        point.first += -sin(degS*PI/180)*dist;
        point.second += cos(degS*PI/180)*dist;
      }
      else if(degS >= 270 && 360 >= degS)
      {
        point.first += cos((degS - 270)*PI/180)*dist;
        point.second += sin((degS - 270)*PI/180)*dist;
      }
      else if(degS >= 180 && 270 >= degS)
      {
        point.first += sin((degS - 180)*PI/180)*dist;
        point.second += -cos((degS - 180)*PI/180)*dist;
      }
      else if(degS >= 90 && degS <= 180)
      {
        point.first += -cos((degS - 90)*PI/180)*dist;
        point.second += -sin((degS - 90)*PI/180)*dist;
      }*/
      //snun += deg;
      //snun = fmod(snun, 360.0);
    }
    printf("%.3f %.3f\n", -1*point.first, point.second);
    //cout << point.first << " " << point.second << endl;
  }
}
