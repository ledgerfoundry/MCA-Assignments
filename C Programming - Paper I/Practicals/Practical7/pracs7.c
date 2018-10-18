/*Write a program to enter a 3 X 3 matrix and perform matrix addition and display result of addition.*/
#include <stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    // printf("Enter number of rows (between 1 and 100): ");
    // scanf("%d", &r);
    r=c=3;
    // printf("Enter number of columns (between 1 and 100): ");
    // scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element row[%d] column[%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element row[%d] column[%d]: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }

    // Adding Two matrices

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    // Displaying the result
    printf("\n\tSum of the matrices are :\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("\t%d",sum[i][j]);

            if(j==c-1)
            {
                printf("\n");
            }
        }

    return 0;
}
