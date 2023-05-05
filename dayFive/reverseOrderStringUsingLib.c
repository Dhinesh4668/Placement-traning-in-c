#include "stdio.h"
#include "string.h"
void main(){
    char str[25];
    printf("enter the your char: ");
    gets(str);
    printf("\nthe given string is :%s", str);
    printf("\nthe reverse order is :%s", strrev(str));

    //cheack palindrome
    if(str == strrev(str))
        printf("\npalindrome");
    else
        printf("\nnot palindrome");
}