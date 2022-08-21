// Write a program to store information of n students and display them using structure

#include<stdio.h>

struct students{
  int RN;
  char name[20];
};

int main(){
   
    int n;
    
    printf("Enter a number");
    scanf("%d",&n);

    struct students s[n];

     for (int i = 0; i <= n-1; i++)
    {
        printf("Enter RN  and  Name of Student\n");
        scanf("%d", &s[i].RN);
        fflush(stdin);
        scanf("%s", &s[i].name);
    }
     
    printf("\n"); 
    for(int i = 0;i<=n-1;i++){
        printf("RN = %d, Name = %s",s[i].RN,s[i].name);
        printf("\n");
    } 


    return 0;
}