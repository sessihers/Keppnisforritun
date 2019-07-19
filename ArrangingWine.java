import java.util.Scanner;

public class ArrangingWine
{
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int R = sc.nextInt();
    int W = sc.nextInt();
    int d = sc.nextInt();
    int fjoldiumr = 0;
    int sk = R+W;
    for(int i = 0; i < sk; i++)
    {
      if(R >= 1 && W >= 1)
      {
        if(i % 2 == 0)
        {
          R--;
          fjoldiumr += i;
          if(d > 1 && i > 1) 
          {
          fjoldiumr += i;
          d--;
          }
        }
        else
        {
          W--;
          fjoldiumr += 2*i;
        }
      }
      
    }
    System.out.println(fjoldiumr);
    
  }
}