#include<stdio.h>

int* myFuncZ(char *str){
    int i = 0;

    while(*(str+i)!='\0'){
        if (str[i] == 'a')
            str[i] = 'z';
        
        i++;
    }
    return str;
}

int main(){

    char str[]= "prepinsta";
    
    int* p;
    p = myFuncZ(str);
    printf("%s",p);
    return 0;
}