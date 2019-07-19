#include<iostream>
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
  int n;
  cin >> n;
  string dna;
  cin >> dna;
  int runa [n];
  memset(runa, 0, sizeof(runa));
  int sk = 0, sum = 0;
  for(int i = 0; i < n; i++)
  {
    if(dna.at(i) == 'A')
    {
      runa[i] = 1;
      sum++;
    }
  }
  for(int i = 1; i < n-1; i++)
  {
    if(runa[i] != runa[i+1] && runa[i] != runa[i-1])
    {
      if(runa[i] == 1)
      {
        runa[i] = 0;
        sk++;
      }
      else
      {
        runa[i] = 1;
        sk++;
      }
    }
  }
  int c = 0, i = 0;
  while(c < n-1)
  {
    i  = c + 1;
    while(runa[c] == runa[i])
    {
      i++;
      if(i == n)
      {
        break;
      }
    }
    if(i == n)
    {
      if(runa[i - 1] == 0)
      {
        sk++;
      }
    }
    else
    {
      sk++;
    }
    c = i;
  }
  if(sum == 0)
  {
    sk++;
  }
  cout << sk << endl;
}
