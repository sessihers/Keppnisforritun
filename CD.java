import java.util.Scanner;
import java.util.Hashtable;

public class CD
{
  public static void main(String [] args)
  {
    Kattio io = new Kattio(System.in, System.out);
    int N = 0;
    int M = 0;
    while(true)
    {
      N = io.getInt();
      M = io.getInt();
      if(N == 0 && M == 0)
        break;
      int counter = 0;
      Hashtable<Integer, Integer> jack = new Hashtable<Integer, Integer>();
      for(int i = 0; i < N; i++)
      {
        int a = io.getInt();
        jack.put(a, 1);
      }
      for(int i = 0; i < M; i++)
      {
        int a = io.getInt();
        Integer n = jack.get(a);
        if(n != null)
          counter++;
      }
      System.out.println(counter);
      jack.clear();
    }

    
  }
}