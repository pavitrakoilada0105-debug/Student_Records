#include"student.h"

int save_student(SLL *ptr)
{
FILE *fp;
fp=fopen("Student.dat","w");
if(fp==NULL)
{
printf("Unable to oprn file!\n");
return 0;
}

while(ptr!=NULL)
{
fprintf(fp,"%d    %s     %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
fclose(fp);
printf("Records saved successfully\n");
return 1;
}

int exit_program(SLL **ptr)
{
char op;
SLL *p;

printf("S/s : Save and Exit\nE/e : Exit Without Saving\n");
printf("Enter your choice: ");
scanf(" %c",&op);

switch(op)
{
case 's':
case 'S':
if(save_student(*ptr)==0)
return 0;
break;

case 'e':
case 'E':
printf("Exiting without saving\n");
break;

default:printf("Invalid choice\n");break;
}

while(*ptr!=NULL)
{
p=*ptr;
*ptr=(*ptr)->next;
free(p);

}
printf("memory released successfully\n");
return 1;
}

void load_student(SLL **ptr)
{
FILE *fp;
SLL *new,*last=NULL;
int roll,result;
char name[50];
float percentage;

fp=fopen("Student.dat","r");
if(fp==NULL)
{
printf("No save records found\n");
return;
}

while((result=fscanf(fp,"%d    %49s  %f",&roll,name,&percentage))==3)
{
if(roll<=0 || percentage <0 || percentage >100)
{
printf("Invalid record found\n");
break;
}
new=malloc(sizeof(SLL));
if(new==NULL)
{
printf("Memory allocation failed\n");
fclose(fp);
return;
}
new->rollno=roll;
{
int i;
for(i=0;name[i]!='\0';i++)
new->name[i]=name[i];
new->name[i]='\0';
}
new->percentage=percentage;
new->next=NULL;
if(*ptr==NULL)
*ptr=new;
else
last->next=new;

last=new;
}
fclose(fp);
printf("Student records loaded\n");
}
