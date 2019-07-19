import java.util.Scanner;

public class DifferentProblem
{
  public static void main(String [] agrs)
  {
    Scanner sc = new Scanner(System.in);
    while(sc.hasNext())
    {
      long a = sc.nextLong();
      long b = sc.nextLong();
      System.out.println(Math.abs(a-b));
    }
    
  }
}