#include"stdio.h"
#include"string.h"
int main(){
    char str1[100] = "hello";
    char str2[100] = "world";
    int result,i;
    for (i = 0; str1[i] == str2[i] && str2[i] == '\0';i++);

    if(str1[i] < str2[i])
    printf("str1 is less than str2\n");

    else if(str1[i] > str2[i])
    printf("str2 is less than str1\n");

    else
    printf("str1 is equal to str2\n");
    
    return 0;
}