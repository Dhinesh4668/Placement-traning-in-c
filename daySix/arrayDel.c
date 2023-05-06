#include<stdio.h>
int main(){
    int arr[50];
    int i,n,loc;
    printf("enter the no of element to stord :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter element:");
        scanf("%d",&arr[i]);

    }
    printf("\nlocation of the element to be stored :");
    scanf("%d",&loc);
    --loc;
    printf("\n Element to be deleted : %d", arr[loc]);
    printf("\n given array");
    for(i=0;i<n;i++)
        printf("\t%d", arr[i]);
        loc++;
    while(loc<n){
        arr[loc-1]=arr[loc];
        loc++;
    }
    n--;
    printf("\n array after delection:");
    for (i=0;i<n;i++)
        printf("\t%d",arr[i]);

}