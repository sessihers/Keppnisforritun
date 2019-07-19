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
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
      ll N;
      cin >> N;
      ll temp = N;
      ll A = 0, B = 0;
      ll counter = 1;
      while(temp >= 1)
      {
        if(temp % 10 == 4)
        {
          A += counter*3;
          B += counter;
        }
        else
        {
          A += (temp%10)*counter;
        }
        counter *= 10;
        temp /= 10;
      }
      printf("Case #%d: %lld %lld\n", i+1, A, B);
    }
}
