
#include<stdio.h>
// Binary Search Tree
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int r=0;
    int q=9;
    int k=2;
    int mid;
  //  while(k==arr[mid]){
    mid=(r+q)/2;
    if(k==arr[mid]){
        printf("%d",mid);
    }
    else if(k<arr[mid]){
        q=mid-1;
        mid=(r+mid-1)/2;
    }
    else if(k>arr[mid]){
        r=mid+1;
        mid=(mid+1+q)/2;
    }
    printf("hi\n %d\n",mid);

}