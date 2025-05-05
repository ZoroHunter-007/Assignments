#include<stdio.h>
int inputMatrix(int rows,int cols,int matrix[10][10],char name)
{
    printf("Enter a elemnet of matrix %c(%dx%d):\n",name,rows,cols);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("\nEnter a element[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
int printMatrix(int rows,int cols,int matrix[10][10])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int rows,cols;
    int matrixA[10][10],matrixB[10][10],result[10][10];
    printf("\nEnter a rows and columns:");
    scanf("%d %d",&rows,&cols);

    inputMatrix(rows,cols,matrixA,'A');
    inputMatrix(rows,cols,matrixB,'B');

    //addition of matrix
    printf("\nAdditon of matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            result[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
    printMatrix(rows,cols,result);
    //subtraction of matrix
    printf("\nSubtraction of matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            result[i][j]=matrixA[i][j]-matrixB[i][j];
        }
    }
    printMatrix(rows,cols,result);

    //multiplication of matrix
    printf("\nMultiplication of matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            result[i][j]=matrixA[i][j]*matrixB[i][j];
        }
    }
    printMatrix(rows,cols,result);

    //Division of matrix
    printf("\nDivision of matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrixB[i][j]!=0)
            {
            result[i][j]=matrixA[i][j]/matrixB[i][j];
            }
            else{
                printf("\nYou can't matrix divided by zero");
            }
        }
    }
    printMatrix(rows,cols,result);
}