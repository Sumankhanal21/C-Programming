/* Write a program to display the record of only those students whose roll number is
less than 5 in student.txt.Use EOF to determine the end of file.*/

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
    struct Student s;
    FILE *fp = fopen("C:\\Users\\user\\Documents\\output-6-2.txt", "r");

    if (fp == NULL) {
        printf("Error opening file! Make sure student.txt exists.\n");
        return 1;
    }

    printf("\n--- Students with Roll Numbers Less Than 5 ---\n\n");

    
    while (fscanf(fp, "Roll No: %d\n", &s.roll_no) != EOF) {
       
        
        if (s.roll_no < 5) {
            printf("Roll No: %d\n%s%s%sSemester: %d\n\n", s.roll_no, s.name, s.phone, s.address, s.semester);
        }
    }

    fclose(fp); 
    return 0;
}
