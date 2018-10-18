// write a program to enter array elements and display content of array ; also find smallest number from array and sum of array?
#include <stdio.h>
int main()
{
    int i, n;
    float arr[100],sum;

    printf("\n\tEnter total number of elements(1 to 100): \n");
    scanf("%d",&n);
    printf("\nEnter Number\n");
    for(i = 0; i < n; ++i)
    {
       printf("%d :  ",i);
       scanf("%f",&arr[i]);
    }
        sum= arr[0];
    for(i = 1;i < n; ++i)
    {
       arr[0]=(arr[0] < arr[i])?arr[0]:arr[i];
       sum = sum + arr[i];
    }
    printf("\nSmallest element = %.0f\tSum of all elements = %.0f\n",arr[0],sum);
    return 0;
}