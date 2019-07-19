import java.util.Scanner;

public class A1bl2
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int MinSize = sc.nextInt();
    int [] A = new int [MinSize + 1];
    double lengd = 0;
    double total = 0;
    for(int i = 2; i <= MinSize; i++)
      A[i] = sc.nextInt();
    for(int i = 2; i <= MinSize; i ++)
    {
      if(total != 1)
      {
        if(A[i] % 2 == 0 && A[i] != 0)
        {
          total += (A[i]/2)*(double)(1.0/(Math.pow(2.0,(1.0*i)-1.0)));
          lengd += A[i]*(double)Math.pow(2,((-2.0*i)+1.0)/4.0);
        }
        else if(A[i] == 1)
        {
          total += (double)(1.0/(Math.pow(2.0,(1.0*i)-1.0)));
          lengd += A[i]*(double)Math.pow(2,((-2.0*i)+1.0)/4.0);
        }
        else if(A[i] == 0)
        {
        }
        else
        {
          total += ((A[i]/2)*(double)(1.0/(Math.pow(2.0,(1.0*i)-1.0)))
            + (double)(1.0/(Math.pow(2.0,(1.0*i)-1.0))));
          lengd += A[i]*(double)Math.pow(2,((-2.0*i)+1.0)/4.0);
        }
      }
      else if(total == 1)
      {
        System.out.println(lengd);
      }
      else
      {
        System.out.println("impossible");
      }
    }
  }
}