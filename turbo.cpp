#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int a[n];
  int ind[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    ind[i] = i + 1;
  }
  for(int i = 1; i <= n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(a[j] == i)
      {
        if((i % 2) == 0)
        {
          cout << a[j] - ind[j] << endl;
          if(j + 1 < n)
          {
            for(int l = j + 1; l < a[j]; l++)
            {
              ind[l]--;
            }
          }
        }
        else
        {
          cout << ind[j] - a[j] << endl;
          if(j < n)
          {
            for(int l = a[j] - 1; l < j; l++)
            {
              ind[l]++;
            }
          }
        }
        j = n;
      }
    }
  }
}
