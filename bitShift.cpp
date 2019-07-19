#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int sum = 0, curr = 0, at = 0;
  for(int i = 0; i < 10; i+=2)
  {
    curr = 1 << i;
    sum += curr;
    cout << curr << " " << sum << " " << at << endl;
    curr = 0;
  }
  for(int i = 0; i < 10; i++)
  {
    at = sum >> i;
    cout << at << endl;
    at = 0;

  }

}
