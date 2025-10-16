#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length=0;
    int *arr = NULL;

    printf("Enter the No. of elements \n");
    scanf("%d",&length);

    //Step 1 = Allocate the menory
    arr =(int *) calloc (length , sizeof(int));

    if(arr == NULL)
    {
        printf("Unable to allocate memory\n");

    }
    else
    {

        printf("Memory gets successfully allocated");
    }

    //Step2 = Use the memory

    //Step 3= Free the memory

    free(arr);


    return 0;
}