#include <stdio.h>
#include <stdlib.h>

//Objetive: Fill a square matrix with integers and sum up all the numbers in its diagonal

int main(){

    int sum = 0;
    int matSize;

    //Asks for the user to insert the size of the matrix
    do
    {
        printf("Please enter the size (an integer greater than 0) of the square matrix you want to create...\n");
        scanf("%d", &matSize);
    }  while (matSize <= 0);
    
    int matrix[matSize][matSize];

    //Fills the matrix
    for (int i = 0; i < matSize; i++)
    {
        for (int j = 0; j < matSize; j++)
        {
            printf("Enter an integer for row %d and column %d: \n", i, j);          
            scanf("%d", &matrix[i][j]);
        }
    }

    //Prints the matrix for easier visualization of the diagonal
    for (int i = 0; i < matSize; i++) 
    {
        printf("[");

        for (int j = 0; j < matSize; j++)
        {          
            printf("%d", matrix[i][j]);
        }

        printf("]");
        printf("\n");
    }  

    //Sums up the diagonal
    for (int i = 0; i < matSize; i++)
    {
        sum += matrix[i][i];
    }

    printf("The sum of the main diagonal is: %d", sum);

    return 0;
}