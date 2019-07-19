#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
using namespace std;

char** split(const char* s, int *n)
{
  int i = 0, t = 0, c = 0, l = 0;
  while(s[i] != '\0')
  {
    if(s[i] == ',')
    {
      l++;
    }
    i++;
  }
  *n = l+1;
  char **a = (char**) malloc(l+1);
  i = 0;
  while(s[i] != '\0')
  {
    if(s[i] == ' ' || s[i] == '\t')
    {
      char* b = (char*) malloc(i-t+1);
      for(int j = 0; j < (i-t); j++)
      {
        b[j] = s[t + j];
      }
      b[i-t] = '\0';
      a[c] = b;
      c++;
      t = i + 1;
    }
    i++;
  }
  char* b = (char*) malloc(i-t+1);
  for(int j = 0; j < (i-t); j++)
  {
    b[j] = s[t + j];
  }
  b[i-t] = '\0';
  a[c] = b;
  return a;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
    for(int i = 0; i < n; i++)
    {
      string s;
      getline(cin, s);
      int t;
      cin >> t;
      char* list;
      cin >> list;
      int lengd;
      char** a = split(list, &lengd);
      int bol = 1;
      if(a[0] == '')
      {
        cout << "error" << endl;
        bol = 0;
      }
      int l = 0;
      int r = lengd - 1;
      int rev = 0;
      for(int j = 0; j < s.length(); j++)
      {
        char ch = s.at(j);
        if(ch == 'R')
        {
          rev += 1;
          rev %= 2;
        }
        else
        {
          if(lengd == 0)
          {
            cout << "error" << endl;
            j = s.length() + 1;
            bol = 0;
          }
          else
          {
            if(rev == 1)
            {
              r--;
              lengd--;
            }
            else
            {
              l++;
              lengd--;
            }
          }
        }
      }
      if(bol == 1)
      {
        if(!rev)
        {
          if(l >= lengd)
          {
            cout << "[]" << endl;
          }
          else
          {
            cout << "[" << a[l];
            for(int j = l + 1; j <= r; j++)
            {
              cout << "," << a[j];
            }
            cout << "]" << endl;
          }
        }
        else
        {
          if(l >= lengd)
          {
            cout << "[]" << endl;
          }
          else
          {
            cout << "[" << a[r];
            for(int j = r - 1; j >= l; j--)
            {
              cout << "," << a[j];
            }
            cout << "]" << endl;
          }
        }
      }
      for(int i = 0; i < n; i++)
      {
        free(a[i]);
        a[i] = 0;
      }
      free(a);
      a = 0;
    }
}
