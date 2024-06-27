#include<stdio.h>
#include "string.h"
int main(){
    char source[] = "Rithivasan S";
    char target[] = "Rithivasan Sakthivel";
// In this case, the string from the source string (Rithivasan S) is copied to the target string 
// By replacing the existing string of the target (Rithivasan Sakthivel)
    printf("The target string before : %s\n",target);
    strcpy(target,source);
    printf("The target string is now : %s\n", target);
    return 0;
}