//
// Created by dhine on 02-05-2023.
//
#include<stdio.h>
void main() {
    int a,b,c,d,e,temp;
    printf("enter the 5 value :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    temp=(a<b&&a<c&&a<d&&a<d&&a<e)?a:(b<a&&b<c&&b<d&&b<e)?b:(c<a&&c<b&&c<d&&c<d)?c:(c<a&&c<b&&c<d&&c<e)?d:e;
    printf("the smalest vale is :%d",temp);
}
