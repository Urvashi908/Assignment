#include<stdio.h>
struct student
{
	int rollno;
	char name[100];
	char course[100];
	int age;
};
int main()
{

struct student s1;

printf("enter roll no \n");
scanf("%d",&s1.rollno);
getchar();
printf("enter name\n");
scanf("%s",s1.name);
printf("enter course name ");
scanf("%s",s1.course);
printf("enter age");
scanf("%d", &s1.age);

printf("roll no %d \n",s1.rollno);
printf("name: %s \n",s1.name);
printf("course %s \n",s1.course);
printf("age %d\n",s1.age);
return 0;
}


