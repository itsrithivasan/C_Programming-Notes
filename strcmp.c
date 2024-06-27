#include<stdio.h>
#include"string.h"
int main(){
    
    char s1[] = "prepstersa";
    char s2[] = "prepstersA";
    int i = strcmp(s1,s2);

    if (i == 0)
    printf("Both strings are same\n");
    
    else
    printf("Not same\n");

    printf("The strcmp value is %d\n",i);
    
    return 0;
}