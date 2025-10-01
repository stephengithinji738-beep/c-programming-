/*
NAME:STEPHEN GITHINJI
REG No:CT101/G/26434/25
DESCRIPTION:PRICE OF WATER CONSUMED
*/
#include <stdio.h>

int main() {
    int water_units;
    float water_bill;
    
    printf("Enter water units consumed:");
    scanf("%d",&water_units);
    
    if(water_units <= 30) {
        water_bill = water_units * 20;
    }
    else if (water_units <= 60){
        water_bill = (30 * 20) + (water_units - 30) * 25; 
        }
        else{
           water_bill = (30 * 20) + (30 * 25) + (water_units - 60) * 30;
            }
    printf("Total water bill: %.2fKsh\n", water_bill);        
        
    
     return 0;
}