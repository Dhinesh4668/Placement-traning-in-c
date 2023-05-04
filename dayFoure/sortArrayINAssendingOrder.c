#include<stdalign.h>
#include<conio.h>
int main(){
    int arr[500],n,i,j,t;
    printf("\nEnter the limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n enter the %d vale: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Given Array is: ");
    for(i=0;i<n;i++){
        printf("\t %d",arr[i]);
        for(i=0;i<n;i++){
            for(j=i+i;j<n;j++){
                //main looping
                if (arr[i]>arr[j])
                {
                    /* code */
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        printf("\n sort array is asending is :");
        for(i=0;i<n;i++){
            printf("\t%d",arr[i]);
        }
    }
}