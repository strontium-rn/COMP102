//using pointer and array to count even and odd number
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int even_counter = 0;
    int odd_counter = 0;    
    for (int  i = 0; i < 10; i++)
    {
        if (*ptr % 2 == 0)
        {
            even_counter++;
        }
        else{
            odd_counter++;
        }
        ptr++;
    }  
    printf("The even number is %d\n", even_counter);
    printf("The odd number  is %d\n", odd_counter);    
}