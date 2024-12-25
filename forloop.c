//WAp to print Multiplication table of a given number upto 10 using for loop
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any number\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        b=a*i;
        printf("%d*%d = %d\n",a,i,b);
    }
    return 0;
}