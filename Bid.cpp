#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void swap(string* a, string* b)
{
    string t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], string arrs[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swap(&arrs[i], &arrs[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swap(&arrs[i + 1], &arrs[high]);
    return (i + 1);
}

void quickSort(int arr[], string arrs[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, arrs, low, high);

        quickSort(arr, arrs, low, pi - 1);
        quickSort(arr, arrs, pi + 1, high);
    }
}

int main()
{
  int n, sum;
  cin >> n;
  cin >> sum;
  string names[n];
  string name;
  int bets [n];
  int bet;
  for(int i = 0; i < n; i++)
  {
    cin >> name;
    cin >> bet;
    names[i] = name;
    bets[i] = bet;
  }
  quickSort(bets, names, 0, n - 1);
  int winners [n];
  int prize = 0,count = 0,s = 0;
  for(int i = n - 1; i >= 0; i--)
  {
    if((bets[i] + prize) <= sum)
    {
      prize += bets[i];
      winners[count] = i;
      count++;
    }
    if(prize == sum)
    {
      cout << count << endl;
      for(int j = 0; j < count; j++)
      {
        cout << names[winners[j]] << endl;
      }
      s++;
      break;
    }
  }
  if(s == 0)
  {
    cout << "0" << endl;
  }
}
