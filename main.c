#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define row_size 3
#define col_size 3

int main()
{
    int a[row_size][col_size]={0}; //declaring the array  kokok
    int avcol[col_size]={0};       //auxiliary array to print the average of columns
    int i=0,j=0;
    int maxrow=0,maxcol=0,avrow=0,avracol=0;
    printf("Enter the array elements:\n");
    for (j=0;j<col_size;j++) // scanning ==> j as columns and i as rows
    {
        for(i=0;i<row_size;i++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    system("cls"); // clear the screen



  for (j=0;j<col_size;j++) // printing
    {
        maxrow = a[0][j];      //initial guess of the max element in a row
        avrow=0;        //nulling the average of a row to calculate the ave of another row
        for(i=0;i<row_size;i++)
        {
            if (maxrow < a[i][j]) maxrow=a[i][j];
            printf("%d\t",a[i][j]);        //printing the array
            avrow+=a[i][j];

        }
        printf("|%d\t%d",maxrow,avrow/row_size);   //printing the max elements and the average of each row

        printf("\n");
    }
    printf("________________________|\n");
    for (i=0;i<row_size;i++)
    {
        maxcol = a[i][0];      //initial guess of the max element in a column
        avracol=0;             //nulling the average of a column to calculate the ave of another column
        for(j=0;j<col_size;j++)
        {
            if (maxcol<a[i][j]) maxcol= a[i][j];
            avracol+=a[i][j];
            avcol[i]=avracol;
        }
        printf("%d\t",maxcol);

    }
    printf("\n");    // printing the ave of columns
    for(i=0;i<col_size;i++)
    {
        printf("%d\t",*(avcol+i)/col_size);
    }

  getch();
}
