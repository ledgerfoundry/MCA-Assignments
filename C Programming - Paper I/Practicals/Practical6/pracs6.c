/*Write a program to enter array elements and display content of array; also arrange array elements in descending order and display.*/
#include <stdio.h>
   void main ()
   {

       int number[30];

       int i, j, a, n;
       printf("Enter number of elements in array\n");
       scanf("%d", &n);

       printf("Enter the elements \n");
       for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

       /*  sorting begins ... */

       for (i = 0; i < n; ++i)
       {
           for (j = i + 1; j < n; ++j)
           {
               if (number[i] < number[j])
               {
                   a = number[i];
                   number[i] = number[j];
                   number[j] = a;
               }
           }
       }

       printf("The elements in descending order\t");

       for (i = 0; i < n; ++i)
       {
           printf(" %d", number[i]);
       }

   }
