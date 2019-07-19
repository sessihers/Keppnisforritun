#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void swap(double* a, double* b)
{
  double t = *a;
  *a = *b;
  *b = t;
}

int partition (int arr[], double arrs[], int low, int high)
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

void quickSort(int arr[], double arrs[], int low, int high)
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
  int n = 0;
  cin >> n;
  double max = 0, l = 0;
  int x[n];
  double f[n];
  for(int i = 0; i < n; i++)
  {
    cin >> x[i];
    cin >> f[i];
  }
  quickSort(x, f, 0, n - 1);
  for(int i = 0; i < n - 1; i++)
  {
    double z = (double)(abs(x[i+1] - x[i]));
    double y = abs(f[i+1] - f[i]);
    l = y/z;
    if(l > max)
    {
      max = l;
    }
  }
  printf("%.10f\n", max); 
}
