#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  char a[1001][1001];
  int rowMax = 500;
  int rowMin = 500;
  int colMax = 500;
  int colMin = 500;
  int x = 500;
  int y = 500;
  string move = " ";
  for(int i = 0; i < 1001; i++)
  {
    for(int j = 0; j < 1001; j++)
    {
      a[i][j] = ' ';
    }
  }
  a[x][y] = 'S';
  int q = 0;
  while(q == 0)
  {
    if(cin.eof())
    {
      a[x][y] = 'E';
      break;
    }
    getline(cin, move);
    if(move.empty())
    {
      a[x][y] = 'E';
      break;
    }
    string up = move.substr(0, 1);
    string down = move.substr(0, 1);
    string left = move.substr(0, 1);
    string right = move.substr(0, 1);
    if(down.compare("d") == 0)
    {
      x++;
      if(x > rowMax)
      {
        rowMax = x;
      }
    }
    else if(up.compare("u") == 0)
    {
      x--;
      if(x < rowMin)
      {
        rowMin = x;
      }
    }
    else if(left.compare("l") == 0)
    {
      y--;
      if(y < colMin)
      {
        colMin = y;
      }
    }
    else if(right.compare("r") == 0)
    {
      y++;
      if(y > colMax)
      {
        colMax = y;
      }
    }
    if(a[x][y] != 'S')
    {
       a[x][y] = '*';
    }
  }
  a[x][y] = 'E';
  char b[(rowMax - rowMin) + 3][(colMax - colMin + 3)];
  for(int i = 0; i < (colMax - colMin) + 3; i++)
  {
    b[0][i] = '#';
  }
  for(int i = 1; i < (rowMax - rowMin) + 2; i++)
  {
    for(int j = 0; j < (colMax - colMin) + 3; j++)
    {
      if(j == 0 || j == (colMax - colMin) + 2)
      {
        b[i][j] = '#';
      }
      else
      {
        b[i][j] = a[rowMin + i - 1][colMin + j - 1];
      }
    }
  }
  for(int i = 0; i < (colMax - colMin) + 3; i++)
  {
    b[rowMax - rowMin + 2][i] = '#';
  }
  for(int i = 0; i < rowMax - rowMin + 3; i++)
  {
    for (int j = 0; j < colMax - colMin + 3; j++)
    {
      if(b[i][j] == ' ')
      {
        cout << " ";
      }
      else
      {
       cout << b[i][j];
     }
    }
     cout << endl;
  }
}
