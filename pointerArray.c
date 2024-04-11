//using pointer and array to calculate sum of first 10 natural numbers
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int sum = 0;    
    for (int  i = 0; i < 10; i++)
    {
        sum += *ptr++;
    }  
    printf("The total sum is %d\n", sum);
    
}