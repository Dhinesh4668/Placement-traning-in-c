//#include "stdio.h"
//int sumOfAvg(int n){
//int sum,avg=0;
//(n==0||n==1)
 //   return 1;
//else

//}
#include <stdio.h>
int sum(int a[], int n); // function prototype
int average(int a[], int n); // function prototype

int sum(int a[], int n) // function definition
{
    if (n == 0) // base case
        return 0;
    else
        return a[n-1] + sum(a, n-1); // recursive call
}

int average(int a[], int n) // function definition
{
    return sum(a, n) / n; // use the sum function to calculate the average
}

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n]; // declare an array of n elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // read the elements
    }
    printf("Sum = %.2f\n", sum(a, n)); // print the sum
    printf("Average = %.2f\n", average(a, n)); // print the average
    return 0;
}
