import java.util.*;

class WordRemove
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String str = sobj.nextLine();

        str = str.trim();

       

       System.out.println("Enter the word you want to remove :");
       String Word = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
       str = str.replaceAll(Word,"");
        str = str.replaceAll("\\s+"," ");
       System.out.println("Updated String is :"+Word);


    }
}