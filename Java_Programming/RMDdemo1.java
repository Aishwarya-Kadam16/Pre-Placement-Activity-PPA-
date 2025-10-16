class Base
{
    public int i,j;
}
class Derived extends Base{
    public int x;

}

class RMDdemo1
{
    public static void main(String a[])
    {
        Base bp1 = new Base(); //Nocasting
        Derived dp1 = new Derived();
        Base bp2 = new Derived(); //upcasting
        Derived dp2 = new Base();  //downcasting  Error
    }
}