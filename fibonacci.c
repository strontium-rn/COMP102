//fibonacci series in c
#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("Till which term do you want?:");
    scanf("%d", &n);
    printf("Fibonacci series:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibo(i));
    }
    
    return 0;
}
int fibo(int n){
    if (n <= 1)
    {
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }    
}