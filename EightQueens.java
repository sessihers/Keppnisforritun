import java.util.Scanner;

public class EightQueens
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int [] queens = new int [8];
    int c = 0;
    for(int i = 0; i < 8; i ++)
    {
      String s = sc.nextLine();
      for(int t = 0; t < 8; t ++)
      {
        if(s.charAt(t) == '*')
        {
          queens[i] = t;
          c++;
        }
        if(c > 1)
        {
          System.out.println("invalid");
          System.exit(0);
        }
      }
      for(int t = 1; t <= i; t++)
      {
        if(queens[i] == queens[i-t] || queens[i] == queens[i-t] + t|| queens[i] == queens[i-t] - t)
        {
          System.out.println("invalid");
          System.exit(0);
        }
      }
      c = 0;
    }
    System.out.println("valid");
  }
}
