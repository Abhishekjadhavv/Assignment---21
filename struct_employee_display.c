// Write a function to display employee data. [ Refer structure from question 1 ]

#include<stdio.h>
#include<string.h>

struct Employee* input_data(struct Employee *E);
void display_Data(struct Employee *ptr);

struct Employee
{
    int id;
    int salary;
    char name[20];

};

int main(){
   struct Employee E;
   struct Employee *ptr;
   ptr = input_data(&E);  
   display_Data(ptr);
   return 0;
}

void display_Data(struct Employee *ptr)
{
    printf("id = %d, Name = %s, Salary = %d",ptr->id,ptr->name,ptr->salary);
}


struct Employee* input_data(struct Employee *E){
    printf("Enter Employee id, Name, and Salary\n");
    scanf("%d",&E->id);
    fflush(stdin);
    scanf("%s",&E->name);
    scanf("%d",&E->salary);
    return E;
}


