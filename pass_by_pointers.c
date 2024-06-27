#include<stdio.h>

void swap(int *x,int *y){

    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 100, b = 200;
    printf("Before swap a and b are %d & %d\n", a,b);
    swap(&a,&b);
    printf("After swap a and b are %d & %d\n", a,b);
    return 0;
}