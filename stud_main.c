#include student.h

int main()
{
SLL *headerptr=0;

Load_student(&headerptr);

char op; 

int count;

while(1)
{
printf("********************************STUDENT RECORD MENU *****************************\n");

printf("а/A: Add new record\nd/D: Delete a record ns/5: Show the listinn/: Modify a record\nv/V: Save records\ne/E

:Exitint/T: Sort the listinl/L: Delte all the records/ar/R: Reverse the list\n");

printf("Enter your choice: \n");

scanf(" %c",&op);

switch(ap)
{
case 'a':

case 'A':

add_new(&headerptr);break;

case 'd':

case 'D':

delete_student(&headerptr); break;

case 's':

case 'S':

stud_show(headerptr);break;

case 'm'

case 'M': 
  modify(&headerptr); break;

case 'v':

case 'V':

save_student(headerptr);break;

case 'e':

case 'E'

if(exit program(&headerptr))

return 0; break;

case 't': 

case 'T':

sort_student(Sheaderptr);break;

case 'l':

case 'L':
  delete_all(&headerptr); break;

case 'r':

case 'R':

reverse list(&headerptr); break;
default: printf("Invalid aption\n"); break;
}
}
}
