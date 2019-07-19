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
typedef vector<vii> vvii;
typedef vector<int> vi;
typedef long long ll;

int cmp(char a, char aa, char b, char bb)
{
  if(int(a) < int(b)){ return 1; }
  if(int(a) > int(b)){ return -1; }
  if(int(aa) < int(bb)){ return 1; }
  if(int(aa) > int(bb)){ return -1; }
  return 0;
}

void Sort(string a[], int n)
{
    // Iterate through array elements
    for (int i = 0; i < n - 1; i++)
    {

        // Loop invariant : Elements till a[i - 1]
        // are already sorted.

        // Find minimum element from
        // arr[i] to arr[n - 1].
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
          string sa = a[min];
          string sb = a[j];
          char a = sa.at(0);
          char aa = sa.at(1);
          char b = sb.at(0);
          char bb = sb.at(1);
          if (cmp(a, aa, b, bb) < 0)
          {
              min = j;
          }
        }

        // Move minimum element at current i.
        string key = a[min];
        while (min > i)
        {
            a[min] = a[min - 1];
            min--;
        }
        a[i] = key;
    }
}

int main()
{
  int bol = 0;
  int fir = 0;
  while(bol == 0)
  {
    int n;
    cin >> n;
    if(n == 0)
    {
      bol++;
    }
    else
    {
      if(fir > 0){ cout << endl; }
      string a[n];
      for(int i = 0; i < n; i++)
      {
        cin >> a[i];
      }
      Sort(a, n);
      for(int i = 0; i < n; i++)
      {
        cout << a[i] << endl;
      }
      fir++;
    }
  }
}
