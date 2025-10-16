#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()

{
    struct Demo obj;
    //printf("Size of Demo is : %d\n",sizeof(struct Demo));
    //printf("Size of object is : %d\n",sizeof(obj));

    obj.i = 11;
    obj.f = 90.4f;
    obj.j = 21;

    printf("%d\n",obj.i);
    printf("%f\n",obj.f);
    printf("%d\n",obj.j);




    return 0;
}