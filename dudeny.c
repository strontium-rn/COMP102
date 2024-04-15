#include<stdio.h>
int main(){
    int n,rem,sum=0,ans, temp;
    printf("Enter the number:");
    scanf("%d", &n);
    temp = n;
    while (n!=0)
    {
       rem = n % 10;
       sum = sum + rem;
       n = n /10;
    }
    ans = sum*sum*sum;
    if (ans == temp)
    {
        printf("Number is dudeny");
    }
    else{
        printf("Not dudeny");
    }

}