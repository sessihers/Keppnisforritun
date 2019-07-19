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
  //svartur þarf að vera í jaðri borðsins
  if(kx == 0 || kx == 7 || ky == 0 || ky == 7)
  {
    if(kx == ky || (kx == 7 && ky == 0) || (kx == 0 && ky == 7))
    {
      if(kx == Kx && ((ky-Ky) == 2 || (Ky - ky) == 2))
      {
        if(Rx == Kx || Rx == Kx + 1 || Rx == Kx - 1)
        {
          cout << "No" << endl;
        }
        else
        {
          cout << "Yes" << endl;
        }
      }
      else if(ky == Ky && ((kx - Kx) == 2 ||(Kx - kx) == 2))
      {
        if(Ry == Ky || Ry == Ky + 1 || Ry == Ky -1)
        {
          cout << "No" << endl;
        }
        else
        {
          cout << "Yes" << endl;
        }
      }
      else if((kx == Kx + 2 && ky == Ky + 1) || (kx == Kx + 2 && ky == Ky - 1) || (kx == Kx - 2 && ky == Ky + 1) || (kx == Kx - 2 && ky == Ky - 1))
      {
        cout << "Yes" << endl;
      }
      else if((kx == Kx + 1 && ky == Ky + 2) || (kx == Kx + 1 && ky == Ky - 2) || (kx == Kx - 1 && ky == Ky + 2) || (kx == Kx - 1 && ky == Ky - 2))
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else
    {
      //kóngur hvíts þarf að vera í sama dálk eða línu og svartur aðeins 2 reitum frá
      if(kx == Kx && (ky == 0 || ky == 7) && ((ky - Ky) == 2 || (Ky - ky) == 2))
      {
        if(Rx == Kx || Rx == Kx + 1 || Rx == Kx - 1)
        {
          cout << "No" << endl;
        }
        else
        {
          cout << "Yes" << endl;
        }
      }
      else if(ky == Ky && (kx == 0 || kx == 7) && ((kx - Kx) == 2 || (Kx - kx) == 2))
      {
        if(Ry == Ky || Ry == Ky + 1 || Ry == Ky -1)
        {
          cout << "No" << endl;
        }
        else
        {
          cout << "Yes" << endl;
        }
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }
  else
  {
    cout << "No" << endl;
  }
}
