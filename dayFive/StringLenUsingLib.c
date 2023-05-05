#include<stdio.h>
#include<string.h>
int main(){
    char n;
    int len;
    printf("enter your area name:");
    gets(n);
    len=strlen(n);
    printf("%d",len);
}