#include<stdio.h>

int main(){

    char s[1000];
    int c = 0;

    printf("Input : ");
    scanf("%s",s);
    
    while(s[c] != '\0')
    c++;
    
    printf("String length :  %d\n",c);
    return 0;
}