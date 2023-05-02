#include<stdio.h>
void main(){
    int a;
    printf("\n enter your value :");
    scanf("%d",&a);
    if((a/2)*2==a){
        printf("even");
    }else{
        printf("odd");
    }
}