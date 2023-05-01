#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the Valud A :");
    scanf("%d",&a);
    printf("Enter the Valud B : ");
    scanf("%d",&b);
    printf("the valus are \nvalA=%d \nvalB=%d", a,b);
    printf("\n\tSwaping");
    a=a-b;
    b=b+a;
    a=b-a;
    printf("\n\tafter swaping");
    printf("\nvalue a = %d", a);
    printf("\nvalue b = %d", b);
    getch();
}