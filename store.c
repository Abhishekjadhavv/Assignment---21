// Write a program to store information of 10 students and display them using structure.

#include<stdio.h>

struct students{
  int RN;
  char name[20];
};

int main(){
  
   struct students s[10];

     for (int i = 0; i <= 9; i++)
    {
        printf("Enter RN  and  Name of Student\n");
        scanf("%d", &s[i].RN);
        fflush(stdin);
        scanf("%s", &s[i].name);
    }
     
    printf("\n"); 
    for(int i = 0;i<=9;i++){
        printf("RN = %d, Name = %s",s[i].RN,s[i].name);
        printf("\n");
    } 


    return 0;
}