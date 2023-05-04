#include<stdio.h>
int main(){
    int a,b,i=1,mul,range,temp;
    printf("enter the a and b value: ");
    scanf("%d%d",&a,&b);
    printf("\nEnter the range of calculation: ");
    scanf("%d",&range);
    while(i<=range){
        i++;
        printf("\n%d*%d=%d",a,b,a*b);
    }
}