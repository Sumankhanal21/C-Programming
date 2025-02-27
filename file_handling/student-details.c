/*Write a program to create a structure for storing student details (Roll Number,
    Name, Phone Number, Address, and Semester). Store the data in a file named
    student.txt.*/
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
        FILE *fp = fopen("C:\\Users\\user\\Downloads\\student.txt", "w");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
        printf("Enter Roll Number: ");
        scanf("%d", &s.roll_no);
        getchar(); 
    
        printf("Enter Name: ");
        fgets(s.name, sizeof(s.name), stdin);
    
        printf("Enter Phone Number: ");
        fgets(s.phone, sizeof(s.phone), stdin);
    
        printf("Enter Address: ");
        fgets(s.address, sizeof(s.address), stdin);
    
        printf("Enter Semester: ");
        scanf("%d", &s.semester);
        fprintf(fp, "Roll No: %d\nName: %sPhone: %sAddress: %sSemester: %d\n\n",
                s.roll_no, s.name, s.phone, s.address, s.semester);
    
        printf("Student details saved successfully!\n");
    
        fclose(fp); 
        return 0;
    }
    