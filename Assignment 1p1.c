/*
   CH-230-B
   a1_p1.c
   Aarshika Singh
   aa.singh@jacobs-university.de
*/
#include<stdio.h>
int main()
{
    double result;
    /*The result of our calculation*/
    result = (3.0+1.0)/5.0;
    printf("The value of 4/5 is %.2f\n",result);
    return 0;
/*The value of being computed as 0.000 because the variable result was declared as double float but computer
considers 3 and 1 as integer value. To do the mathematical operations on decimals we need to write them
as 3.0 and 1.0 instead of 3 and 1*/
}
