#include <stdio.h>
#include <stdlib.h>


typedef struct matrix {
  double* a;
  int n;
  int m;
} matrix;

matrix margfFylki(matrix A, matrix B)
{
  double * AB = (double*) malloc(sizeof(double)*(A.n)*(B.m));
  //counter
  int c = 0;
  for(int i = 0; i < A.n; i++)
  {
    for(int j = 0; j < B.m; j++)
    {
      AB[c] = A.a[i*m + j] * B.a[i*m + j];
      c++;
    }
  }
  
}

int main()
{

}
