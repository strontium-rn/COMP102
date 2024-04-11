//WAP that defines a structure called student with suitable attributes of 5 students.The progran should access the structure member using
//pointer and display the records in ascending order according to the enrolled_year of the student.
#include<stdio.h>

struct student{
    char name[20];
    int roll_no;
    char email[30];
    int enrolled_year;
};

void displayStudents(struct student *s){
    printf("Name:%s", s->name);
    printf("Roll No:%d", s->roll_no);
    printf("Email:%d", s->email);
    printf("Enrolled Year:%d", s->enrolled_year);
}

int main(){
    struct student std[5];
    struct student *ptr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name:");
        scanf("%s", std[i].name);
        printf("Enter Roll No:");
        scanf("%d", &std[i].roll_no);
        printf("Enter Email:");
        scanf("%s", std[i].email);
        printf("Enter Enrolled Year:");
        scanf("%d", &std[i].enrolled_year);
    }
    
    //sorting by the enrolled year
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; i++)
        {
            if (std[i].enrolled_year > std[j].enrolled_year)
            {
                struct student temp = std[i];
                std[i]=std[j];
                std[j] = temp;
            }
            
        }
        
    }
    //displaying student information
    printf("Sorted order\n");
    for (int i = 0; i < 5; i++)
    {
        ptr = &std[i];
        displayStudents(ptr);
        
    }

    return 0;

}