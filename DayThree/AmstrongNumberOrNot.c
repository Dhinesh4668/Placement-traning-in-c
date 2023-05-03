//the amstrong number or not
#include<stdio.h>
int main(){
    int n,m,r,sum=0,temp=0;
    printf("enter the number : ");
    scanf("%d",&n);
    m=n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }if (temp==sum){
        printf("%d is a armstrong number", m);

    }else{
        printf("%d is not armstrong number", m);
    }
    return 0;
}