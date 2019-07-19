#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
int a, b, c;
string rod;
cin>>a;
cin>>b;
cin>>c;
cin>>rod;
int tol [] = {a, b, c};
for(int i = 0; i < 2; i++)
{
  for(int j=i + 1; j < 3; j++)
  {
    if(tol[i] > tol[j])
    {
      int ch = tol[i];
      tol[i] = tol[j];
      tol[j] = ch;
    }
  }
}
if(rod.compare("ABC") == 0)
{
  cout<<tol[0] << " ";
  cout<<tol[1] << " ";
  cout<<tol[2] << " "<<endl;
}
else if(rod.compare("ACB") == 0)
{
  cout<<tol[0] << " ";
  cout<<tol[2] << " ";
  cout<<tol[1] << " "<<endl;
}
else if(rod.compare("BAC") == 0)
{
  cout<<tol[1] << " ";
  cout<<tol[0] << " ";
  cout<<tol[2] << " "<<endl;
}
else if(rod.compare("BCA") == 0)
{
  cout<<tol[1] << " ";
  cout<<tol[2] << " ";
  cout<<tol[0] << " "<<endl;
}
else if(rod.compare("CAB") == 0)
{
  cout<<tol[2] << " ";
  cout<<tol[0] << " ";
  cout<<tol[1] << " "<<endl;
}
else if(rod.compare("CBA") == 0)
{
  cout<<tol[2] << " ";
  cout<<tol[1] << " ";
  cout<<tol[0] << " "<<endl;
}
}
