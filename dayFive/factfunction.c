#include "stdio.h"
int getinput();
int findfact();
int main(){
    int x;
    printf("\nreverse input form getinput function: ");
    x=getinput();
    printf("\nfact of %d is %d ",x,findfact(x));
}

//function
int getinput() {
    int n;
    printf("\n enter the valude :");
    scanf("%d", &n);
    return n;
}
//function fact
int findfact(){
    int i=0,j=0;
    int n;
    while(i<=n){
        int f;
        f=f*i;
        i++;
    }
    return 0;
}

