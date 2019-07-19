public class geteg2
{
  public static double EPS = 0.001;
  
  public static boolean lausn(double[][] a, int n)
  {
    boolean l = true;
    for(int i = 0; i < n; i++)
    {
      l = false;
      for(int j = 0; j < n; j++)
      {
        if(Math.abs(a[i][j]) > EPS)
        {
          l = true;
          break;
        }
      }
      if(!l && Math.abs(a[i][n]) > EPS)
      {
        return l;
      }
    }
    return true;
  }
  
  public static boolean mult(double[][] a, int n)
  {
    boolean l = true;
    for(int i = 0; i < n; i++)
    {
      l = false;
      for(int j = 0; j < n + 1; j++)
      {
        if(Math.abs(a[i][j]) > EPS)
        {
          l = true;
          break;
        }
      }
      if(!l)
      {
        return l;
      }
    }
    return true;
  }
  
  
  public static void main(String args[])
  {
    Kattio sc = new Kattio(System.in, System.out);
    while(true)
    {
      int n = sc.getInt();
      if(n == 0) break;
      int m = n + 1;
      double[][] a = new double[n][m];
      for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < n; j++)
        {
          a[i][j] = sc.getDouble();
        }
      }
      for(int i = 0; i < n; i++)
      {
        a[i][n] = sc.getDouble();
      }
      int counter1 = 0;
      int counter2 = n-1;
      int counter4 = 1;
      double[] b = new double [n];
      int nullcounter = 0;
      if(!lausn(a, n))
      {
        System.out.println("inconsistent");
      }
      else if(!mult(a, n))
      {
        System.out.println("multiple");
      }
      else {
      for (int x = 0; x < n; x++)
      {
        double nytt = a[x][x];
        while( Math.abs(a[x][x]) < EPS && counter4<(n - x) )
        {
          for(int i = 0; i < m; i++)
          {
            double skipta = a[x+counter4][i];
            a[x+counter4][i] = a[x][i];
            a[x][i] = skipta;
            nytt = a[x][x];
          }
          counter4++;
        }
        if ( nytt != 0 )
        {
          for (int y = 0; y < m; y++)
          { 
            a[x][y] = (1/nytt)*a[x][y];
          }
          if(x < n-1)
          {
            for(int s = 0; s < counter2; s++)
            {
              if(counter1 < m && x + 1 + s < n)
              {
                double marg = a[x+1+s][counter1];
                for (int d = 0; d < m; d++)
                {
                  a[x+1+s][d] = a[x+1+s][d] - marg*a[x][d];
                }
              }
            }
            counter1++; 
            counter2--;
          }
        }
      }
      /*for(int k = 0; k < n; k++)
      {
        for(int j = 0; j < m; j++)
        {
          System.out.print(a[k][j] + "\t");
        }
        System.out.println();
      }*/
      if(!lausn(a, n))
      {
        System.out.println("inconsistent");
      }
      else if(!mult(a, n))
      {
        System.out.println("multiple");
      }
      else
      {
        int counter = 1;
        for(int q = n-1; q >=0; q--)
        {
          b[q]=a[q][m-1];
          int counter3 = 0;
          for(int r = 1; r < counter; r++)
          { 
            b[q] = b[q] - (a[q][m-1-r]*b[n-1-counter3]);
            counter3++; 
          }
          counter++;
        }
        for(int i = 0; i < n; i++)
        {
          System.out.printf("%.3f ", b[i]);
        }
        System.out.println();
      }
      } }
  }
}