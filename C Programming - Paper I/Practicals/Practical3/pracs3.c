/*Write a program to enter array element and display the contents of array?also find largest number in array and sum of all elements*/
#include <stdio.h>
int main()
{
    int i, n;
    float arr[100],sum;
    printf ("\n\tEnter total number of elements(1 to 100): \n");
    scanf("%d",&n);
    printf ("\n\tEnter Number \n");
    for(i = 0; i < n; ++i)
    {
       scanf("%f",&arr[i]);
    }
    sum= arr[0];
    for(i = 1;i < n; ++i)
    {
       arr[0]=(arr[0] > arr[i])?arr[0]:arr[i];
       sum = sum + arr[i];
    }
printf  ("\n\tLargest element = %.0f\tSum of all elements = %.0f \n", arr[0],sum);
    return 0;
}