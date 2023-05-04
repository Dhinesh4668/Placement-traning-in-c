#include<stdio.h>
int main() {
char str[50],rev[50];
int i,j,len;
printf("\n enter the input :" );\
gets(str);
len = 0; // initialize len to zero
i=0;
while(str[i]!=0){
    len++;
    i++;
}
printf("\n Givern string is:%s",str);
printf("\n length is :%d",len);
for(i=0,j=len-1;i<len,j>=0;i++,j--){
        rev[i]=str[j];
}
printf("\n Reversed string is :%s",rev);
}
