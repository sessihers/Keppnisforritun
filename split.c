#include <stdio>

char** split(const char* s, int *n)
{
  int i = 0, t = 0, c = 0, l = 0;
  while(s[i] != '\0')
  {
    if(s[i] == ' ' || s[i] == '\t')
    {
      s[i] = ' ';
      l++;
    }
    i++;
  }
  char **a = (char**) malloc(l+1);
  i = 0;
  while(s[i] != '\0')
  {
    if(s[i] == ' ')
    {
      char* b = (char*) malloc(i-t+1);
      for(int j = 0; j < (i-t+1); j++)
      {
        b[j] = s[i + j];
      }
      a[c] = b;
      c++;
      t = i;
    }
    i++;
  }
  return a;
}

int main()
{
  char *s = "..."; // fyllið inn í þetta
  int n;
  char** split_s = split(s, &n);
  ... // restin af forritinu
}
