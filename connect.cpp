#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int car = 0;
  char a[100][100];
  while(car == 0)
  {
    string ab = " ";
    memset(a, '.',10000);
    char b[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int counter = 0, n = 0, m = 0, lengd = 0;
    int r = 0;
    while(r == 0)
    {
      if(cin.eof())
      {
        car++;
        break;
      }
      else
      {
        getline(cin, ab);
      }
      if(ab.empty())
      {
        break;
      }
      lengd = (int)(ab.length());
      for(int i = 0; i < lengd; i++)
      {
        a[counter][i] = ab.at(i);
        if(a[counter][i] == '0')
        {
          n = counter;
          m = i;
        }
      }
      counter++;
    }
    int s = 0;
    int j = 0;
    int l = max(counter, lengd);
    while(s == 0 && j < 61)
    {
      j++;
      for(int i = 0; i < l; i++)
      {
        if(a[n][i] == b[j])
        {
          int minnst = min(i, m);
          int maxst = max(i, m);
          for(int t = minnst; t < maxst; t++)
          {
            if(a[n][t] == '.')
            {
              a[n][t] = '-';

            }
            else if(a[n][t] == '|')
            {
              a[n][t] = '+';

            }
          }
          m = i;
          i = l;
        }
        else if(a[i][m] == b[j])
        {
          int minnst = min(i, n);
          int maxst = max(i, n);
          for(int t = minnst; t < maxst; t++)
          {
            if(a[t][m] == '.')
            {
              a[t][m] = '|';
            }
            else if(a[t][m] == '-')
            {
              a[t][m] = '+';
            }
          }
          n = i;
          i = l;
        }
        if(i == l-1)
        {
          s++;
        }
      }
    }
    for(int i = 0; i < counter; i++)
    {
      for(int j = 0; j < lengd; j++)
      {
        cout << a[i][j];
      }
      cout << endl;
    }
    if(car == 0)
    {
      cout << endl;
    }
  }
}
