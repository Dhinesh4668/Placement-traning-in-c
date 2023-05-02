//
// Created by dhine on 02-05-2023.
//

#include<stdio.h>
void main() {
    int i,fact=1,n;
    printf("enter your value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("the factorial of %d is : %d",n,fact);
}