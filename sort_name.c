// Write a function to sort employees according to their names [refer structure from
// question 1]


#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    int salary;
    char name[20];
};


void Sort_Array(struct Employee E[], int size)
{

    int round;
    struct Employee temp;

    for (round = 1; round <= 4; round++)
    {
        for (int i = 0; i < size - round; i++)
        {
             if(strcmp(E[i].name,E[i+1].name) == 1){
                    temp = E[i];
                    E[i] = E[i+1];
                    E[i+1] = temp;
             }

        }
    }
}

int main()
{

    struct Employee E[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter id, Name, and Salary of Employee\n");
        scanf("%d", &E[i].id);
        fflush(stdin);
        scanf("%s", &E[i].name);
        scanf("%d", &E[i].salary);
    }

    Sort_Array(E, 5);
    printf("\n"); 
    for(int i = 0;i<=4;i++){
        printf("Id = %d, Name = %s, and Salary = %d",E[i].id,E[i].name,E[i].salary);
        printf("\n");
    }

    return 0;
}

