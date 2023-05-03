//count the number

#include<stdio.h>
int main() {
    int x,count=0;
    printf("enter the number:");
    scanf("%d",&x);
    do{
        x=x/10;
        ++count;
    }while(x!=0);
    printf("%d",count);
}