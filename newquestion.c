#include <stdio.h>
int main()
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        
        if (i % 2 == 0)
        {

            for (int j = 0; j < 3; j++)
            {
                printf("%d ", mat[i][j]);
            }
        }
        else{
            for (int j = 2; j >=0; j--)
            {
                printf("%d ", mat[i][j]);
            }

        }
        printf("\n");
    }
}