#include<stdio.h>
void myFunc(int *arr, int size){
    
    for(int i = 0; i < size; i++)
        if(*(arr + i) == 4)
            *(arr + i ) = 0;
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", n);
    
    myFunc(arr,n);
    
    for(int i = 0; i < n;i++)
        printf(" %d ",arr[i]);
    return 0;
}