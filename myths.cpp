#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define PI 3.14159265
#define E 2.71828182846
int main()
{
  double a;
  for(int i = 0; i < 11; i++)
  {
    cin >> a;
  }
  double l;
  cin >> l;
  double svar = l*l/(PI*E) + (1.0/(l + 1.0));
  printf("%.2f\n", svar);
}
