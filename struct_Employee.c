// Define a structure Employee with member variables id, name, salary

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    int salary;
    char name[20];

};

int main(){
   struct Employee E;

   E.id = 1;
   strcpy(E.name,"Abhishek");
   E.salary = 25000;

   printf("id = %d, Name = %s, Salary = %d",E.id,E.name,E.salary);
   
   return 0;
}

