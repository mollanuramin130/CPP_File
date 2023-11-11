#include<stdio.h>

int main(){
    printf("Enter your number :");
    int num;
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial value of %d is : %d ",num,fact);
}