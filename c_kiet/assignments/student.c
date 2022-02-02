// program to store and process the data of 10 students using structure
#include <stdio.h>
#include <stdlib.h>

typedef char string[30];

typedef struct student
{
    string name;
    int age;
    int sem;
    int marks[6];
} student;

int main()
{
    void inputStudent(student *);
    void outputStudent(student);
    void printHighestMarks(student *, int);
    void printTotals(student *, int);
    student s[10];
    int size, i;

    system("clear");
    printf("Enter the number of students: ");
    scanf("%d", &size);

    printf("\nEnter the details of %d students: \n", size);
    for (i = 0; i < size; i++)
    {
        printf("Student %d\n", i + 1);
        inputStudent(&s[i]);
    }

    // printing the details of student having higest marks
    printf("\nStudent having the highest marks: \n");
    printHighestMarks(s, size);

    // printing the total marks of all the students
    printf("\nMarks of all the students: ");
    printTotals(s, size);
    printf("\n");
    return 0;
}

void inputStudent(student *s)
{
    int i;
    scanf("%c");        // to clear the left over space in the input buffer
    printf("Enter name: ");
    scanf("%[^\n]s", s->name);
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter semester: ");
    scanf("%d", &s->sem);

    printf("Enter marks of 6 subjects: ");
    for (i = 0; i < 6; i++)
        scanf("%d", &s->marks[i]);
}

void outputStudent(student s)
{
    printf("Name: %s \nAge: %d \nSemester: %d \n", s.name, s.age, s.sem);
}

void printHighestMarks(student *s, int size)
{
    int marks = 0, highest = 0, i, j, pos, total = 0;

    for (i = 0; i < size; i++)
    {
        marks = 0;
        for (j = 0; j < 6; j++)
        {
            marks += (s + i)->marks[j];
        }
        if (marks > highest)
        {
            highest = marks;
            pos = i;
        }
    }

    outputStudent(s[pos]);
}

void printTotals(student *s, int size)
{
    int marks, i, j;

    for (i = 0; i < size; i++)
    {
        marks = 0;
        for (j = 0; j < 6; j++)
        {
            marks += (s + i)->marks[j];
        }
        printf("\n%s : %d", (s + i)->name, marks);
    }
}