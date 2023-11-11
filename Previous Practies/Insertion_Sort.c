
#include<stdio.h>
int main(){
    int arr[]={2,5,1,7,11,1,9,3};
    int n=8;
    for(int i=0;i<n-1;i++){
        for (int j= 0 ; j < n-1 ; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    printf("your Final Sorted array is : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}