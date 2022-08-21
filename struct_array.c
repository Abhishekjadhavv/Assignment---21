// Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]

#include<stdio.h>
#include<string.h>

struct Employee highest_salary(struct Employee *E,int size);

struct Employee
{
    int id;
    int salary;
    char name[20];

};

int main(){
    
   struct Employee E[10];
    
    for(int i = 0;i<=9;i++){
       printf("Enter id, Name, and Salary of Employee\n");
       scanf("%d",&E[i].id);
       fflush(stdin);
       scanf("%s",&E[i].name);
       scanf("%d",&E[i].salary);
    }

    highest_salary(E,10);
   
   return 0;
}

struct Employee highest_salary(struct Employee *E,int size)
{

    int max_salary = 0;
    int index = 0;
    for(int i = 0;i<size;i++){
       if(max_salary< (E+i)->salary ){
           max_salary = (E+i)->salary;
           index = i;
       }
    }
   printf("Id = %d, Name = %s, and Salary = %d",(E+index)->id,(E+index)->name,(E+index)->salary); 
  
}