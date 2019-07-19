#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  string lina;
  cin >> n >> m;
  getline(cin, lina);
  char a[n][m];
  for(int i = 0; i < n; i++)
  {
    getline(cin, lina);
    for(int j = 0; j < m; j++)
    {
      a[i][j] = lina.at(j);
    }
  }
  int count = 1;
  while(count > 0)
  {
    count = 0;
    for(int i = 0; i < n-2; i++)
    {
      for(int j = 0; j < m-2; j++)
      {
        if(a[i][j] != 'W' && (((a[i][j] == 'G' || a[i][j] == 'P') && (a[i+1][j] == 'G' || a[i+1][j] == 'P') && (a[i+2][j] == 'G' || a[i+2][j] == 'P') && (a[i][j+1] == 'G' || a[i][j+1] == 'P') && (a[i][j+2] == 'G' || a[i][j+2] == 'P') && (a[i+1][j+1] == 'G' || a[i+1][j+1] == 'P') && (a[i+1][j+2] == 'G' || a[i+1][j+2] == 'P') && (a[i+2][j+1] == 'G' || a[i+2][j+1] == 'P') && (a[i+2][j+2] == 'G' || a[i+2][j+2] == 'P'))
      || ((a[i][j] == 'B' || a[i][j] == 'P') && (a[i+1][j] == 'B' || a[i+1][j] == 'P') && (a[i+2][j] == 'B' || a[i+2][j] == 'P') && (a[i][j+1] == 'B' || a[i][j+1] == 'P') && (a[i][j+2] == 'B' || a[i][j+2] == 'P') && (a[i+1][j+1] == 'B' || a[i+1][j+1] == 'P') && (a[i+1][j+2] == 'B' || a[i+1][j+2] == 'P') && (a[i+2][j+1] == 'B' || a[i+2][j+1] == 'P') && (a[i+2][j+2] == 'B' || a[i+2][j+2] == 'P'))
      || ((a[i][j] == 'R' || a[i][j] == 'P') && (a[i+1][j] == 'R' || a[i+1][j] == 'P') && (a[i+2][j] == 'R' || a[i+2][j] == 'P') && (a[i][j+1] == 'R' || a[i][j+1] == 'P') && (a[i][j+2] == 'R' || a[i][j+2] == 'P') && (a[i+1][j+1] == 'R' || a[i+1][j+1] == 'P') && (a[i+1][j+2] == 'R' || a[i+1][j+2] == 'P') && (a[i+2][j+1] == 'R' || a[i+2][j+1] == 'P') && (a[i+2][j+2] == 'R' || a[i+2][j+2] == 'P'))))
        {
          if(a[i][j] == 'P' && a[i][j+1] == 'P' && a[i][j+2] == 'P' && a[i+1][j] == 'P' && a[i+1][j+1] == 'P' && a[i+1][j+2] == 'P' && a[i+2][j] == 'P' && a[i+2][j+1] == 'P' && a[i+2][j+2] == 'P')
          {

          }
          else
          {
            a[i][j] = 'P';
            a[i][j+1] = 'P';
            a[i][j+2] = 'P';
            a[i+1][j] = 'P';
            a[i+1][j+1] = 'P';
            a[i+1][j+2] = 'P';
            a[i+2][j] = 'P';
            a[i+2][j+1] = 'P';
            a[i+2][j+2] = 'P';
            count = 1;
          }
        }
      }
    }
  }
  int ch = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      if(a[i][j] != 'W')
      {
        if(a[i][j] != 'P')
        {
          cout << "NO" << endl;
          i = n;
          j = m;
          ch++;
        }
      }
    }
  }
  if(ch == 0)
  {
    cout << "YES" << endl;
  }

}
