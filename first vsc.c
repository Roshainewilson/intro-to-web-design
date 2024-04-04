
#include<stdio.h>
#define SIZE 2

struct Student
{
    int ID;
    char name[30];
};
void Display(struct Student[]);
int main()
{
    struct Student s[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter student ID: ");
        scanf("%d",&s[i].ID);
        fflush(stdin);
        printf("Enter student name: ");
        gets(s[i].name);
    }
        
    Display(s);
    return 0;    
}
void Display(struct Student s[SIZE])
{
    printf("ID\tName\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\t%s\n",s[i].ID, s[i].name);
    }
}