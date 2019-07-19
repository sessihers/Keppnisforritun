#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
typedef vector<int> vi;

int main()
{
  int n;
  cin >> n;
  int c = log2(n) + 1;
  cout << c << endl;
  for(int i = 1; i <= n; i*= 2)
  {
    cout << i << " ";
  }
  cout << endl;
}
