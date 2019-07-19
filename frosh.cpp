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

int sum(int a[], int n, int T)
{
  int summa = 0;
  for(int i = n + 1; i < T; i++)
  {
    summa += a[i];
  }
  return summa;
}

int main()
{
  int T;
  cin >> T;
  int a[T];
  memset(a, 0, sizeof(a));
  int total = 0;
  for(int i = 0; i < T; i++)
  {
    int curr;
    cin >> curr;
    a[curr - 1]++;
    total += sum(a, curr - 1, T);
  }
  cout << total << endl;
}
