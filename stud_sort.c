#include"student.h"
void sort_student(SLL **ptr)
{
SLL *p,*q,t;
char op;

if(*ptr==NULL || (*ptr)->next==NULL)
{
printf("no records found\n");
return;
}

printf("N/n : Sort with name\nP/p : Sort with percentage\n");
scanf(" %c",&op);

switch(op)
{
case 'n':
case 'N':
{
p=*ptr;
while(p->next!=NULL)
{
for(q=p->next;q!=NULL;q=q->next)
{
if(strcmp(p->name,q->name)>0)
{
t.rollno=p->rollno;
p->rollno=q->rollno;
q->rollno=t.rollno;

strcpy(t.name,p->name);
strcpy(p->name,q->name);
strcpy(q->name,t.name);

t.percentage=p->percentage;
p->percentage=q->percentage;
q->percentage=t.percentage;
}
}
p=p->next;
}
printf("Records sorted by name\n");
break;
}break;
case 'p':
case 'P':
{
p=*ptr;
while(p->next!=NULL)
{
for(q=p->next;q!=NULL;q=q->next)
{
if(p->percentage < q->percentage)
{
t.rollno=p->rollno;
p->rollno=q->rollno;
q->rollno=t.rollno;

strcpy(t.name,p->name);
strcpy(p->name,q->name);
strcpy(q->name,t.name);

t.percentage=p->percentage;
p->percentage=q->percentage;
q->percentage=t.percentage;
}
}
p=p->next;
}
printf("Records sorted by percentage\n");
break;
}break;
default:
printf("Invalid choice\n");
}
}
