//Write a program to read the contents of the file data.txt and display it on the console.
    #include <stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\user\\Downloads\\data.txt", "r");
    char ch;
  
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    return 0;
}

    