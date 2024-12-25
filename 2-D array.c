// Matrix Array
#include <stdio.h>
/* WAP to read a matrix of size 3*3 from the user and display the sum of even elements in screen */
void A(){
    int arr[3][3],sum=0;
    printf("Enter the value in 3*2 matrix");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
             if(arr[i][j]%2==0){
                sum=sum+arr[i][j];
            }
        }
    }
    printf("The sum of even numbers is : %d",sum);
}
//WAP to find the sum of all elements of 3*3 matrix
void B(){
    int a[3][3],sum=0;
    printf("Input the value in 3*3 matrix");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("The total sum is %d",sum);
}
// WAP to take row and column user input and also the number in matrix and dispaly the numbers which are greater than 10
void C(){
      int a,b,sm;
    printf("Enter a number of row");
    scanf("%d",&a);
    printf("Enter a number of column");
    scanf("%d",&b);
    printf("Please enter a number un %d %d matrix :\n",a,b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The numbers greater than 10 are :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(10<arr[i][j]){
                printf("%d\t",arr[i][j]);
            }
        }
    }
}
int main()
{
    return 0;
}
