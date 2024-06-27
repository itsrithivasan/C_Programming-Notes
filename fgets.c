#include"stdio.h"
#include<string.h>
int main()
{
    char string[20];
    printf("Enter the string : ");
    // we can use this fgets functions for getting the input with white space.
    fgets(string,sizeof(string),stdin);

    printf("%s",string);
    printf("%d",sizeof(string));
    return 0;
}