public class fylki3
{
   private static String[] aux;
   public static void merge(String[] a, int lo, int mid, int hi)
   {
     int i = lo, j = mid+1;
     for (int k = lo; k <= hi; k++)
        aux[k] = a[k];
     for (int k = lo; k <= hi; k++)
     {
        if      (i > mid)              a[k] = aux[j++];
        else if (j > hi )              a[k] = aux[i++];
        else if (aux[j].compareTo(aux[i]) < 0) a[k] = aux[j++];
        else                           a[k] = aux[i++];
     }
   }
   public static void sort(String[] a)
   {
      aux = new String[a.length];
      sort(a, 0, a.length - 1);
   }
   private static void sort(String[] a, int lo, int hi)
   {
        if (hi <= lo) return;
        int mid = lo + (hi - lo)/2;
        sort(a, lo, mid);
        sort(a, mid+1, hi);
        merge(a, lo, mid, hi);
  }

  public static String finna(String [] a, String [] b, String [] c)
  {
    sort(a);
    sort(b);
    sort(c);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < a.length)
    {
      while(a[i].compareTo(b[j]) > 0 && j < b.length)
      {
        j++;
      }
      if(a[i].equals(b[j]))
      {
        while(a[i].compareTo(c[k]) > 0 && k < c.length)
        {
          k++;
        }
        if(a[i].equals(c[k]))
        {
          return a[i];
        }
      }
      i++;
    }
    return "-1";
  }


  public static void main(String [] args)
  {
    String [] a = {"sesar", "teitur", "jon", "arni", "rykkur"};
    String [] b = {"sesar", "þykkur", "gunnar", "sessi", "franskar"};
    String [] c = {"sesar", "teitur", "api", "netti", "franskar"};
    System.out.println(finna(a, b, c));
  }
}
