/*
NAME:STEPHEN GITHINJI
REG NO;CT101/G/26434/25
DESCRIPTION:ATM WITHDRAWAL AND BALANCE
*/
#include <stdio.h>

int main() {
    float balance,withdraw;
    
    printf("Enter your initial account balance:");
    scanf("%f",&balance);
    
    while(balance > 0){
        printf("\nEnter amount to withdraw:");
        scanf("%f",&withdraw);
        balance -= withdraw;
        
        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
        printf("Balance is zero or negative. Transaction stopped. \n ");
    }

    return 0;
}