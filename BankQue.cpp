#include<iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <string.h>
#include <cstring>
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

int partition (int arr[], int arrs[], int low, int high)
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

void quickSort(int arr[], int arrs[], int low, int high)
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
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, t;
  cin >> n;
  cin >> t;
  int a1[n];
  int a2[n];
  int b[t];
  memset(b, 0, sizeof(b));
  for(int i = 0; i < n; i++)
  {
    cin >> a1[i];
    cin >> a2[i];
  }
  quickSort(a1, a2, 0, n - 1);
  for(int i = n-1; i >= 0; i--)
  {
    for(int j = a2[i]; j >= 0; j--)
    {
      if(b[j] == 0)
      {
        b[j] = a1[i];
        j = -1;
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < t; i++)
  {
    sum += b[i];
  }
  cout << sum << endl;
}
