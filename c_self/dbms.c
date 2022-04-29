// program to insert, update, delete and view records of students in a data file
#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int roll;
    char name[20];
    char section;
} Student;

void inputDetails(Student*);
void outputDetails(Student);
void insert();
void delete();
void update();
void display();
FILE *file;


int main() {
    int choice;

    do {
        // read user's choice
        printf("\n1. Insert a new record");
        printf("\n2. Update a record");
        printf("\n3. Delete a record");
        printf("\n4. Display all records");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: insert();
                    break;
            case 2: update();
                    break;
            case 3: delete();
                    break;
            case 4: display();
                    break;
            case 5: break;
            default: printf("Invalid choice! Enter again...\n");
        }
    } while(choice != 5);
    return 0;
}


void inputDetails(Student *s) {
    printf("Roll number: ");
    scanf("%d", &s->roll);
    printf("Name: ");
    getchar();  // to remove the leftover \n in the input buffer
    fgets(s->name, 20, stdin);
    printf("Section: ");
    s->section = getchar();
}

void outputDetails(Student s) {
    printf("Roll number: %d\n", s.roll);
    printf("Name: %s", s.name);
    printf("Section: %c\n", s.section);
}

void insert() {
    file = fopen("records.dat", "a+b");
    if(file == NULL) {
        printf("Error opening records file. Exiting...\n");
        return;
    }

    Student s;
    printf("Enter details of student: \n");
    inputDetails(&s);
    fwrite(&s, sizeof(s), 1, file);
    printf("Record added successfully.\n");
    fclose(file);
}

void update() {
    FILE *temp = fopen("temp.dat", "ab+");
    file = fopen("records.dat", "a+b");
    if(file == NULL) {
        printf("Error opening records file. Exiting...\n");
        return;
    }

    Student s;
    int roll, found = 0;

    if(temp == NULL) {
        printf("Error opening file for updation of record.\n");
        return;
    }

    printf("Enter roll number to update record: ");
    scanf("%d", &roll);
    while(fread(&s, sizeof(s), 1, file)) {
        if(s.roll == roll)
        {
            found = 1;
            printf("Enter new details: \n");
            // input the updated details
            inputDetails(&s);
            // write the updated details to file
            fwrite(&s, sizeof(s), 1, temp);
            continue;
        }
            
        fwrite(&s, sizeof(s), 1, temp);
    }

    remove("records.dat");
    rename("temp.dat", "records.dat");
    if(found == 0) {
        printf("Record not present in the database.\n");
    } else {
        printf("Record updated successfully.\n");
    }

    fclose(file);
    fclose(temp);
}


void display() {
    Student s;

    file = fopen("records.dat", "a+b");
    if(file == NULL) {
        printf("Error opening records file. Exiting...\n");
        return;
    }

    printf("All the records in the database are:\n");    
    while(fread(&s, sizeof(s), 1, file)) {
        outputDetails(s);
        printf("\n");
    }
    fclose(file);
}


void delete() {
    FILE *temp = fopen("temp.dat", "ab+");
    file = fopen("records.dat", "a+b");
    if(file == NULL) {
        printf("Error opening records file. Exiting...\n");
        return;
    }

    Student s;
    int roll, found = 0;

    if(temp == NULL) {
        printf("Error opening file for deletion of record.\n");
        return;
    }

    printf("Enter roll number to delete record: ");
    scanf("%d", &roll);
    while(fread(&s, sizeof(s), 1, file)) {
        if(s.roll == roll)
        {
          found = 1;
          continue;
        }
            
        fwrite(&s, sizeof(s), 1, temp);
    }

    remove("records.dat");
    rename("temp.dat", "records.dat");
    if(found == 0) {
        printf("Record not present in the database.\n");
    } else {
        printf("Record deleted successfully.\n");
    }

    fclose(file);
    fclose(temp);
}