#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *arr = NULL;



    //Step 1 = Allocate the menory
    arr =(int *) malloc (5* sizeof(int));  //20

    
    //Step2 = Use the memory
    arr=(int *)realloc(arr,3 * sizeof(int));

    //Step 3= Free the memory

    free(arr);


    return 0;
}