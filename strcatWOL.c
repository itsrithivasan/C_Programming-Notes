#include<stdio.h>

int main(){
    char source[] = "Rithivasan";
    char target[100] = "Hello ";

    int i,j;
    for ( i = 0; target[i] != '\0'; ++i)
    {
        /* code */
    }
    
    for( j = 0; source[j] != '\0';++i,++j){
        target[i] = source[j];
    }

    target[i] = '\0';

    printf("The target string is now : %s\n", target);

    return 0;
}