//swaping variables using pointer
#include<stdio.h>
void swap(int *a, int *b){
    int  temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a =5, b=6;
    swap(&a, &b);
    printf("After swapping a=%d and b=%d",a,b);
}