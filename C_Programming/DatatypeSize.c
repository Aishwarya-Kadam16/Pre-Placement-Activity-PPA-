#include<stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;

    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fValue);
    printf("%lf\n",dValue);

    printf("Size of Character is : %lu\n", Sizeof(cValue));
    printf("Size of Character is : %lu\n", Sizeof(iValue));
    printf("Size of Character is : %lu\n", Sizeof(fValue));
    printf("Size of Character is : %lu\n", Sizeof(dValue));


    return 0;
}