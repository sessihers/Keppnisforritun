public class Peragrams
{
  public static void main(String [] args)
  {
    Kattio io = new Kattio(System.in, System.out);
    String ord = io.getWord();
    int l = ord.length();
    int [] fjoldi = new int [l];
    String [] stafir = new String[l];  
    for(int i = 0; i < l; i++)
    {
      stafir[i] = "" + ord.charAt(i);
      for(int j = 0; j <= i; j++)
      {
        if(stafir[j].equals(stafir[i]))
        {
          fjoldi[j]++;
          break;
        }
      }
    }
    int c = 0;
    int counter = 0;
    for(int i = 0; i < l; i++)
    {
      if(fjoldi[i]%2 == 0);
      else if(c == 0) c++;
      else counter++;
    }
    System.out.println(counter);
  }
}