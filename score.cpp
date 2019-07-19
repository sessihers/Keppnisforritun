#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, home = 0, away = 0, homeLast = 0, awayLast = 0, stig = 0, hometime = 0, awaytime = 0, hometimeKeep = 0, awaytimeKeep = 0, time = 0, min = 0, sek = 0;
  string timi;
  cin >> n;
  char lid;
  for(int i = 0; i < n; i++)
  {
    cin >> lid;
    if(lid == 'H')
    {
      cin >> stig;
      home += stig;
    }
    else
    {
      cin >> stig;
      away += stig;
    }
    //Tökum inn tímann og geymum hann í sek
    cin >> timi;
    min = stoi(timi.substr(0, timi.find(":")));
    timi.erase(0, timi.find(":") + 1);
    sek = stoi(timi);
    time = 60*min + sek;
    if(home == away)
    {
      if(homeLast > awayLast)
      {
        hometime += time - hometimeKeep;
      }
      else if(awayLast > homeLast)
      {
        awaytime += time - awaytimeKeep;
      }
    }
    else if(home > away)
    {
      if(homeLast == awayLast)
      {
        hometimeKeep = time;
      }
      else if(homeLast < awayLast)
      {
        hometimeKeep = time;
        awaytime += time - awaytimeKeep;
      }
    }
    else if(away > home)
    {
      if(homeLast == awayLast)
      {
        awaytimeKeep = time;
      }
      else if(homeLast > awayLast)
      {
        awaytimeKeep = time;
        hometime += time - hometimeKeep;
      }
    }
    homeLast = home;
    awayLast = away;
  }
  if(away < home)
  {
    hometime += 1920 - hometimeKeep;
    cout << "H" << " ";
  }
  else if(away > home)
  {
    awaytime += 1920 - awaytimeKeep;
    cout << "A" << " ";
  }
  int lokminh = hometime/60;
  int loksekh = hometime%60;
  int lokmina = awaytime/60;
  int lokseka = awaytime%60;
  cout << lokminh << ":";
  if(loksekh < 10)
  {
    cout << "0" << loksekh;
  }
  else
  {
    cout << loksekh;
  }
  cout << " " << lokmina << ":";
  if(lokseka < 10)
  {
    cout << "0" << lokseka;
  }
  else
  {
    cout << lokseka;
  }
  cout << endl;
}
