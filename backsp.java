import java.util.*;

public class backsp
{
  public static void main(String [] args)
  {
    Stack<String> stack = new Stack<String>();
    Scanner sc = new Scanner(System.in);
    String lina = sc.nextLine();
    int t = 0;
    int count = 0;
    for(int i = lina.length() - 1; i >= 0; i--)
    {
      if(lina.charAt(i) == '<')
      {
        t++;
      }
      else
      {
        i -= t;
        t = 0;
        if(i >= 0)
        {
          if(lina.charAt(i) != '<')
          {
            String pus = "" + lina.charAt(i);
            stack.push(pus);
            count++;
          }
          else
          {
            i++;
          }
        }
      }
    }
    for(int i = 0; i < count; i++)
    {
      System.out.print(stack.pop());
    }
    System.out.println();
  }
}