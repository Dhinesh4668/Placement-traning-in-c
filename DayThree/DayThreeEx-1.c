#include<stdio.h>
int main(){
    int n,x,flag=0,m=0,i;
    printf("enter the number cheack number prime or not :");
    scanf("%d",&n);
    x=n;
    m=n/2;
    for(i=2;i<=m;i++){
        if(n%i==0){
            printf("%d is not a prime");
            flag=1;
            break;
        }
    }if(flag==0){
        printf("%d is a prime",x);
        return 0;
    }
}