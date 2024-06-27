#include <stdio.h>

int main()
{
    int prep[5] = {1,0,2,5,6};
    int a,b,c;
    a = ++prep[1];
    b = prep[2]++;
    c = prep[a++];
    printf("%d, %d, %d",a,b,c);
}