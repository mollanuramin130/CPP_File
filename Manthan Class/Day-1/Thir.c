#include<stdio.h>

int main(){
    int t=1;
   int arr[]={20,40,50,90,104};
   int max=arr[0];
   for(int i=1;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
   printf("%d",max);
}