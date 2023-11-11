#include<stdio.h>

int main(){
    int l,r,v,count=0;
    scanf("%d%d%d",&l,&r,&v);
    for (int i = l; i <= r; i++)
    {
        /* code */
        if(i%v==0){
            count++;
        }
    }
    printf("%d",count);
    
}