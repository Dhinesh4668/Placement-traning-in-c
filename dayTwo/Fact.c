//
// Created by dhinesh on 02-05-2023.
//
#include<stdio.h>
void main() {
    int i,n,f=1;
    printf("\nEnter the input:");
    scanf("%d",&n);
    i=1;
    do{
        f=f*i;
        i=i+1;

    }while(i<=n);
        printf("\n The factorial is:%d", f);
}