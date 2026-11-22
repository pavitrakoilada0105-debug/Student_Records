#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include<unistd.h>

typedef struct student
{
int rollno;

char name[50];

float percentage;

struct student *next;

}SLL;

void add_new(SLL **);

void stud_show(SLL);

void delete_student(SLL **);

void modify(SLL **);

int save_student(SLL *);

int exit_program(SLL **);

void sort_student(SLL **);

void delete_all(SLL **);

void reverse_list(SLL **);

void load_student(SLL **);
