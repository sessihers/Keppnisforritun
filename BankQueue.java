import java.util.Scanner;

public class BankQueue
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int T = sc.nextInt();
    int [] afgr = new int[T];
    for(int i = 0; i < N; i++)
    {
      int mon = sc.nextInt();
      int pen = sc.nextInt();
      if(pen < i)
      {
        int c = pen;
        while(mon < afgr[pen])
        {
        }
      }
    }
    
  }
}