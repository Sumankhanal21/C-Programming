//Write a program to append new data to the existing data.txt file without overwriting the previous content.
#include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\user\\Downloads\\data.txt", "a");

    fprintf(file, "Phone Number: +9776936152118\n");

    fclose(file);
    
    printf("Data appended to file successfully.\n");

    return 0;
}
