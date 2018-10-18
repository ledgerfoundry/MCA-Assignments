/*Write a program to enter 3 numbers and find the larger number out of it.*/
#include <stdio.h>
int main()
{
    double input_1, input_2,input_3,output ;

    printf("\n\tEnter three numbers: \n");
    scanf("%lf %lf %lf", &input_1, &input_2, &input_3);
    output=(input_1>input_2)?input_1:input_2;
    output=(output>input_3)?output:input_3;
            printf("\n %.2lf is the largest number among all \n",output);
    return 0;
}
