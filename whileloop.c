//WAP to ask user a number and print it until user wants using while loop
#include<stdio.h>
int main(){
    int a,b,c;
    while(1){
        printf("Enter any number\n");
        scanf("%d",&a);
        printf(" The entered number is %d \n",a);
        printf("Enter 1 to continue or 0 to exit");
        scanf("%d",&b);
        if(b==0){
            break;
        }

    }
    return 0;
}
