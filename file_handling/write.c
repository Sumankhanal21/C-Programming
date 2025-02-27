/* Write a program to create a text file named data.txt and write your name, age, and address into it. */
#include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\user\\Downloads\\data.txt", "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    char name[50] = "Suman-Khanal";
    int age = 50;
    char address[50] = "Pokhara";

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Address: %s\n", address);
    fclose(file);
    printf("Data written successfully.\n");
    return 0;
}
