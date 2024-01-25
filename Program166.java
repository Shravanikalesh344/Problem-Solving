import java.io.*;

class Program166
{
    public static void main(String arg[]) throws Exception
    {

       BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iNo1 = 0 , iNo2 = 0;
        int iAns = 0;
        System.out.println("Enter First NUmber");
        iNo1 = Integer.parseInt(bobj.readLine());

        System.out.println("Enter Second NUmber");
        iNo2 = Integer.parseInt(bobj.readLine());

        iAns = iNo1 + iNo2;
        System.out.println("Addtion is :"+iAns);

    }
}