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
      int N;
      cin >> N >> ws;
      string in = "";
      getline(cin, in);
      string out = "";
      for(int j = 0; j < in.length(); j++)
      {
        if(in.at(j) == 'E')
        {
          out.append("S");
        }
        else
        {
          out.append("E");
        }
      }
      cout << "Case #" << i + 1 << ": " << out << endl;
    }
}
