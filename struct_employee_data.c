// Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]

#include<stdio.h>
#include<string.h>

struct Employee* input_data(struct Employee *E);

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
   printf("id = %d, Name = %s, Salary = %d",ptr->id,ptr->name,ptr->salary);
   return 0;
}

struct Employee* input_data(struct Employee *E){
    printf("Enter Employee id, Name, and Salary\n");
    scanf("%d",&E->id);
    fflush(stdin);
    scanf("%s",&E->name);
    scanf("%d",&E->salary);
    return E;
}


