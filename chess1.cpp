#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
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
}
