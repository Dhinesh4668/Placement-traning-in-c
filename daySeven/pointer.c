#include "stdio.h"
int main(){
    int x=50;
    int *p=&x;
    printf("\nx=%d",x);
    printf("the add of x:%u",&x);
    printf("\npointer valude :%u",p);
}