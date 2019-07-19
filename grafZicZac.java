public class grafZicZac
{
  public static void main(String [] args)
  {
    int n = StdIn.readInt();
    StdDraw.setPenRadius(0.001);
    StdDraw.setPenColor(StdDraw.BLACK);
    StdDraw.setXscale(-1, n);
    StdDraw.setYscale(0, 10);
    double prev = 0;
    double i = 0;
    while(!StdIn.isEmpty())
    {
      double y = StdIn.readDouble();
      StdDraw.point(i, y);
      StdDraw.line(i-1, prev, i, y);
      prev = y;
      i++;
    }
  }
}