//matrix addition
#include<stdio.h>
int main(){
    int a[2][3], b[2][3], c[2][3], i,j;
    printf("Enter first matrix:");{
        for ( i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &a[i][j]);
            }
            
        }
        
    }
    printf("Enter second matrix:");
         for ( i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &b[i][j]);
            }
            
        }
    printf("The added matrix is:");
        for( i = 0; i < 2; i++)
        {
            for (j = 0; i < 3; j++)
            {
                c[i][j] = a[i][j]+b[i][j];
                printf("%d", c[i][j]);
            }
            printf("\n");
            
        }
        
}