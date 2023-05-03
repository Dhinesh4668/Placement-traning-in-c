//#include<stdio.h>
//void main() {
//    int unit,total,depsoit;
//    float scharge,tax,total_bill;
//    printf("******************************************");
//    printf("\n\tEB-bill Calculation");
//    printf("\n******************************************");
//    printf("\nenter your eb units: ");
//    scanf("%d",&unit);
//    if(unit>0&&unit<=100){
//        total=(unit*2.25);
//        depsoit=200;
//        printf("your bill is :%d",total);
//    }else if(unit>100&&unit<=200){
//        total=(unit*3.35);
//        depsoit=200;
//        printf("your bill is : %d",total);
//    }else if(unit>200&&unit<=300){
//        total=(unit*4.45);
//        depsoit=200;
//        printf("your bill is : %d",total);
//    }else if(unit>300&&unit<=400){
//        total=(unit*5.55);
//        depsoit=200;
//        printf("your bill is : %d",total);
//    }else if(unit>400&&unit<=500){
//        total=(unit*6.66);
//        depsoit=200;
//        printf("your bill is : %d",total);
//    }else if(unit>500&&unit<=1000){
//        total=(unit*10.25);
//        depsoit=300;
//        printf("your bill is : %d",total);
//    }else if(unit>=1001&&unit<=3000){
//        total=(unit*15.25);
//        depsoit=400;
//        printf("your bill is : %d",total);
//    }else{
//        total=(unit*20);
//        depsoit=500;
//        printf("your bill is : %d",total);
//    }
//    //tax cal
//    tax=(total*4)/100;
//    printf("\nYour tax ammount is :%f",tax);
//    //surecharege calculation
//    scharge=((total*2)/100)-depsoit;
//    printf("\nYour surecharge is :%f",scharge);
//
//    printf("\n******************************************");
//    total_bill=total+scharge;
//    printf("\n The total amount is :$%0.2f/-",total_bill);
//    printf("\n******************************************");
//    printf("\n\nenter 0 to again calculate again 1 to exit..........  ");
//}



#include<stdio.h>
#define TAX_RATE 0.04
#define SURCHARGE_RATE 0.02

void main() {
    int unit,total,depsoit;
    float scharge,tax,total_bill;
    printf("******************************************");
    printf("\n\tEB-bill Calculation");
    printf("\n******************************************");
    printf("\nenter your eb units: ");
    scanf("%d",&unit);
    //use switch case instead of if-else for better readability and performance
    switch(unit/100){
        case 0: //unit>0&&unit<=100
            total=(unit*2.25);
            depsoit=200;
            break;
        case 1: //unit>100&&unit<=200
            total=(unit*3.35);
            depsoit=200;
            break;
        case 2: //unit>200&&unit<=300
            total=(unit*4.45);
            depsoit=200;
            break;
        case 3: //unit>300&&unit<=400
            total=(unit*5.55);
            depsoit=200;
            break;
        case 4: //unit>400&&unit<=500
            total=(unit*6.66);
            depsoit=200;
            break;
        default: //unit>500
            if(unit<=1000){
                total=(unit*10.25);
                depsoit=300;
            }else if(unit<=3000){
                total=(unit*15.25);
                depsoit=400;
            }else{
                total=(unit*20);
                depsoit=500;
            }
    }
    printf("your bill is : %d",total);
    //tax cal
    tax=(total*TAX_RATE); //use constants instead of hard-coded values
    printf("\nYour tax ammount is :%f",tax);
    //surecharege calculation
    scharge=((total*SURCHARGE_RATE)-depsoit); //use constants instead of hard-coded values
    printf("\nYour surecharge is :%f",scharge);

    printf("\n******************************************");
    total_bill=total+scharge;
    printf("\n The total amount is :$%0.2f/-",total_bill);
    printf("\n******************************************");
    printf("\n\nenter 0 to again calculate again 1 to exit..........  ");
}