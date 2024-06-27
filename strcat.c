#include<stdio.h>
#include"string.h"
int main(){
    char source[] = "Prepsters";
    char target[] = "Hello ";

    printf("The target string before : %s\n",target);
    
    strcat(target,source);

    printf("The target string is now : %s\n", target);

    return 0;
}