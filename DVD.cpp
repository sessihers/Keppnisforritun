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
  cin >> tilv;
  for(int i = 0; i < tilv; i++)
  {
    cin >> fjdvd;
    string lina;
    int a [fjdvd];
    cin.ignore();
    getline(cin, lina);
    string curr;
    for(int t = 0; t <fjdvd; t++)
    {
      curr = lina.substr(0, lina.find(" "));
      a[t] = stoi(curr);
      lina.erase(0, lina.find(" ") + 1);
   }
   stadset = 1;
    for(int t = 1; t <= fjdvd; t++)
    {
      if(a[t-1] > stadset)
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
