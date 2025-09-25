/*
Name:Stephen Githinji
Reg no:CT101/G/26434/25
Description:Calculating the compound interest
*/
#include<stdio.h>
#include<math.h>

int main() {
    double principal, rate, time, compoundinterest,amount;
    int x;
    
    printf("enter the principal amount");
    scanf("%lf", &principal);
    
    printf("enter the annual interest rate");
    scanf("%lf", &rate);
    
    printf("enter time in(in years)");
    scanf("%lf", &time);
    
    printf("enter the number of times interest is compounded per year:");
    scanf("%d",&x);
    
    amount = principal * pow((1 +(rate/(100 * x))), x * time);
    compoundinterest = amount - principal;
    
    printf("total amount = %.2lf",amount);
    printf("compund Interest = %2lf", compoundinterest);
    
  return 0;
}