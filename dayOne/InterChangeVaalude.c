#include<stdio.h>
void main(){
    int a,b,temp;
    printf("enter the a valude:");
    scanf("%d", &a);
    printf("enter the b valude :");
    scanf("%d",&b);
    printf("\nvalude a = %d", a);
    printf("\nvalude b = %d", b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\tafter swaping");
    printf("\nvalude a = %d", a);
    printf("\nvalude b = %d", b);
    getch();
}
