#include<stdio.h>
int main(){
    int a[1000],n,i,sum=0;
    printf("rnter the size of arr:");
    scanf("%d",n);
    i=0;
    while(i<n){
        i++;
    }for(i=0;i<n;i++) {
        sum=sum+1;
    }
    int avg = sum/n;
    printf("the sum of enter arr is %d",avg);
}