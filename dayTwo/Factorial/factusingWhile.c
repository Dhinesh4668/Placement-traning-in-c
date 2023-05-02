//
// Created by dhine on 02-05-2023.
//
#include<stdio.h>
void main() {
   long int i, n, f = 1;
    printf("\nEnter the input:");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        f = f * i;
        i = i + 1;
    }
        printf("\n The factorial of %d is: %d",n, f);
}