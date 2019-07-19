public class IntegerList
{
  public static void main(String [] args)
  {
    Kattio sc = new Kattio(System.in, System.out);
    int n = sc.getInt();
    for(int i = 0; i < n; i++)
    {
      String s = sc.getWord();
      int sle = s.length();
      int lengd = sc.getInt();
      String list = sc.getWord();
      list = list.substring(1, list.length()-1);
      String [] a = list.split(",");
      boolean bool = true;
      int l = 0;
      int r = lengd - 1;
      boolean rev = false;
      for(int j = 0; j < sle; j++)
      {
        char ch = s.charAt(j);
        if(ch == 'R')
        {
          rev = !rev;
        }
        else
        {
          if(lengd == 0)
          {
            sc.println("error");
                  sc.flush();
            j = sle + 1;
            bool = false;
          }
          else
          {
            if(rev)
            {
              r--;
              lengd--;
            }
            else
            {
              l++;
              lengd--;
            }
          }
        }
      }
      if(bool)
      {
        if(!rev)
        {
          if(lengd == 0)
          {
            sc.println("[]");
                  sc.flush();
          }
          else
          {
            sc.print("[" + a[l]);
            for(int j = l + 1; j <= r; j++)
            {
              sc.print("," + a[j]);
            }
            sc.println("]");
                  sc.flush();
          }
        }
        else
        {
          if(lengd == 0)
          {
            sc.println("[]");
                  sc.flush();
          }
          else
          {
            sc.print("[" + a[r]);

            for(int j = r - 1; j >= l; j--)
            {
              sc.print("," + a[j]);
            }
            sc.println("]");
            sc.flush();
          }
        }
      }
    }
  }
}