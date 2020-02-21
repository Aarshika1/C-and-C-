/*
   CH-230-B
   a1_p3.c
   Aarshika Singh
   aa.singh@jacobs-university.de
*/
#include<stdio.h>
/*The # was missing before specifying the library*/
int main()
{
    float result;
    /*The result of division*/
    float a=5;
    float b=13.5;
    /*The variable a and b are decimals and should be defined as floats rather than integers*/
    result=a/b;
    printf("The result is %f\n",result);
    /*The result is going to be a float, thus %f is used instead of %d*/
    return 0;

}
