#include<stdio.h>

int main(){
    char source[] = "Rithivasan S";
    char target[] = "Pugazhlvasan Sakthivel";

    printf("The target string before : %s\n",target);
    
    int i = 0;

    for (i = 0; i < source[i] != '\0'; i++)
        target[i] = source[i];
    
    target[i] = '\0';

  
    printf("The target string is now : %s\n", target);

    return 0;
}