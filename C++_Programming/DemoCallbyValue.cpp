#include<iostream>
using namespace std;

void fun(int no)
{
    cout<<"no\n";
    no++;
    cout<<no<<"\n";
}
int main()
{
    
        int i=10;
        fun(i);
        cout<<i;
}