#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
typedef vector<int> vi;

int main()
{
  int n;
  while(cin >> n)
  {
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
      if(n % i == 0)
      {
        if(i == n/i)
        {
          sum += i;
        }
        else
        {
          sum += i + n/i;
        }
      }
    }
    if(sum == n)
    {
      cout << n << " perfect" << endl;
    }
    else if(abs(sum - n) <= 2)
    {
      cout << n << " almost perfect" << endl;
    }
    else
    {
      cout << n << " not perfect" << endl;
    }
  }
}
