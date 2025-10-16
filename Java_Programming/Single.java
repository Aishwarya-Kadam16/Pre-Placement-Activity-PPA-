class Base
{
    public int i , j;

        void fun()
        {
            System.out.println("Inside Base fun \n");
        }
}

class Derived extends Base
{
    public int x;

        void gun()
        {
            System.out.println("Inside Derived gun \n");
        }
}

class Single
{
    public static void main(String A[])
    {
        Base bobj = new Base();
        Derived dobj = new Derived();

        bobj.fun();
        dobj.fun();
        dobj.gun();

    }
}