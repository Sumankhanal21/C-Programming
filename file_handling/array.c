/*Write a program to store information about 10 students using an array of
structures. Save the records in student.txt.*/
#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll_no;
    char name[50];
    char phone[15];

    char address[100];
    int semester;
};

int main() {
    struct Student students[10];
    FILE *fp = fopen("C:\\Users\\user\\Documents\\student.txt", "w"); 

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

   
    for (int i = 0; i <10; i++) {
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

    
    fprintf(fp, "Student Records:\n\n");
    for (int i = 0; i < 10; i++) {
        fprintf(fp, "Roll No: %d\nName: %sPhone: %sAddress: %sSemester: %d\n\n",
                students[i].roll_no, students[i].name, students[i].phone, students[i].address, students[i].semester);
    }
    printf("\nStudent records saved successfully in student.txt!\n");
    fclose(fp); 
    return 0;
}
