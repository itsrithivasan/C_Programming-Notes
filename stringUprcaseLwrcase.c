#include"stdio.h"
int main(){
    char a[] = "rItHiVaSaN";
    int i;
    for(i=0;a[i] != '\0';i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
        a[i] = a[i] + 32;
    }

    printf("%s", a);
    return 0;
}