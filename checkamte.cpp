#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int a[8][8];
  int b[8][8];
  int kx,ky,Kx,Ky,Rx,Ry;
  char curr;
  string line;
  //finnum staðsetningu á köllunum
  for(int i = 0; i < 8; i++)
  {
    cin >> line;
    for(int j = 0; j < 8; j++)
    {
      curr = line.at(j);
      if(curr == 'k')
      {
        kx = i;
        ky = j;
      }
      else if(curr == 'K')
      {
        Kx = i;
        Ky = j;
      }
      else if(curr == 'R')
      {
        Rx = i;
        Ry = j;
      }
    }
  }
  //prófum fyrst með því að hreyfa hrókinn
  for(int i = 0; i < 8; i++)
  {
    for(int j = 0; i < 8; j++)
    {
      if(i == Kx || i == Kx + 1 || i == Kx - 1 || j == Ky || j == Ky + 1 || j == Ky - 1)
      {
        a[i][j] == 1;
      }
      else
      {
        a[i][j] = 0;
      }
    }
  }
  for(int i = 0; i < 7; i++)
  {
    for(int j = 0; j < 7; j++)
    {
      b = a;
      for(int t = 0; t < 8)
    }
  }
}
