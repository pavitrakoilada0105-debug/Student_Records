#include"student.h"
void modify(SLL **ptr)
{
if(*ptr==NULL)
{
printf("Student list is empty\n");
return;
}

SLL *p;
int roll,count=0;
float percentage;
char name[50],op;

printf("R/r : Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n");
printf("Enter your choice: \n");
scanf(" %c",&op);

switch(op)
{
case 'r':
case 'R':
{
printf("Enter the Roll Number: ");
scanf("%d",&roll);
p=*ptr;
while(p!=NULL)
{
if(p->rollno==roll)
break;
p=p->next;
}
if(p==NULL)
{
printf("Student not found\n");
return;
}
goto modify_record;
}
case 'n':
case 'N':
{
printf("Enter student name: \n");
scanf(" %49[^\n]",name);

p=*ptr;

while(p!=NULL)
{
if(strcmp(p->name,name)==0)
{
count++;
printf("%d    %s    %f\n",p->rollno,p->name,p->percentage);
roll=p->rollno;
}
p=p->next;
}
if(count==0)
{
printf("Student not found\n");
return;
}
else if(count>1)
{
printf("Enter roll number to modify: \n");
scanf("%d",&roll);
}
p=*ptr;
while(p!=NULL)
{
if(p->rollno==roll && strcmp(p->name,name)==0)
break;
p=p->next;
}
if(p=NULL)
{
printf("Invalid roll number\n");
return;
}
goto modify_record;
}
case 'p':
case 'P':
{
printf("Enter percentage:\n");
scanf("%f",&percentage);
p=*ptr;
while(p!=NULL)
{
if(p->percentage==percentage)
{
count++;
printf("%d    %s   %f\n",p->rollno,p->name,p->percentage);
roll=p->rollno;
}
p=p->next;
}
if(count==0)
{
printf("Student not found\n");
return;
}
else if(count>1);
{
printf("Enter roll number to modify: ");
scanf("%d",&roll);
}
p=*ptr;
while(p!=NULL)
{
if(p->rollno=roll && p->percentage==percentage)
break;
p=p->next;
}
if(p==NULL)
{
printf("Invalid roll number\n");
return;
}
goto modify_record;
}
default:
printf("Invalid choice\n");break;
}

modify_record:
printf("\nStudent details\n");
printf("%d     %s   %f\n",p->rollno,p->name,p->percentage);

printf("Enter updated name: \n");
scanf("  %49[^\n]",p->name);

printf("Enter update percentage: \n");
scanf("%f",&p->percentage);

if(p->percentage<0 || p->percentage >100)
{
printf("Invalid percentage\n");
return;
}
printf("\nStudent record modified successfully\n");
}
