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
  for(int i = 0; i < n; i++)
  {
    int curr;
    cin >> curr;
    int s = 0, j = 0;
    while(s == 0)
    {
      //int sh = (j << 1) % 256;
      int check = j^(j << 1);
      check %= 256;
      if(check == curr)
      {
        if(i != n-1)
        {
          cout << j << " ";
          s = 1;
        }
        else
        {
          cout << j << endl;
          s = 1;
        }
      }
      j++;
    }

  }
}
