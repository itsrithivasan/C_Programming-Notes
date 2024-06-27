#include<stdio.h>

int main(){

    printf("The first 10 natural numbers are:\n");
    int x;
    for (int i = 0; i <= 10; i++)
    {
        if(i == 5){
            goto label;
        }
        printf(" %d\n", i);
    }
    
    printf("The jump has not been made");
    x = 100;
    x = x*2;

    label:
    printf(" HEllO world");

    return 0;
}