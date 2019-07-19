#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long  n;
  cin >> n;
  string lina;
  for(long i = 0; i < n; i++)
  {
    cin >> lina;
    string curr;
    long counter = 0;
    long a [10];
    while(lina.find(",") != string::npos)
    {
      curr = lina.substr(0, lina.find(","));
      if(curr.compare("") == 0)
      {
        a[counter] = 0;
      }
      else
      {
        a[counter] = stoi(curr);
      }
      lina.erase(0, lina.find(",") + 1);
      counter++;
   }
   if(lina.compare("") == 0)
   {
     a[counter] = 0;
   }
   else
   {
     a[counter] = stoi(lina);
   }
   long sum = 0;
   long c = counter;
   for(long j = 0; j <= counter; j++)
   {
      sum += a[j]*pow(60, c);
      c--;
   }
   cout << sum << endl;
  }
}
