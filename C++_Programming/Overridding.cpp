#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }

        void gun()
        {
            cout<<"Inside Base gun\n";
        }

        virtual void sun()
        {
            cout<<"Inside Base sun\n";
        }

        virtual void bun()
        {
            cout<<"Inside Base bun\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }

        void sun()
        {
            cout<<"Inside Derived sun\n";
        }

        virtual void run()
        {
            cout<<"Inside Derived run\n";
        }

};

int main()
{
    Base *bp1 = new Base;
    Derived *dp1 = new Derived;
    Base *bp2 = new Derived;
    //Derived *dp2 = new Base;

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp2 -> fun();
    bp2 -> gun();
    bp2 -> sun();
    bp2 -> bun();

    return 0;

}