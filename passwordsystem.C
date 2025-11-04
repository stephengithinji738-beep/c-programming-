/*
NAME:STEPHEN GITHINJI
REG NO;CT101/G/26434/25
DESCRIPTION:PASSWORD SYSTEM
*/
#include <stdio.h>

int main() {
    int password;
    do{
        printf("Enter password:");
        scanf("%d",&password);
        
        if(password != 1234)
           printf("Incorrect password! Try again.\n");
    } while (password != 1234);
    
    printf("Acess Granted.\n");

    return 0;
}