#include<stdio.h>
#include<string.h>
struct student
{
    char name [20];
    int roll;
    char sec;
    float marks;
};
struct student s;
void main()
{
    printf("enter name\n");
    scanf("%s",s.name);
    printf("enter roll no\n");
    scanf("%d",&s.roll);
    printf("enter section\n");
    scanf(" %c",&s.sec);
    //don't forget to keep a space before %c
    printf("enter marks\n");
    scanf("%f",&s.marks);
    //displaying the marks
    printf("name=%s\nrollno=%d\nsection=%c\nmarks=%f",s.name,s.roll,s.sec,s.marks);
}