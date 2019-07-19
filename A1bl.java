import java.util.Scanner;


public class A1bl
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int MinSize = sc.nextInt();
    int [] A = new int [MinSize + 1];
    double lengd = 0;
    double total = 0;
    int div = 2;
    for(int i = 2; i <= MinSize; i++)
      A[i] = sc.nextInt();
    double ummal = 2*(Math.pow(2,((-3.0)/4.0)) + Math.pow(2,((-5.0)/4.0)));
    double ummalA1 = Math.pow(2, 0.5)*ummal;
    for(int i = 2; i <= MinSize; i++)
    {
      if(A[i]*(1.0/div) + total < 1)
      {
        lengd += A[i] * ummal;
        ummal *= Math.pow(2, -0.5);
        total += A[i]*(1.0/div);
        div *= 2;
      }
      else
      {
        int take = (int)((1 - total)*div);
        lengd += take * ummal;
        total += take*1.0/div;
      }
    }
    if(total == 1)
    {
      lengd = (lengd - ummalA1) / 2;
      System.out.println(lengd);
    }
    else
    {
      System.out.println("impossible");
    }
  }
}