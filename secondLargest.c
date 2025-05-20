#include<stdio.h>

int getsecondLargest(int arr[],int n){

    int largest = -1, secondLargest= -1;

    for(int i=0; i<n; i++){
        if (arr[i]>largest)
        {
            secondLargest= largest;
            largest = arr[i];
            
        }
        else if (arr[i]<largest && arr[i]>secondLargest)
        {
            secondLargest=arr[i];
        }
         
    }
return secondLargest;

}
int main(){
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", getsecondLargest(arr, n));
     
    return 0;
}