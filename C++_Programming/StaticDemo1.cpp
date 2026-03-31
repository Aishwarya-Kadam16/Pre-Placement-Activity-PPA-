#include<iostream>
using namespace std;


class Demo
{
    public:
        int i;
        int j;
        static int x;

        Demo()
        {
            this->i=0;
            this->i=0;
        }

        Demo(int a,int b)

        {
            this->i=a;
            this->j=b;
        }
        
        void fun()   //void fun(Demo * const this)
        {
            cout<<"Inside fun\n";
        }

        static void gun()  //static void Gun()
        {
            cout<<"Inside Gun\n";



        }
};

int Demo::x=11;

int main()
{
    Demo::gun();
    cout<<"Value of x is: "<<Demo::x<<"\n";



    return 0;
}