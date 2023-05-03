#include<stdio.h>
void main() {
    int nodd,neven,num,digit;
    printf("Count number of odd and even digits in a given integer number ");
    scanf("%d",&num);
    nodd = neven =0; /* count of odd and even digits */
    while(num>0){
        digit = num % 10; /* separate LS digit from number */
        if (digit % 2 == 1){
            ++nodd;
        }
        else {
            ++neven;
        }
        num /= 10; /* remove LS digit from num */
    }
    printf("Odd digits : %d Even digits: %d\n", nodd, neven);
}