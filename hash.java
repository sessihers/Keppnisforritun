import java.util.Hashtable;

public class hash
{
  public static void main(String [] args)
  {
  
   Hashtable<Integer, Integer> numbers
     = new Hashtable<Integer, Integer>();
   numbers.put(1, 3);
   numbers.put(2, 5);
   numbers.put(3, 7);
   Integer n = numbers.get(2);
   if (n != null) {
     System.out.println("two = " + n);
   }
    
  }
}
  