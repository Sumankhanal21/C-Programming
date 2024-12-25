//Methods
#include<stdio.h>
//WAP to print a sum of 1st 100 odd numbers
void A(){
     int a=1,b=-1,c=0;
    do{
        b+=2;    
        a++;
        c=c+b;
    }while(a<=100);
  printf("The summ of 1st 100 odd number is %d\n",c);
    return 0;
}
//WAP to print prime numbers from 1 to 100
void B(){
    int a=100,b;
    printf("The prime numbers upto %d is :\n",a);
    for(int i=1;i<=a;i++){
        int count =0;
        for(int j=1;j<=i;j++){
            b=i%j;
            if(b==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
}
//Wap to print the sum of odd and even numbers from 100 to 200 
void C(){
    int a=100,b=0,c=0;
    while(a<=200){
        if(a%2==0){
            b=b+a;
        }
        else{
            c=c+a;
        }
        a++;
    }
    printf("The total sum of odd number is : %d\n",c);
    printf("The total sum of even numbers is : %d",b);
}
void D(){
    int a,b,c=0;
    printf("The 1st 50 prime numbers are : \n");
        for(int j=1;c<50;j++){
            int d=0;
            for(int k=1;k<=j;k++){
                a=j%k;
                if(a==0){
                    d++;
                }
            }
            if(d==2){
                printf("%d ",j);
                c++;
                if(c>=50){
                    break;
                }
            }
        }
}
int main(){
return 0;
}
