#include "stdio.h"
#include "string.h"
void main() {
    char str[25];
    printf("enter u r chaing text: ");
    gets(str);
    printf("\nthe given string is :%s", str);
    printf("\nstring in upper case :%s", strupr(str));
//    change lower case
//    printf("\nlower case :%s", strcasecmp(str));
}