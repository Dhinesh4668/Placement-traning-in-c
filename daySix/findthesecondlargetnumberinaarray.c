#include<stdio.h>
void main(){
//    int i,j,a,n,counter,ave,number[30];
//    printf ("Enter the value of N");
//    scanf ("%d", &n);
//    printf ("Enter the numbers");
//    for (i=0; i<n; ++i)
//        scanf ("%d",&number[i]);
//    for (i=0; i<n; ++i){
//        for (j=i+1; j<n; ++j){
//            if (number[i] < number[j]){
//                a = number[i];
//                number[i] = number[j];
//                number[j] = a;
//            }
//        }
//    }
//    printf ("The numbers arranged in descending order are given below");
//    for (i=0; i<n; ++i)
//        printf ("%10d",number[i]);
//    printf ("\nThe 2nd largest number is = %d", number[1]);

//    printf ("\nThe 2nd smallest number is = %d", number[n-2]);
//    ave = (number[1] +number[n-2])/2;
//    counter = 0;
//    for (i=0; i<n; ++i){
//        if (ave==number[i])
//            ++counter;
//    }
//    if (counter==0)
//        printf("\nThe average of 2nd largest & 2nd smallest is not in the array");
//    else
//        printf("\nThe average of 2nd largest & 2nd smallest in array is %d in numbers", counter);



//find the second largets nukmer in the  array
int arr[40],n,i,j,count,a;
printf("Enter the your array element :");
scanf("%d",&n);
//geting the array elements
printf("\nEnter your array element: ");
for(i=0;i<=n;i++)
//storinh the valude
    scanf("%d",arr[i]);

//to cheack the condition
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(arr[i]<arr[i]){
            a=arr[i];
            
        }

}