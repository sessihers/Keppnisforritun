import java.util.Scanner;

public class A1
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int MinSize = sc.nextInt();
    int [] A = new int [MinSize + 1];
    double lengd = 0;
    for(int i = 2; i <= MinSize; i++)
      A[i] = sc.nextInt();
    for(int i = 2; i >= MinSize; i++)
    {
      if(A[i] >=2)
      {
        A[i-1] += (A[i]/2);
        lengd += (double)(A[i]/2)*(double)Math.pow(2,((-2.0*i)+1.0)/4.0);
        if((1/Math.pow(2,i-1)*A[i]) ==1 )
        {
          System.out.println(lengd);
          System.exit(0);
        }
      }
    }
    System.out.println("impossible");
  }
}