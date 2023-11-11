#include<stdio.h>
int main(){
    printf("Enter your number : \n");
    int num,rem,sum=0;
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum){
        printf("Armstron Number");
    }
    else{
        printf("not Arsmtron Number");
    }
    return 0;
}