#include<stdio.h>

int main()
{
    char n;
    printf("enter character\n");
    scanf("%c",&n);
    if(n>='A'&&n<='Z') {
        printf("upper case");
    }
    else if(n>='a'&& n<='z') {
        printf("lower case");
    }
    else
        printf("enter a alphabet");
    return 0;
}