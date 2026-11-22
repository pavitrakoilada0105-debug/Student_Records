#include"student.h"
void delete_student(SLL **ptr)
{
SLL *p,*prev;
int roll,count=0;
char name[50],op;

if(*ptr==NULL)
{
printf("Student list is empty!\n");
return;
}

printf("r/R:  Delete by RollNumber\n");
printf("n/N:  Delete by name\n");

printf("Enter your choice: \n");
scanf(" %c",&op);

switch(op)
{
case 'r':
case 'R':
        {
         printf("Enter Roll number: \n");
         scanf("%d",&roll);
         goto delete_record;
        }
        break;
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
          printf("Student not found!\n");
          return;
         }
         else if(count==1)
         {
          goto delete_record;
         }
         else
         {
          printf("Multiple names found\n");
          printf("Enter roll number to delete: \n");
          scanf("%d",&roll);
          goto delete_record;
         }
        }break;
default:
printf("Invalid choice!\n");break;
}


delete_record:
p=*ptr;
prev=NULL;

while(p!=NULL)
{
if(p->rollno==roll)
break;

prev=p;
p=p->next;
}

if(p==NULL)
{
printf("Student not found!\n");
return;
}

if(prev==NULL)
   *ptr=p->next;
else
  prev->next=p->next;

free(p);

printf("Student deleted successfully!\n");

}

void delete_all(SLL **ptr)
{
SLL *del;
if(ptr==NULL)
{
printf("No records to delete\n");
return;
}
while(*ptr!=NULL)
{
del=*ptr;
*ptr=(*ptr)->next;
free(del);
}
*ptr=NULL;
printf("ALL student records are deleted\n");
}
