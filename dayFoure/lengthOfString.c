#include<stdio.h>
int main(){
    int i,len=0;
    char str[100];
    printf("\n enter the string:");
    gets(str);
    i=0;
    while(str[i]!=0){
        len++;
        i++;
    }
    printf("\nLength of the string :%d",len);
}
