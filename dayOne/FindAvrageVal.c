#include<stdio.h>
void main(){
    int a,b,c,d,e,total;
    float avrage;
    printf("enter the s1 val: ");
    scanf("%d",&a);
    printf("enter the s2 val: ");
    scanf("%d",&b);
    printf("enter the s3 val: ");
    scanf("%d",&c);
    printf("enter the s4 val: ");
    scanf("%d",&d);
    printf("enter the s5 val: ");
    scanf("%d",&e);
    total = a+b+c+d+e;
    printf("\n%d", total);
    avrage = total/5;
    printf("\n%f",avrage);
}