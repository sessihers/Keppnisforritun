#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  getline(cin, s);
  char a[s.length()];
  int t = 0, c = 0;
  for(int i = 0; i < s.length(); i++)
  {
    if(s.at(i) == '<')
    {
      c--;
      if(c < 0)
      {
        c = 0;
      }
    }
    else
    {
      a[c] = s.at(i);
      c++;
    }
  }
  for(int i = 0; i < c; i++)
  {
    printf("%c", a[i]);
  }
  printf("\n");
}
