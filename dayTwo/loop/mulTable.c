#include<stdio.h>
void main() {
    int a,l,i;
    printf("enter the table: ");
    scanf("%d",&a);
    printf("enter the limit:");
    scanf("%d",&l);
    printf("\n\t*****forloop*****");
    for( i=0;i<=l;i++){
        printf("\n%d*%d=%d",i,a,i*a);
    }
    i=0;
    printf("\n\t*****whileLoop*****");
    while(i<=l){
        printf("\n%d*%d=%d",i,a,i*a);
        i++;
    }
    printf("\n\t*****dowhileLoop*****");
    do{
        i++;
    }while(i<=l);
        printf("\n%d*%d=%d",i,a,i*a);
}