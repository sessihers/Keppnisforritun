#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string rod = " ";
  getline(cin, rod);
  long long fjE = 0, fjT = 0, sum = 0;
  char b = ' ';
  for(int i = 0; i < rod.length(); i++)
  {
    b = rod.at(i);
    if(b == '0')
    {
      sum += fjE + fjT;
    }
    if(b == '1')
    {
      fjE++;
      sum += fjT;
    }
    if(b == '2')
    {
      fjT++;
    }
  }
  cout << sum << endl;
}
