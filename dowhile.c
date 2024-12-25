//WAP to ask user a number and print its sum until user wants
#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c=0;
    do{
        printf("Enter a number");
        scanf("%d",&a);
        c=c+a;
         printf("The sum is : %d \n",c); 
        printf("Enter 1 to continue and 0 for exit ");
        scanf("%d",&b);
    }while(b==1);
  
   return 0;
}
