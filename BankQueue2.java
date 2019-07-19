import java.util.Scanner;

public class BankQueue2
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int T = sc.nextInt();
    int [][] cust = new int [N][2];
    int [] afgr = new int [T];
    for(int i = 0; i < N; i++)
    {
      cust[i][0] = sc.nextInt();
      cust[i][1] = sc.nextInt();
    }
    for(int i = 0; i < N; i++)
    {
      for(int t = 0; t < N-1;  t++)
      {
        if(cust[t][0] < cust[t+1][0])
        {
           int swap1 = cust[t][0];
           int swap2 = cust[t][1];
           cust[t][0] = cust[t+1][0];
           cust[t][1] = cust[t+1][1];
           cust[t+1][0] = swap1;
           cust[t+1][1] = swap2;
        }
          
      }
    }
    for(int i = 0; i < N; i++)
    {
      System.out.println(cust[i][0] + " " + cust[i][1]);
    }
  }
}