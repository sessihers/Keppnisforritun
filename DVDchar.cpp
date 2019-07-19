#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int tilv, fjdvd, dvdnr, counter,stadset = 0;
  tilv = getchar();
  for(int i = 0; i < tilv; i++)
  {
    fjdvd = getchar();
    stadset = 1;
    for(int t = 1; t <= fjdvd; t++)
    {
      dvdnr = getchar();
      getchar();
      if(dvdnr > stadset)
      {
        counter++;
        stadset--;
      }
      stadset++;
    }
    cout << counter << endl;
    counter = 0;
  }
}
