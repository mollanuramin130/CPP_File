#include<stdio.h>

int main(){
    int range,sum=0,count=0;
    printf("Enter your number : ");
    scanf("%d",&range);
    printf("Neon number between 1 to %d are : ",range);
    for(int i=1;i<=range;i++){
        int temp=i*i;
        while (temp!=0){
            int rem=temp%10;
            sum+=rem;
            temp=temp/10;
        }
        if(sum==i){
            printf("%d ",i);
            count++;
        }
        sum=0;
    }
    printf("\nTotal Neon number between 1 to %d are : %d",range,count);
}