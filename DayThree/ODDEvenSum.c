#include<stdio.h>
void main(){
    int n,i,sum,even=0,odd=0,temp;
    printf("Enter the linit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(i%2==0){
        printf("odd num");
        odd = odd+1;
    }else {
        even = even+1;
        printf("even num");
    }

    }
}