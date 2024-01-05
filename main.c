#include "lib.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
    printf("Enter value of rows");
    int row;
    scanf("%d", &row);

    printf("Enter value of columns");
    int col;
    scanf("%d", &col);

    int** array;
    getarray(row, col, &array);

      for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Array[%d][%d] = %d",i,j,array[i][j]);
        }
    }
}
