import java.util.Scanner;

public class quickSort
{

  public static void insertionSort(double[] a, int lo, int hi)
  {
     int N = a.length;
     for (int i = 1; i < N; i++)
     {
        for (int j = i; j > 0 && a[j] < a[j-1]; j--)
           exch(a, j, j-1);
     }
  }
  public static void exch(double [] a, int i, int j)
  {
    double ch = a[i];
    a[i] = a[j];
    a[j] = ch;
  }
  private static int partition(double[] a, int lo, int hi)
  {
    int i = lo, j = hi+1;
    double v = a[lo];
    while (true)
    {
       while (a[++i] < v) if (i == hi) break;
       while (v < a[--j]) if (j == lo) break;
       if (i >= j) break;
       exch(a, i, j);
    }
    exch(a, lo, j);
    return j;
  }
  public static void sort(double[] a, int M)
  {
    StdRandom.shuffle(a);
    sort(a, 0, a.length - 1, M);
  }
  private static void sort(double[] a, int lo, int hi, int M)
  {
     if (hi <= lo) return;
     if((hi - lo) + 1 <= M) insertionSort(a, lo, hi);
     else {
       int j = partition(a, lo, hi);
       sort(a, lo, j-1, M);
       sort(a, j+1, hi, M);
     }
  }

  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    double [] a = new double[N];
    System.out.println("N: " + N);
    for(int i = 0; i < N; i++)
    {
      a[i] = StdRandom.uniform();
    }
    double [] timar = new double[31];
    double max = 0;
    for(int i = 0; i <= 30; i++)
    {
      double heild = 0;
      for(int j = 0; j < 100; j++)
      {
        long start = System.currentTimeMillis();
        sort(a, i);
        long stop = System.currentTimeMillis();
        heild += (stop - start);
      }
      timar[i] = heild/100;
      if(timar[i] > max)
      {
        max = timar[i];
      }
    }
    StdDraw.setXscale(0, max*1.1);
    StdDraw.setYscale(0, max*1.1);
    StdStats.plotBars(timar);
  }
}
