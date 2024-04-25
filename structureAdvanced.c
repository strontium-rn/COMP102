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
    printf("Name:%s\n", s->name);
    printf("Roll No:%d\n", s->roll_no);
    printf("Email:%s\n", s->email);
    printf("Enrolled Year:%d\n", s->enrolled_year);
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
        for (int j = i+1; j < 5; j++)
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
