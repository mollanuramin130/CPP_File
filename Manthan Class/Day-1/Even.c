#include<stdio.h>

int main(){
    int num,sum=0;
    printf("Enter your number : \n");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("The sum of total even number between 1 to %d is: %d",num,sum);
}