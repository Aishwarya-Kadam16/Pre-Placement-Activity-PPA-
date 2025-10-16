import java.util.Scanner;
class Dynamic
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int length =0;

        int Arr[];

        System.out.println("enter the no. of elements:");
        length = sobj.nextInt();


        Arr = new int[length];

        if (Arr == null)
        {
            System.out.println("Unable to allocate memory");

        } 
        else 
        {
            System.out.println("Memory gets Successfully Allocated");

        }

        Arr = null;
        System.gc();

    }
}