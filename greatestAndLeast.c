//to find and greatest and least number in an array
#include<stdio.h>
int main(){
    int size, great, least;
    int arr[10];
    printf("Enter the size of array (max10):");
    scanf("%d", &size);


    printf("Enter elements of the array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    great = arr[0];
    least = arr[0];
    
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > great)
        {
            great = arr[i];
        }
        if (arr[i] < least)
        {
            least = arr[i];
        }       
        
    }
    printf("The greatest integer is %d\n", great);
    printf("The least integer is :%d\n", least);

    return 0;
}