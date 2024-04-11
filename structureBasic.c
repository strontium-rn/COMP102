//using structure to store value of 5 employes including their id, name and salary
#include<stdio.h>
struct employee{
    int id;
    char name[30];
    float salary;
}e[5];
 
int main(){
    printf("Enter id, name and salary:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }
    printf("You entered:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d %s %f\n", e[i].id, e[i].name, e[i].salary);
    }
    return 0;   
}