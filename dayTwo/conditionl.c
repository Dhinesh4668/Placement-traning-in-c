// condition statement 
#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,c;
    printf("enter the value a:");
    scanf("%d",&a);
    printf("enter the value b:");
    scanf("%d",&b);
    printf("enter the value c:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d the a value is biger");
        printf("the a=%d bigger then b=%d");
    }else if(b>a && b>c){
        printf("b value is bigger ");
    }else{
        printf("the c valu is bigger ");
    }
}