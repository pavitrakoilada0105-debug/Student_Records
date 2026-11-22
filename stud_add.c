#include student.h"

void add_new(SLL **ptr)
{
SLL new, *p; 
  
new-malloc(sizeof(SLL)); 
  
if(new NULL)
{
printf("Memory allocation failed\n");
return;
}

int roll;

for(roll=1;;roll++)
{
p=*ptr;

while(p!=NULL)
{
if(p->rollno==roll) 
  break; 
p=p->next;
}

if(p==NULL)
break;
}
new->rollno=roll;

printf("Enter student name: \n"); 
if(scanf("%49[^\n]", new->name)!=1) 
{
printf("Nane cannot be empty!\n");
free(new); 
return;
}
printf("Enter the presentage:");
if(scanf("%f",&new->percentage)!=1)
{  
printf("Invalid percentage\n"); 
free(new); 
return;
}
if(new->percentage <0 || new-percentage > 100)
{
printf("Presentage must be between 0 and 100\n");
free(new):
return;
}
new->next=NULL;
if(*ptr==NULL)
{
*ptr=new;
}
else
{
p=*ptr;
while(p->next!=NULL)
{
p=p->next;
}
p->next=new;
}
printf("\nAssigned Roll NUmber: %d \n",new->rollno);
  }  
