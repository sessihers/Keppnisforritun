public class counting
{
  
  public static void star(char[][] a, int i, int j, int n, int m)
  {
    a[i][j] = '+';
    if(i + 1 < n && a[i+1][j] == '-')
    {
      star(a, i + 1, j, n, m);
    }
    if(j - 1 >= 0 && a[i][j-1] == '-')
    {
      star(a, i, j - 1, n, m);
    }
    if(i - 1 >= 0 && a[i-1][j] == '-')
    {
      star(a, i - 1, j, n, m);
    }
    if(j + 1 < m && a[i][j+1] == '-')
    {
      star(a, i, j + 1, n, m);
    }
  }
  
  public static void main(String [] args)
  {
    Kattio sc = new Kattio(System.in, System.out);
    int c = 1;
    while(sc.hasMoreTokens())
    {
      int n = sc.getInt();
      int m = sc.getInt();
      char [][] a = new char[n][m];
      for(int i = 0; i < n; i++)
      {
        String l = sc.getWord();
        for(int j = 0; j < m; j++)
        {
          a[i][j] = l.charAt(j);
        }
      }
      int count = 0;
      for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < m ; j++)
        {
          if(a[i][j] == '-')
          {
            star(a, i, j, n, m);
            count++;
          }
        }
      }
      System.out.println("Case " + c + ": " + count);
      c++;
    }
  }
}