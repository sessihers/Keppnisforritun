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
typedef vector<char> vc;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef long long ll;

int main()
{
  string pat, lin;
  int bol = 0, c = 0;
  while(getline(cin, pat))
  {
    cin >> ws;
    getline(cin, lin);
    cin >> ws;
    int m = pat.length();
    int n = lin.length();
    int ind = 1;
    for(int i = 0; i < (n-m) + 1; i++)
    {
      int b = 0;
      for(int j = 0; j < m; j++)
      {
        if(pat.at(j) != lin.at(i+j))
        {
          //ind = j + 1;
          j = m+1;
          b++;
        }
      }
      if(b == 0)
      {
        cout << i << " ";
      }
    }
    cout << endl;
  }
}
