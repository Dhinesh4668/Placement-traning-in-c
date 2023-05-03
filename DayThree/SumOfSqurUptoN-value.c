#include<stdio.h>
void main() {
    int n,i,temp,sum=0;
    printf("enter the valude:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        temp=i*i*i;
        printf("\n%d",temp);
        sum=sum+temp;
        i=i+1;
    }
//for(i=0;i<=n;i=i+1){
//    temp=i*i;
//    sum=sum+temp;
//    printf("\n%d",temp);
//}
    printf("\nSum of Sqre upto %d is : %d",n,sum);
}