#include<stdio.h>
void main(){
    int n1=0,n2=1,n3,n,i=2;
    printf("enter u r linit :");
    scanf("%d",&n);
    while(i<=n){
        i++;
        n3=n2+n1;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
    }
//do{
//    n3=n2+n1;
//    i++;
//    n1=n2;
//    n2=n3;
//}while(i<=n);
//    printf("\n%d",n3);
}