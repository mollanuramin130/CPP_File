#include<stdio.h>
int main(){
    int arr[]={8,7,1,9,4,77,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int swap;
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
            
        }
        
    }
    printf("Your sorted array be :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}