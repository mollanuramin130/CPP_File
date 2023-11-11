#include<stdio.h>
int main(){
    int arr[50];
    printf("Enter the total number of elements: \n");
    int n;
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
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