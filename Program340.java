import java.util.*;
import java.io.*;


class Program340
{
    public static void main(String arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String :");
       String str = sobj.nextLine();

       str = str.trim();

       System.out.println("After trim :"+str);

       str = str.replaceAll("\\s+"," ");

       System.out.println("After replaceALL :"+str);

       String words[] = str.split(" ");

       System.out.println("Number of words in the sentence are :"+words.length);

       for(int i = 0; i <words.length ; i++)
       {
            System.out.println(words[i]);
       }

    }
      

}