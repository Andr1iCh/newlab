#include <stdlib.h>
#include<stdio.h>
#include "lib.h"

void getarray(int row, int col, int*** array)
{
    *array = (int**) malloc (row * sizeof(int*));
    for(int i = 0; i < row; i++)
    {
        (*array)[i] = (int*) malloc (col * sizeof(int));
    }

    //assignment

    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            (*array)[i][j] = rand() % 10;
        }
    }
}