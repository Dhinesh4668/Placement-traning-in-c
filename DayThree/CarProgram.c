#include<stdio.h>
#define SER_CHRG 2.75
void main() {
    float dis,totalDis,total,service_charge,totalBill;
    int driverAlonce;
    printf("\n************************************");
    printf("\ndistance calculation");
    printf("\n************************************");
    printf("\nEnter your Traveled Distance: ");
    scanf("%f",&dis);
    switch((int )dis/100){
        case 0:
            totalDis=(dis*0.15);
            driverAlonce=150;
            break;
        case 1:
            totalDis=(dis*0.2);
        driverAlonce=250;
            break;
        case 2:
            totalDis=(dis*0.25);
            driverAlonce=350;
            break;
        case 3:
            totalDis=(dis*0.3);
            driverAlonce=450;
            break;
        case 4:
            totalDis=(dis*0.35);
            driverAlonce=550;
            break;
    }if(dis>500){
        totalDis=(dis*0.4);
        driverAlonce=750;
    }
    total = totalDis; //assigning totalDis to total
    //service charege
    service_charge=((totalDis*SER_CHRG)-driverAlonce);
    printf("\nThe Driver Service Charge is :%f",service_charge);
    //convenious Amount
    totalBill=totalDis+service_charge;
    printf("\nThe Driver Service Charge is :%f",totalBill);
    printf("\nYou will pay the :%.2f",total); //printing total with two decimal places
}