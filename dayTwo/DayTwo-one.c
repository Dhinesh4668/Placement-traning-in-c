#include<stdio.h>
#include<math.h>
int main() {
    int a,y2k;
    printf("enter the 2 values:");
    scanf("%d %d",&a,&y2k);
    printf("\n Add %d:",a+y2k);
    printf("\n Dev %d:",a/y2k);
    printf("\n Sub %d:",a-y2k);
    printf("\n Mul %d:",a*y2k);
    printf("\n Mod %d:",a%y2k);
}