#include<stdio.h>

int main(){
    int num,sum=0,temp,rem,count=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    if(count==10){
        for(int i=10;i>=1;i--){
            rem=num%10;
            sum=sum+rem*i;
            num=num/10;
        }
        if(sum%11==0){
        printf("Legal ISBN Number");
    }
    else{
        printf("Illegal ISBN Number");
    }
    }
    else{
        printf("Enter 10 digit number only");
    }
}