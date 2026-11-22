#include"student.h"
void reverse_list(SLL **ptr)
{
SLL *prev=NULL,*next,*current;
if(*ptr==NULL)
{
printf("No records found\n");
return;
}

if((*ptr)->next==NULL)
{
printf("Only one record\\n");
return;
}
current=*ptr;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
*ptr=prev;
printf("Student list reversed\n");
}
