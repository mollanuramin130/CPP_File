#include<stdio.h>

int main(){
    printf("Enter the number of Array : \n");
    int n;
    scanf("%d",&n);
    int arr[50];
    printf("Enter the elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min !=i){
            int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("Your sorted arry is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}