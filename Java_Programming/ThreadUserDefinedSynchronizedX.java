class TablePrinter
{
    public void printTable(int n)
    {
        int i =0;
        for(i=1;i<=10;i++)
        {
            System.out.println("Name :"+Thread.currentThread().getName()+" :"+n*i);
        }
    }
}

class Demo extends Thread
{
    public void run()
    {
        public TablePrinter tobj;
        public int no;

        public Demo(TablePrinter t, int n, String name)
        {
            tobj = t;
            no = n;
            setName = name;
        }

        public void run()
        {
            tobj.printTable(no);
        }
        

    }
}

class ThreadUserDefinedSynchronizedX
{
    public static void main(String A[]) 
    {
        TablePrinter tobj = new TablePrinter();

        Demo dobj1 = new Demo(tobj,4,"First");
        Demo dobj2 = new Demo(tobj,5,"Second");
        dobj1.start();
        dobj2.start();

        try
        {

        dobj1.join();
        dobj2.join();
        }

        catch(InterruptedException iobj)
        {}


    
    }
}