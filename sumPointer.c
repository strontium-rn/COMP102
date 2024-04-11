//c program to find sum of two numbers using pointer
#include<stdio.h>
int add(int *a, int*b);
int main(){
    int a , b, sum;
    int *pa = &a , *pb = &b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    sum=add(pa, pb);
    printf("The sum is %d", sum);
    return 0;
}
int add(int*a, int*b){
    int c;
    c = *a +*b;
    return c;
}