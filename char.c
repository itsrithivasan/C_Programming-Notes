#include<stdio.h>
int main(){
    char name[] = "prepinsta";
    printf("<%20s>\n",name);
    printf("<%20.5s>\n",name);
    printf("<%-20.5s>\n",name);
    return 0;
}