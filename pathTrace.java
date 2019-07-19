import java.util.Scanner;

public class pathTrace
{
  public static void main(String [] args)
  {
    Kattio io = new Kattio(System.in, System.out);
    char [][] a = new char[1001][1001];
    int rowMax = 500;
    int rowMin = 500;
    int colMax = 500;
    int colMin = 500;
    int x = 500;
    int y = 500;
    for(int i = 0; i < 1001; i++)
    {
      for(int j = 0; j < 1001; j++)
      {
        a[i][j] = ' ';
      }
    }
    a[x][y] = 'S';
    String move = " ";
    while(io.hasMoreTokens())
    {
      move = io.getWord();
      if(move.equals("down"))
      {
        x++;
        if(x > rowMax)
        {
          rowMax = x;
        }
      }
      else if(move.equals("up"))
      {
        x--;
        if(x < rowMin)
        {
          rowMin = x;
        }
      }
      else if(move.equals("left"))
      {
        y--;
        if(y < colMin)
        {
          colMin = y;
        }
      }
      else if(move.equals("right"))
      {
        y++;
        if(y > colMax)
        {
          colMax = y;
        }
      }
      else
      {
        break;
      }
      if(a[x][y] != 'S')
      {
        a[x][y] = '*';
      }
    }
    if(x == 500 && y == 500)
    {
      System.exit(0);
    }
    a[x][y] = 'E';
    char [][]b = new char[(rowMax - rowMin) + 3][(colMax - colMin + 3)];
    for(int i = 0; i < (colMax - colMin) + 3; i++)
    {
      b[0][i] = '#';
    }
    for(int i = 1; i < (rowMax - rowMin) + 2; i++)
    {
      for(int j = 0; j < (colMax - colMin) + 3; j++)
      {
        if(j == 0 || j == (colMax - colMin) + 2)
        {
          b[i][j] = '#';
        }
        else
        {
          b[i][j] = a[rowMin + i - 1][colMin + j - 1];
        }
      }
    }
    for(int i = 0; i < (colMax - colMin) + 3; i++)
    {
      b[rowMax - rowMin + 2][i] = '#';
    }
    for(int i = 0; i < rowMax - rowMin + 3; i++)
    {
      for(int j = 0; j < colMax - colMin + 3; j++)
      {
        System.out.print(b[i][j]);
      }
      System.out.println();
    }
  }
}