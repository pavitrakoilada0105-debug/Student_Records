#include"student.h"
void stud_show(SLL *ptr)
{
if(ptr==0)
{
printf("No student records available\n");
return;
}
SLL *p=ptr;
printf("--------------------------------------------------------------------------------\n");
printf("Roll No        Name        Percentage\n");
printf("--------------------------------------------------------------------------------\n");
while(p!=0)
{
printf("%d          %s            %f\n",p->rollno,p->name,p->percentage);
p=p->next;
}
printf("---------------------------------------------------------------------------\n");
}
