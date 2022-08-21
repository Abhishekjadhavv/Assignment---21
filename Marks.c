// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

#include <stdio.h>

struct Marks
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

void display(struct Marks M[], int size)
{
    int sum = 0, percentage = 0;

    for (int i = 0; i <= size - 1; i++)
    {
        sum = M[i].chem_marks + M[i].maths_marks + M[i].phy_marks;
        percentage = sum / 3;
        printf("Name = %s, percentage = %d", M[i].name, percentage);
        printf("\n");
    }
}

int main()
{

    struct Marks M[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Roll No, Name, chem_marks, maths_marks, and phy_mark of a student\n");
        scanf("%d", &M[i].roll_no);
        fflush(stdin);
        scanf("%s", &M[i].name);
        scanf("%d", &M[i].chem_marks);
        scanf("%d", &M[i].maths_marks);
        scanf("%d", &M[i].phy_marks);
    }
    display(M, 5);
    return 0;
}
