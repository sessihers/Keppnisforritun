#include <iostream>
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
  int a,b,c,d;
  int count = 1;
  while(scanf("%d %d\n%d %d", &a, &b, &c, &d) != EOF)
  {
    int st = a*d - b*c;
    st = 1/st;
    printf("Case %d:\n%d %d\n%d %d\n", count, st*d, -1*st*b, -1*st*c, st*a);
    count++;
    scanf("\n");
  }


}
