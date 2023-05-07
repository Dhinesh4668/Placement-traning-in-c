#include<stdio.h>
struct employe{
    int empno;
    char ename[20];
    float bsal,ta,da,hra,allow,tsal;
};
int main(){
  struct employe obj[50];
  int i,n;
  printf("\nhow may employe detials to be stored:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nenter the employe of %d:",i+1);
        scanf("%d",&obj[i].empno);
        printf("\nenter the name of the employe %d:",i+1);
        scanf("%s",&obj[i].ename);
        printf("\nenter the salary employe of %d:",i+1);
        scanf("%d",&obj[i].bsal);



        obj[i].ta=obj[i].bsal*8/100;
        obj[i].da=obj[i].bsal*7/100;
        obj[i].hra=obj[i].bsal*12/100;
        obj[i].allow=obj[i].bsal*6/100;
        obj[i].tsal=obj[i].bsal+obj[i].da+obj[i].hra+obj[i].allow;
    }
    for(i=0;i<n;i++){
        printf("employe number of %d employe:%d",i+1,obj[i].empno);
        printf("employe number of %d employe:%s",i+1,obj[i].empno);
        printf("employe number of %d employe:%d",i+1,obj[i].bsal);
        printf("\n TA:%f",obj[i].ta);
        printf("\n DA:%f",obj[i].da);
        printf("\n HRA:%f",obj[i].hra);
        printf("\n allow:%f",obj[i].allow);
        printf("\n Total salary:%f",obj[i].tsal);


    }
    return 0;
}