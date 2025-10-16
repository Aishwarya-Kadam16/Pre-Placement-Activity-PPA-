#include<iostream>
using namespace std;

int main()
{
    int length =0;
    int *Arr = NULL;

    cout<<"Enter the no. of Elements\n";
    cin>>length;

    //Step 1: Allocate the memory
    Arr = new int[length];

    if (Arr == NULL)
    {
        cout<<"Unable to allocate the memmory\n";
    }

    else
    {

        cout<<"Memory gets successfully allocated\n";
    }

    //Step2: USe the _MEMORY

    //Step3: Deallocate the memory

    delete [] Arr;

    return 0;
}