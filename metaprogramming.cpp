#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <map>
#include <sstream>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  string s = " ";
  map<string, int>a;
  int i = 10;
  while(i > 0)
  {
    getline(cin, s);
    stringstream ss;
    ss << s;
    if(s.compare("define"))
    {
      int tala = 0;
      string nafn;
      ss >> tala >> nafn;
      a[nafn] = tala;
      cout << nafn << " " << a[nafn] << endl;
    }
    if(s.compare("eval"))
    {
      string br1, br2;
      char comp;
      ss >> br1 >> comp >> br2;
      cout << br1 << " " << comp << " " << br2 << endl;
      cout << a[br1] << " " << a[br2] << endl;

      if(a.find(br1) == a.end() || a.find(br2) == a.end())
      {
        cout << "undefined" << endl;
      }
      else if(comp == '<')
      {
        if(a[br1] < a[br2])
        {
          cout << "true" << endl;
        }
        else
        {
          cout << "false" << endl;
        }
      }
      else if(comp == '>')
      {
        if(a[br1] > a[br2])
        {
          cout << "true" << endl;
        }
        else
        {
          cout << "false" << endl;
        }
      }
      else if(comp == '=')
      {
        if(a[br1] == a[br2])
        {
          cout << "true" << endl;
        }
        else
        {
          cout << "false" << endl;
        }
      }
    }
    i--;
  }
}
