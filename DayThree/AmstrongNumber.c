#include<stdio.h>
void main() {
    int i,n,r,s,x;
    printf("enter the number:");
    scanf("%d",&n);
    printf("\namstrong valude is: ");
    for(i=0;i<=n;i++){
        x=i;
        s=0;
        while(x!=0){
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }if(s==i)
            printf("%d\n",i);
    }
}