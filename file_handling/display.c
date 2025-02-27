/*WAP to read and display all the records stored in student.txt.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("C:\\Users\\user\\Downloads\\student.txt", "r");

    if (fp == NULL) {
        printf("Error opening file! Make sure student.txt exists.\n");
        return 1;
    }

    char ch;
    printf("\n--- Student Records ---\n\n");

    
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp); 
    return 0;
}
