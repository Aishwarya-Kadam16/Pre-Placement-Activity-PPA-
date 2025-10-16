class Demo
{
    public int iNo1;
    public int iNo2;


    public Demo()
    {
        System.out.println("Inside default Constructor");
    }
    public Demo(int i , int j)
    {
        System.out.println("Inside parameterized Constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside finalize");
    }
}


class ConstructorDestructor
{
    public static void main(String Arg[])
    {
        Demo dobj1 = new Demo();

        Demo dobj2 =new Demo(11,21);

        dobj1 = null;
        dobj2 = null;

        

        System.gc();
        System.out.println("End of main");
    }
}