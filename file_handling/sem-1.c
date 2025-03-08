/*Write a program to store the record of only those students whose semester is 1
in student.txt.-*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 4

struct Student {
    int roll_no;
    char name[50];
    char phone[15];
    char address[100];
    int semester;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    FILE *fp = fopen("C:\\Users\\user\\Downloads\\data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        getchar(); 
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Phone Number: ");
        fgets(students[i].phone, sizeof(students[i].phone), stdin);

        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);

        printf("Semester: ");
        scanf("%d", &students[i].semester);
        getchar();
    }

    
    fprintf(fp, "Students in Semester 1:\n\n");
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].semester == 1) {
            fprintf(fp, "Roll No: %d\nName: %sPhone: %sAddress: %sSemester: %d\n\n",
                    students[i].roll_no, students[i].name, students[i].phone, students[i].address, students[i].semester);
            count++;
        }
    }

    if (count == 0) {
        fprintf(fp, "No students found in Semester 1.\n");
        printf("\nNo students in Semester 1. Nothing saved in student.txt.\n");
    } else {
        printf("\nStudent records (Semester 1) saved successfully in student.txt!\n");
    }

    fclose(fp); 
    return 0;
}
