#include <stdio.h>

int main()
{
    char prep;
    char Insta[10] = {9,8,7,6,5,4,3};
    prep = (Insta + 1)[4];
    printf("%d",prep);
}