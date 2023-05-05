#include "stdio.h"
int fact(int n){
 if(n==0||n==1)
    return 1;
 else
    return(n*fact(n-1));

}

int main(){
int n;
printf("enter the value to find its factorial:");
scanf("%d",&n);
printf("\n%d factorial value is:%d",n,fact(n));
}
